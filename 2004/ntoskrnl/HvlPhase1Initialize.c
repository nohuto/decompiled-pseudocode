/*
 * XREFs of HvlPhase1Initialize @ 0x1403CC54C
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B8D0 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A2D90 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EC3BC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x1404EDE60 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EEC2C (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1404F2F80 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 *     VslpIumPhase0Initialize @ 0x140A8CA68 (VslpIumPhase0Initialize.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A8FA5C (MmMarkHypercallPageRetpolineBit.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    MmMarkHypercallPageRetpolineBit();
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v4 = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, &v4, &v5) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v5, 4096LL, 2u);
    }
    LOBYTE(v3) = 1;
    HvlConfigureMemoryZeroingOnReset(v3);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2504LL);
  }
  return 0LL;
}
