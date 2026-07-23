/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x1404F815C
 * Callers:
 *     PpmScaleIdleStateValues @ 0x140399164 (PpmScaleIdleStateValues.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HvlpSetPowerProperty @ 0x1404F8698 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterLogicalProcessorFrequency(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v7[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v7, 0, 0x198uLL);
  v7[0] = 2;
  v7[2] = a1;
  v7[4] = a2;
  return HvlpSetPowerProperty(v7, v4, v5);
}
