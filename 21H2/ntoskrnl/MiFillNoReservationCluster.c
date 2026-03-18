/*
 * XREFs of MiFillNoReservationCluster @ 0x14037E554
 * Callers:
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MiReferencePageForModifiedWrite @ 0x14028C14C (MiReferencePageForModifiedWrite.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // r12d
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  char v27; // [rsp+60h] [rbp+8h]

  if ( a1[294] && *(_QWORD *)&a1[22 * a1[293] + 928] )
    v5 = (__int64 *)&a1[22 * a1[293] + 932];
  else
    v5 = (__int64 *)(a1 + 900);
  v6 = 0LL;
  v27 = 1;
  do
  {
    v7 = *v5;
    if ( *v5 == 0x3FFFFFFFFFLL )
      break;
    v8 = 48 * v7 - 0x220000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 != *v5 )
      goto LABEL_18;
    if ( !a1[265] )
      goto LABEL_8;
    v12 = *(_QWORD *)(v8 + 40);
    if ( v12 >= 0 || (v12 & 0x10000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0 )
      goto LABEL_8;
    if ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, 0xA0uLL) )
      goto LABEL_8;
    v18 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    MiReservePageFileSpace((__int64)a1, v18, 0LL);
    v9 = (unsigned __int8)MiLockPageInline(48 * v7 - 0x220000000000LL);
    if ( v7 != *v5 )
    {
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v13 >= 2u )
          {
            v14 = KeGetCurrentPrcb();
            v15 = v14->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
LABEL_8:
      v10 = MiReferencePageForModifiedWrite(48 * v7 - 0x220000000000LL, v27);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v17 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( !v10 )
        break;
      v27 &= ~1u;
      v6 = (unsigned int)(v6 + 1);
      *a2++ = v7;
      if ( v10 == 3 && (unsigned int)v6 >= 0x10 )
        break;
    }
  }
  while ( (unsigned int)v6 < a3 );
  if ( (unsigned int)v6 > 1 )
    qsort(&a2[-v6], (unsigned int)v6, 8uLL, MiModifiedWriterNoReservationSort);
  return (unsigned int)v6;
}
