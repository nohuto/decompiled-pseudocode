/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C0015A70
 * Callers:
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0094DDC (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))DxgCoreInterface[2])(a1, 2LL);
}
