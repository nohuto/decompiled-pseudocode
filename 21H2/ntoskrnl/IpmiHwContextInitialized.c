/*
 * XREFs of IpmiHwContextInitialized @ 0x1406528CC
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064331C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x1406528E8 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140652CAC (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140652DB0 (IpmiLibAddSelCheckpointRecord.c)
 *     WheaQuerySystemInformation @ 0x140A08710 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x140A087A4 (WheaSelLogCheckPoint.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall IpmiHwContextInitialized(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
