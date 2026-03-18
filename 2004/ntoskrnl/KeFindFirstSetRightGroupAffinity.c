/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402DE3F0
 * Callers:
 *     MiReduceZeroingThreads @ 0x1402DDCA4 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140375BF4 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F7F4 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A2810 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403A7C20 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404C6D50 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
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
