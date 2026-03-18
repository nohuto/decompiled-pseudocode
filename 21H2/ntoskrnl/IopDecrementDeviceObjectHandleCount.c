/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1403A15FC
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x1409589A4 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
