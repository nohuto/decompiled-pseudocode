/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1C0017120
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x1C008F530 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))DxgCoreInterface[1])(a1, 2LL, 131097LL);
}
