/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C004CE60
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004CB88 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1460, 0);
  RaAttemptHighWaterMarkIncrease((__int64)(Context + 208), (int)Context);
}
