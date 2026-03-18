/*
 * XREFs of MiFreeSlabEntry @ 0x1405B0E30
 * Callers:
 *     MiFreeSlabEntries @ 0x14023A710 (MiFreeSlabEntries.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC (MiUpdateSlabPagePlaceholderState.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSlabEntry(__int64 a1, ULONG_PTR *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // r10
  char v20; // r9
  volatile signed __int32 *v21; // r8
  int v22; // r10d
  unsigned __int64 v23; // rcx
  int v24; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 48 * a2[3] - 0x220000000000LL;
  v8 = 48 * a2[4] - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5];
    v10 = 2LL;
    SchedulerAssist[5] = a3;
  }
  if ( v7 <= v8 )
  {
    v11 = v7 + 24;
    do
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24, v10, a3, (__int64)SchedulerAssist);
        while ( *(__int64 *)v11 < 0 );
      }
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v11 + 16) >> 43) & 0x3FFLL));
      if ( *(_DWORD *)(a1 + 48) <= 3u )
        MiSetPfnIdentity(v11 - 24, 0);
      v10 = 2LL;
      v12 = *(_QWORD *)v11 & 0xC000000000000000uLL | 1;
      *(_WORD *)(v11 + 8) = 2;
      *(_QWORD *)v11 = v12;
      *(_BYTE *)(v11 + 10) = *(_BYTE *)(v11 + 10) & 0xF8 | 6;
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
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
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
  MiUpdateSlabPagePlaceholderState(a1, a2[3], 512LL, 0);
  LOBYTE(v18) = 1;
  v19 = a2[3] >> 9;
  v20 = v19 & 0x1F;
  v21 = (volatile signed __int32 *)(qword_140C58DE0 + 4 * (a2[3] >> 14));
  if ( (v19 & 0x1F) + 1 > 0x20 )
  {
    if ( (v19 & 0x1F) == 0 )
      goto LABEL_29;
    v22 = v19 & 0x1F;
    _InterlockedAnd(v21++, ~(((1 << (32 - v22)) - 1) << v20));
    v18 = 1LL - (unsigned int)(32 - v22);
    if ( v18 >= 0x20 )
    {
      v23 = v18 >> 5;
      v18 += -32LL * (v18 >> 5);
      do
      {
        *v21++ = 0;
        --v23;
      }
      while ( v23 );
    }
    if ( v18 )
LABEL_29:
      _InterlockedAnd(v21, -1 << v18);
  }
  else
  {
    _InterlockedAnd(v21, ~(1 << v20));
  }
  MiFreeLargePageMemory(a2[3], 1u, 6u);
  ExFreePoolWithTag(a2, 0);
}
