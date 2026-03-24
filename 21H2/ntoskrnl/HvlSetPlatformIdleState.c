/*
 * XREFs of HvlSetPlatformIdleState @ 0x1404F82CC
 * Callers:
 *     PpmIdleGuestPreExecute @ 0x140390730 (PpmIdleGuestPreExecute.c)
 *     PpmIdleGuestComplete @ 0x140390760 (PpmIdleGuestComplete.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1404F2190 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1404F8718 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD v6[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x198uLL);
  Number = KeGetPcr()->Prcb.Number;
  v6[0] = 3;
  v6[2] = HvlGetLpIndexFromProcessorIndex(Number);
  v6[4] = a1;
  return HvlpSetPowerProperty(v6, v3, v4);
}
