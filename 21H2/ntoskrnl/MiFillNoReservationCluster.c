/*
 * XREFs of MiFillNoReservationCluster @ 0x14023DCF0
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // r13
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // r12d
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  int v26; // [rsp+60h] [rbp+8h]

  if ( !a1[290] || (v5 = &a1[10 * a1[289] + 704], !*v5) )
    v5 = a1 + 688;
  v6 = 0;
  v26 = 1;
  do
  {
    v7 = v5[2];
    if ( v7 == 0xFFFFFFFFFLL )
      break;
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8);
    if ( v7 != v5[2] )
      goto LABEL_7;
    if ( !a1[259]
      || !(unsigned int)MI_PFN_IS_PROTO(48 * v7 - 0x58000000000LL)
      || (*(_QWORD *)(v8 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0
      || !(unsigned int)MiSufficientAvailablePages(a1, 160LL) )
    {
      goto LABEL_28;
    }
    v15 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
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
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    MiReservePageFileSpace(a1, v15, 0LL);
    v9 = (unsigned __int8)MiLockPageInline(48 * v7 - 0x58000000000LL);
    if ( v7 != v5[2] )
    {
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v10 = KeGetCurrentIrql();
          if ( v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
          {
            v11 = KeGetCurrentPrcb();
            v12 = v11->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
LABEL_28:
      v20 = MiReferencePageForModifiedWrite(48 * v7 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( !v20 )
        break;
      v26 &= ~1u;
      ++v6;
      *a2++ = v7;
      if ( v20 == 3 && v6 >= 0x10 )
        break;
    }
  }
  while ( v6 < a3 );
  if ( v6 > 1 )
    qsort(&a2[-v6], v6, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v6;
}
