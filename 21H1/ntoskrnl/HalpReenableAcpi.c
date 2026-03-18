/*
 * XREFs of HalpReenableAcpi @ 0x140994760
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 *     HalpPowerEarlyRestore @ 0x14038A000 (HalpPowerEarlyRestore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 16))(a1);
  LOBYTE(v1) = 1;
  return (*(__int64 (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v1);
}
