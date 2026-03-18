/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x14064CEF0
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  int v2; // eax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  v2 = *(_DWORD *)(a1 + 28);
  Src[0] = 9;
  Src[2] = v2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
}
