/*
 * XREFs of HvlSetPlatformIdleState @ 0x140549F88
 * Callers:
 *     PpmIdleGuestPreExecute @ 0x14039E130 (PpmIdleGuestPreExecute.c)
 *     PpmIdleGuestComplete @ 0x14039E160 (PpmIdleGuestComplete.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x14054A3D8 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD v6[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x194uLL);
  Number = KeGetPcr()->Prcb.Number;
  v6[0] = 3;
  v6[2] = HvlGetLpIndexFromProcessorIndex(Number);
  v6[4] = a1;
  return HvlpSetPowerProperty(v6, v3, v4);
}
