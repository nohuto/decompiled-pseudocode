/*
 * XREFs of MapChildMmioSpace @ 0x1C00222AC
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB1A4 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))DxgCoreInterface[69])(a1);
}
