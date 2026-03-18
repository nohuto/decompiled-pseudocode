/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x14039203C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407202EC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x140254800 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
