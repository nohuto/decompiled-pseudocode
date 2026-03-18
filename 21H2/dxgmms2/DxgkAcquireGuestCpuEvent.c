/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C002D10C
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C0099A90 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[91])();
}
