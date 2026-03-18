/*
 * XREFs of MiQueuePageFileExtension @ 0x14059CE7C
 * Callers:
 *     MiContractPagingFiles @ 0x140216C84 (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x14059C99C (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x1405B7340 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rbx
  KIRQL v4; // di
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  _DWORD *SchedulerAssist; // r9
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
    ++*(_DWORD *)(v3 + 2028);
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
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return KeReleaseSemaphoreEx((volatile signed __int32 *)(v3 + 1520), 0LL, 1LL, SchedulerAssist, a2);
}
