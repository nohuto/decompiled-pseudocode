/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x140328210
 * Callers:
 *     MiSetIdealProcessorThread @ 0x1403269D0 (MiSetIdealProcessorThread.c)
 *     MiReduceZeroingThreads @ 0x140327AC0 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x140327EB0 (KiCallInterruptServiceRoutine.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140374DE4 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A2080 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403AE040 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404C68A0 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x1406F0210 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
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
