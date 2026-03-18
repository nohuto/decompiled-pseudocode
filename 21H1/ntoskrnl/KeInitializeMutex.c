/*
 * XREFs of KeInitializeMutex @ 0x1402DEBB0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14076B1F0 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A3FF8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
