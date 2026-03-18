/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x140392BEC
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407221AC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0LL, a4);
}
