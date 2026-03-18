/*
 * XREFs of KeInitializeMutex @ 0x140261AA0
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1406EE1C0 (KeAllocateCalloutStackEx.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     EtwpPreInitializeSiloState @ 0x14084EB98 (EtwpPreInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A5B0D0 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2, 0LL);
}
