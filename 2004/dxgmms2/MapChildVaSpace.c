/*
 * XREFs of MapChildVaSpace @ 0x1C00227DC
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BB8B8 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildVaSpace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))DxgCoreInterface[68])(a1, a2, a3, a4);
}
