/*
 * XREFs of MiQueuePageFileExtension @ 0x14054403C
 * Callers:
 *     MiContractPagingFiles @ 0x140273D28 (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x140543B84 (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x14055C6F0 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rdi
  KIRQL v4; // si
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  __int64 SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  if ( a3 == 17 )
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1344));
  v7 = (_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v8 = *(_QWORD **)(v3 + 1576);
    if ( *v8 == v3 + 1568 )
    {
      *v7 = v3 + 1568;
      *(_QWORD *)(a1 + 16) = v8;
      *v8 = v7;
      *(_QWORD *)(v3 + 1576) = v7;
      goto LABEL_10;
    }
LABEL_7:
    __fastfail(3u);
  }
  v9 = *(_QWORD **)(v3 + 1592);
  if ( *v9 != v3 + 1584 )
    goto LABEL_7;
  *v7 = v3 + 1584;
  *(_QWORD *)(a1 + 16) = v9;
  *v9 = v7;
  *(_QWORD *)(v3 + 1592) = v7;
  if ( *(_QWORD *)(a1 + 32) != -1LL )
    ++*(_DWORD *)(v3 + 1868);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v14 = (v13 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        *(_DWORD *)(SchedulerAssist + 20) &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return KeReleaseSemaphoreEx(v3 + 1520, 0, 1, SchedulerAssist, a2);
}
