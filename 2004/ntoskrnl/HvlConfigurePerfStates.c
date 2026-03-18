/*
 * XREFs of HvlConfigurePerfStates @ 0x1404F27A0
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x1408F36B0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404EEB1C (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStates(int a1, const void *a2)
{
  _BYTE v5[3272]; // [rsp+20h] [rbp-CC8h] BYREF

  memset(&v5[3112], 0, 0x90uLL);
  memmove(v5, a2, 0xC28uLL);
  return HvlpSetLogicalProcessorProperty(a1, 0, v5);
}
