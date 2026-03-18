/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x140396140
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x1403EBA70 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404B8C80 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x1404B8ECC (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099175C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140991910 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A46FC (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A49EC (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
