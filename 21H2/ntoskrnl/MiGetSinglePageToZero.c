/*
 * XREFs of MiGetSinglePageToZero @ 0x140365A34
 * Callers:
 *     MiGetPagesToZero @ 0x14054FF8C (MiGetPagesToZero.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiBeginPageAccessor @ 0x14031FB98 (MiBeginPageAccessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v5; // rdx
  int v6; // r13d
  unsigned __int64 v7; // rdi
  unsigned int i; // r15d
  ULONG_PTR v9; // rsi
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf
  int v15; // edx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  int v18; // eax
  int v19; // eax
  int v20; // esi
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // edx
  int v26; // [rsp+60h] [rbp+8h]
  __int64 v27; // [rsp+68h] [rbp+10h]

  v26 = *(_DWORD *)(a2 + 260);
  v5 = *(_QWORD *)(a1 + 2184);
  v6 = 0;
  v27 = v5;
  LOBYTE(v7) = 17;
  for ( i = 0; i < 2; ++i )
  {
    do
    {
      v9 = *(_QWORD *)(v5 + 40LL * *(unsigned int *)(a2 + 260) + 16);
      if ( v9 == 0xFFFFFFFFFLL )
        goto LABEL_6;
      v10 = 48 * v9 - 0x58000000000LL;
      if ( !i && *(__int64 *)(v10 + 24) < 0 )
      {
        v6 = 1;
LABEL_6:
        v10 = 0LL;
      }
      if ( !v10 )
        goto LABEL_21;
      v7 = (unsigned __int8)MiLockPageInline(v10, v5, 0xFFFFFFFFFLL, SchedulerAssist);
      if ( v9 <= 0xFFFFFFFFFLL
        && (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0
        && (*(_BYTE *)(v10 + 34) & 7) == 1
        && (*(_QWORD *)(v10 + 40) & 0x1000000000LL) == 0 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 8) == 0 )
        {
          v6 = 0;
          break;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v14 = (v13 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v7);
        v10 = 0LL;
LABEL_21:
        v15 = *(_DWORD *)(a2 + 260) & ~dword_140C4DEC0 | dword_140C4DEC0 & (*(_DWORD *)(a2 + 260) + 1);
        *(_DWORD *)(a2 + 260) = v15;
        goto LABEL_22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            SchedulerAssist = v17->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v14 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
      }
      __writecr8(v7);
      v15 = *(_DWORD *)(a2 + 260);
      v10 = 0LL;
LABEL_22:
      v14 = v15 == v26;
      v5 = v27;
    }
    while ( !v14 );
    if ( !v6 )
      break;
    v5 = v27;
  }
  if ( !v10 )
    return 0LL;
  if ( *(_WORD *)(v10 + 32) )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v9, *(unsigned int *)(v10 + 32), *(_QWORD *)(v10 + 8));
  v19 = MiBeginPageAccessor(a2, v10);
  v20 = v19;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8((unsigned __int8)v7);
  if ( v20 )
    return v10;
  else
    return 0LL;
}
