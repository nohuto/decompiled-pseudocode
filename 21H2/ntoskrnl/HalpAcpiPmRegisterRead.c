/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x1403B41A0
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x140417010 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x14050A880 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x14050AABC (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140A5072C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140A508E0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x140A622EC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140A625DC (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
