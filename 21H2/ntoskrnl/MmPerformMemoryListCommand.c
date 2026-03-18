/*
 * XREFs of MmPerformMemoryListCommand @ 0x140A5B810
 * Callers:
 *     MmIssueMemoryListCommand @ 0x140862398 (MmIssueMemoryListCommand.c)
 *     PfpLogScenarioEvent @ 0x140986F94 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PoBroadcastSystemState @ 0x140A4A768 (PoBroadcastSystemState.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A6AA08 (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiFlushAllPages @ 0x14038A880 (MiFlushAllPages.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1403DD3F8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x14059673C (MiEmptyAllWorkingSets.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  int v1; // r8d
  int v2; // r8d
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3);
    return 0LL;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    MiFlushAllPages(ProcessPartition, 0);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 8;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8);
    return 0LL;
  }
  return 3221225659LL;
}
