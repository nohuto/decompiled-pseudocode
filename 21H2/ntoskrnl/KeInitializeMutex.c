/*
 * XREFs of KeInitializeMutex @ 0x14029E4F0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140780360 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A8B98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A6AAA0 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  KiInitializeMutant((ULONG_PTR)Mutex);
}
