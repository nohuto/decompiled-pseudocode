/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x14033EC20
 * Callers:
 *     MiSetIdealProcessorThread @ 0x140333A84 (MiSetIdealProcessorThread.c)
 *     MiReduceZeroingThreads @ 0x14033DC54 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x14033E8C0 (KiCallInterruptServiceRoutine.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140377B84 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1CC4 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A4CE0 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403AA610 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CA2B0 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x1406F8CE0 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
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
