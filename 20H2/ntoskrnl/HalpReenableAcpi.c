/*
 * XREFs of HalpReenableAcpi @ 0x14099BF00
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 *     HalpPowerEarlyRestore @ 0x14038D370 (HalpPowerEarlyRestore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpReenableAcpi(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 16))(a1);
  LOBYTE(v1) = 1;
  return (*(__int64 (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v1);
}
