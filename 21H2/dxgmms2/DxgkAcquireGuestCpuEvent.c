/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C00178CC
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C0083960 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return DxgCoreInterface[78]();
}
