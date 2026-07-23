/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x14039566C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407344AC (PiIrpQueryRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736358 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}
