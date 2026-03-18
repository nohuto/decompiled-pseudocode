/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1403950AC
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407302BC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x14020D560 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}
