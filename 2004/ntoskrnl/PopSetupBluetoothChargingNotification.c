/*
 * XREFs of PopSetupBluetoothChargingNotification @ 0x1407C2338
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407006B0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupBluetoothChargingNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS,
           1,
           0,
           (__int64)PopWnfBluetoothChargingCallback,
           0LL);
}
