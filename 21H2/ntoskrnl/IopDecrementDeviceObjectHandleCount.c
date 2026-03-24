/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x14039551C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407342EC (PiIrpQueryRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0LL, a4);
}
