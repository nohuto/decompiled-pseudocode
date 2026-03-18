/*
 * XREFs of PopNotifyUserPowerRequestAction @ 0x1408DD138
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14033CD34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408DD1B8 (PopPowerRequestNotificationsFlush.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x14033D078 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140408F80 (memset.c)
 */

bool __fastcall PopNotifyUserPowerRequestAction(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  int v6; // eax
  bool result; // al
  _DWORD Src[20]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  if ( PopPowerRequestNotificationsEnabled )
  {
    memset(Src, 0, 0x48uLL);
    v6 = *(_DWORD *)(a1 + 28);
    Src[0] = 16;
    Src[2] = v6;
    Src[3] = v4;
    LOBYTE(Src[4]) = a3;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    result = a3 != 0;
    *(_BYTE *)(v4 + a1 + 137) = a3 != 0;
  }
  return result;
}
