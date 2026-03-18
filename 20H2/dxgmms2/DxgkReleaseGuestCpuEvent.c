/*
 * XREFs of DxgkReleaseGuestCpuEvent @ 0x1C0017834
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B7B8 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkReleaseGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[79])();
}
