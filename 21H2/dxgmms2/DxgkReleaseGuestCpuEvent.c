/*
 * XREFs of DxgkReleaseGuestCpuEvent @ 0x1C00178F0
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000C9A8 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkReleaseGuestCpuEvent()
{
  return DxgCoreInterface[79]();
}
