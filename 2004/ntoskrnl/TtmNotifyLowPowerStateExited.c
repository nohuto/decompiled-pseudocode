/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1408FB5A0
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EB1E0 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1408FBD68 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x140900400 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3164LL, (unsigned int)v2, (unsigned int)v2);
  }
}
