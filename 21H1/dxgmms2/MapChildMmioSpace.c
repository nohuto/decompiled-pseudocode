/*
 * XREFs of MapChildMmioSpace @ 0x1C002282C
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB768 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))DxgCoreInterface[69])(a1);
}
