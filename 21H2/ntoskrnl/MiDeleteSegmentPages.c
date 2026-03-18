/*
 * XREFs of MiDeleteSegmentPages @ 0x14027034C
 * Callers:
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 *     MiInitializeImageExtents @ 0x1409706E4 (MiInitializeImageExtents.c)
 * Callees:
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x140287C30 (MiGetCommittedPages.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 a1)
{
  __int64 v2; // rdx
  BOOL v3; // ebp
  __int64 v4; // r14
  _QWORD *v5; // rdi
  __int64 v6; // r12
  int v7; // ebx
  KIRQL v8; // al
  unsigned __int64 v9; // rdi
  KIRQL v10; // r13
  volatile LONG *v11; // rcx
  __int64 CommittedPages; // rdi
  void *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  _DWORD *v23; // r8
  unsigned __int64 v24; // rdx
  struct _KPRCB *v25; // r9
  __int64 CachedResidentAvailable; // r8
  signed __int32 v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  __int64 v29; // [rsp+70h] [rbp+18h]

  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v29 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C51F48 + 8 * v2);
  if ( *(_QWORD *)(a1 + 64) )
    v3 = (*(_BYTE *)(a1 + 56) & 0x20) == 0;
  v5 = (_QWORD *)(a1 + 128);
  v6 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  while ( v5 )
  {
    v6 += MiDeleteSubsectionPages((ULONG_PTR)v5);
    if ( v3 && *(_QWORD *)(*v5 + 64LL) && (*(_BYTE *)(*v5 + 62LL) & 0xC) == 8 )
    {
      v14 = (void *)v5[14];
      if ( v14 )
      {
        MiDeleteFileExtentList(v14);
        v5[14] = 0LL;
      }
    }
    v5 = (_QWORD *)v5[2];
  }
  v28 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = v8;
  v10 = v8;
  while ( 1 )
  {
    v11 = (volatile LONG *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    KeYieldProcessorEx(&v28);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v23 = v21->SchedulerAssist;
        v19 = (v22 & v23[5]) == 0;
        v23[5] &= v22;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(v9);
  CommittedPages = MiGetCommittedPages(a1);
  if ( CommittedPages )
  {
    if ( (v7 & 0x1000) != 0 )
    {
      v24 = CommittedPages - v29;
      if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      {
        v25 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v25->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v24 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v24 >= 0x80000 )
                break;
              v27 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v25->CachedResidentAvailable,
                      CachedResidentAvailable + v24,
                      CachedResidentAvailable);
              v19 = (_DWORD)CachedResidentAvailable == v27;
              LODWORD(CachedResidentAvailable) = v27;
              if ( v19 )
                goto LABEL_15;
            }
            while ( v27 != -1 && v24 + v27 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v25->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v24 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v24 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 16960), v24);
    }
LABEL_15:
    MiReturnCommit(v4, CommittedPages - v29);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17528), -CommittedPages);
  }
  return v6;
}
