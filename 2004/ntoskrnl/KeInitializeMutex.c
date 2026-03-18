/*
 * XREFs of KeInitializeMutex @ 0x1402FF760
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14076D990 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A4E38 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A65390 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  KiInitializeMutant((ULONG_PTR)Mutex);
}
