/*
 * XREFs of MiDeleteSegmentPages @ 0x14030295C
 * Callers:
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiInitializeImageExtents @ 0x1408D01CC (MiInitializeImageExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 CommittedPages; // rdi
  __int64 CachedResidentAvailable; // r8
  struct _KPRCB *v12; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8
  unsigned __int64 v23; // rdx
  signed __int32 v24; // eax
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h]

  v1 = a1 + 16;
  v2 = *((_WORD *)a1 + 30) & 0x3FF;
  v25 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(qword_140C4E688 + 8 * v2);
  v6 = *a1;
  v26 = v5;
  v7 = *(_DWORD *)(v6 + 12);
  while ( v1 )
  {
    v8 = MiDeleteSubsectionPages(v1, (__int64)&v25);
    v1 = (__int64 *)v1[2];
    v4 += v8;
  }
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  if ( a1[4] )
  {
    do
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      _mm_pause();
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
    }
    while ( a1[4] );
    v5 = v26;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v9);
  CommittedPages = MiGetCommittedPages(a1);
  if ( CommittedPages )
  {
    if ( (v7 & 0x1000) != 0 )
    {
      v23 = CommittedPages - v25;
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v12 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v12->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v23 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v23 >= 0x80000 )
                break;
              v24 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v12->CachedResidentAvailable,
                      CachedResidentAvailable + v23,
                      CachedResidentAvailable);
              v18 = (_DWORD)CachedResidentAvailable == v24;
              CachedResidentAvailable = v24;
              if ( v18 )
                goto LABEL_8;
            }
            while ( v24 != -1 && v23 + v24 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v12->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v23 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v23 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v23);
    }
LABEL_8:
    MiReturnCommit(v5, CommittedPages - v25, CachedResidentAvailable, v12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7624), -CommittedPages);
  }
  return v4;
}
