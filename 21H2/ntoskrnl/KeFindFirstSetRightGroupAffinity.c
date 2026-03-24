/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x14027B530
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14027A9B0 (KiCallInterruptServiceRoutine.c)
 *     MiReduceZeroingThreads @ 0x1402BB870 (MiReduceZeroingThreads.c)
 *     MiSetIdealProcessorThread @ 0x1402ECE20 (MiSetIdealProcessorThread.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140378014 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A2584 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A55A0 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0510 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBC80 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x14064DC60 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
