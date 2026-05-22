/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x18004AF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall InputStateManager::OnDeviceUpdate(__int64 a1, struct DeviceInfo *a2)
{
  return InputStateManager::OnDeviceUpdate((InputStateManager *)(a1 - 8), a2);
}
