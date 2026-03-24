/*
 * XREFs of KeInitializeMutex @ 0x1402ED1A0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1407801A0 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7C68 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  KiInitializeMutant((ULONG_PTR)Mutex);
}
