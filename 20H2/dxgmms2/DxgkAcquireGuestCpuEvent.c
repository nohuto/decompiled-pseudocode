/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C0017810
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C007FD70 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[78])();
}
