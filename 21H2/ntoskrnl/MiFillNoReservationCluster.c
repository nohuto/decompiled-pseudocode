/*
 * XREFs of MiFillNoReservationCluster @ 0x1402BF8A0
 * Callers:
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiReferencePageForModifiedWrite @ 0x1402568EC (MiReferencePageForModifiedWrite.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiFillNoReservationCluster(_DWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
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
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r12d
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  char v28; // [rsp+60h] [rbp+8h]
  unsigned int v29; // [rsp+70h] [rbp+18h]

  v29 = a3;
  v3 = (_QWORD *)a2;
  if ( !a1[290] || (v5 = &a1[10 * a1[289] + 704], !*v5) )
    v5 = a1 + 688;
  v6 = 0;
  v28 = 1;
  do
  {
    v7 = v5[2];
    if ( v7 == 0xFFFFFFFFFLL )
      break;
    v8 = 48 * v7 - 0x58000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8, a2, a3);
    if ( v7 != v5[2] )
      goto LABEL_7;
    if ( !a1[259]
      || !(unsigned int)MI_PFN_IS_PROTO(48 * v7 - 0x58000000000LL)
      || (*(_QWORD *)(v8 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0
      || !(unsigned int)MiSufficientAvailablePages((__int64)a1, 0xA0uLL) )
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
    MiReservePageFileSpace((__int64)a1, v15, 0LL);
    v9 = (unsigned __int8)MiLockPageInline(48 * v7 - 0x58000000000LL, v20, v21);
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
            a2 = -1LL << ((unsigned __int8)v9 + 1);
            v12 = v11->SchedulerAssist;
            v13 = ~(unsigned __int16)a2;
            v14 = (v13 & v12[5]) == 0;
            a3 = (unsigned int)v13 & v12[5];
            v12[5] = a3;
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
      v22 = MiReferencePageForModifiedWrite(48 * v7 - 0x58000000000LL, v28);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v9 + 1);
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)a2;
            v14 = (v26 & v25[5]) == 0;
            a3 = (unsigned int)v26 & v25[5];
            v25[5] = a3;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8((unsigned __int8)v9);
      if ( !v22 )
        break;
      v28 &= ~1u;
      ++v6;
      *v3++ = v7;
      if ( v22 == 3 && v6 >= 0x10 )
        break;
    }
  }
  while ( v6 < v29 );
  if ( v6 > 1 )
    qsort(&v3[-v6], v6, 8uLL, (int (__cdecl *)(const void *, const void *))MiModifiedWriterNoReservationSort);
  return v6;
}
