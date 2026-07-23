/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x140399790
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x1403F0020 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BE480 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409970B0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A929C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A958C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
