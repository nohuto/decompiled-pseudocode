/*
 * XREFs of HvlConfigureThrottleStates @ 0x1404F7B90
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x1408F6C00 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F3E98 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigureThrottleStates(int a1, const void *a2)
{
  _BYTE v4[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memmove(v4, a2, 0xCB8uLL);
  return HvlpSetLogicalProcessorProperty(a1, 1, v4);
}
