/*
 * XREFs of MmPerformMemoryListCommand @ 0x14099D5CC
 * Callers:
 *     PfpLogScenarioEvent @ 0x1407727B4 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x140789144 (MmIssueMemoryListCommand.c)
 *     PfpPowerActionStartScenarioTracing @ 0x14099372C (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x1409939B4 (PfPowerActionNotify.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x14099BFB0 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiPurgePartitionStandby @ 0x140384224 (MiPurgePartitionStandby.c)
 *     MiFlushAllPages @ 0x140386588 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1403A526C (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1405396F8 (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  int v1; // r8d
  _DWORD *v2; // r9
  int v3; // r8d
  int v4; // edx
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // r8
  unsigned int v9; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  v3 = v1 - 1;
  if ( !v3 )
  {
    v4 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v4);
    return 0LL;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MiFlushAllPages(ProcessPartition, 0);
    return 0LL;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v8 )
  {
    v9 = 8;
    goto LABEL_14;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v9 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v9, v8, v2);
    return 0LL;
  }
  return 3221225659LL;
}
