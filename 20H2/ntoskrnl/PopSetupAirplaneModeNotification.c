/*
 * XREFs of PopSetupAirplaneModeNotification @ 0x1407D0B74
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D3EE0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAirplaneModeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SRC_SYSTEM_RADIO_CHANGED,
           1,
           0,
           (__int64)PopWnfAirplaneModeCallback,
           0LL);
}
