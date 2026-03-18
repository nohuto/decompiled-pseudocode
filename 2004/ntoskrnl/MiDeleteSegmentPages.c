/*
 * XREFs of MiDeleteSegmentPages @ 0x140260670
 * Callers:
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 *     MiInitializeImageExtents @ 0x1408CCA6C (MiInitializeImageExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x14024A698 (MiGetCommittedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  unsigned __int64 v21; // rdx
  struct _KPRCB *v22; // r9
  __int64 CachedResidentAvailable; // r8
  signed __int32 v24; // eax
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h]

  v1 = a1 + 16;
  v2 = *((_WORD *)a1 + 30) & 0x3FF;
  v25 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(qword_140C4E448 + 8 * v2);
  v6 = *a1;
  v26 = v5;
  v7 = *(_DWORD *)(v6 + 12);
  while ( v1 )
  {
    v8 = MiDeleteSubsectionPages(v1, &v25);
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
            v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
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
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v20 = v18->SchedulerAssist;
        v16 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v9);
  CommittedPages = MiGetCommittedPages(a1);
  if ( CommittedPages )
  {
    if ( (v7 & 0x1000) != 0 )
    {
      v21 = CommittedPages - v25;
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v22 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v22->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v21 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v21 >= 0x80000 )
                break;
              v24 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v22->CachedResidentAvailable,
                      CachedResidentAvailable + v21,
                      CachedResidentAvailable);
              v16 = (_DWORD)CachedResidentAvailable == v24;
              LODWORD(CachedResidentAvailable) = v24;
              if ( v16 )
                goto LABEL_8;
            }
            while ( v24 != -1 && v21 + v24 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v21 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v21 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v21);
    }
LABEL_8:
    MiReturnCommit(v5, CommittedPages - v25);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7624), -CommittedPages);
  }
  return v4;
}
