/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402694D0
 * Callers:
 *     MiReduceZeroingThreads @ 0x140239A80 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140377B64 (KiIntSteerChooseInitialTargetProcessors.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     MiAddZeroingThreads @ 0x1403A56F0 (MiAddZeroingThreads.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0680 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBEC0 (HalpIommuConfigureInterrupt.c)
 *     ExProcessorCounterSetCallback @ 0x140642A80 (ExProcessorCounterSetCallback.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
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
