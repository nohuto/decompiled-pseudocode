/*
 * XREFs of KeInitializeMutex @ 0x140360900
 * Callers:
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14077C3C0 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409AAD98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A6C660 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  KiInitializeMutant((ULONG_PTR)Mutex);
}
