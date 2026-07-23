/*
 * XREFs of MiFreeSlabEntry @ 0x140552E10
 * Callers:
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiSetPfnPageState @ 0x140334C50 (MiSetPfnPageState.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375478 (MiUpdateSlabPagePlaceholderState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  ULONG_PTR *v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // di
  __int16 v10; // r10
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // r10
  char v20; // r9
  volatile signed __int32 *v21; // r8
  int v22; // eax
  int v23; // r10d
  unsigned __int64 v24; // rcx
  int v25; // [rsp+58h] [rbp+10h] BYREF

  v5 = (ULONG_PTR *)a2;
  v6 = 0LL;
  v7 = 48LL * *(_QWORD *)(a2 + 24) - 0x58000000000LL;
  v8 = 48LL * *(_QWORD *)(a2 + 32) - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( v7 <= v8 )
  {
    v11 = v7 + 24;
    do
    {
      v25 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v25, a2, a3, (__int64)SchedulerAssist);
          while ( *(__int64 *)v11 < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0x3FuLL) );
        v10 = 2;
      }
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v11 + 16) >> 39) & 0x3FFLL));
      if ( !*(_DWORD *)(a1 + 48) )
        *(_QWORD *)(v11 + 16) &= 0x8FFFFFFFFFFFFFFFuLL;
      v12 = *(_QWORD *)v11 & 0xC000000000000001uLL;
      *(_WORD *)(v11 + 8) = v10;
      *(_QWORD *)v11 = v12 | 1;
      MiSetPfnPageState(v11 - 24, 6);
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      v11 += 48LL;
    }
    while ( v11 - 24 <= v8 );
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= (unsigned __int8)v10 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  MiUpdateSlabPagePlaceholderState(a1, v5[3], 512LL, 0);
  LOBYTE(v18) = 1;
  v19 = v5[3] >> 9;
  v20 = v19 & 0x1F;
  v21 = (volatile signed __int32 *)(qword_140C525C8 + 4 * (v5[3] >> 14));
  if ( (v19 & 0x1F) + 1 <= 0x20 )
  {
    v22 = 1 << v20;
LABEL_31:
    _InterlockedAnd(v21, ~v22);
    goto LABEL_32;
  }
  if ( (v19 & 0x1F) == 0 )
    goto LABEL_30;
  v23 = v19 & 0x1F;
  _InterlockedAnd(v21++, ~(((1 << (32 - v23)) - 1) << v20));
  v18 = 1LL - (unsigned int)(32 - v23);
  if ( v18 >= 0x20 )
  {
    v24 = v18 >> 5;
    v18 += -32LL * (v18 >> 5);
    do
    {
      *v21++ = 0;
      --v24;
    }
    while ( v24 );
  }
  if ( v18 )
  {
LABEL_30:
    v22 = (1 << v18) - 1;
    goto LABEL_31;
  }
LABEL_32:
  MiFreeLargePageMemory(v5[3], 1u, 6u);
  ExFreePoolWithTag(v5, 0);
}
