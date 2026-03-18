/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x1403991D0
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x1403EF540 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BC880 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x1404BCACC (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099870C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409988C0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409AB49C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409AB78C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 32])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
