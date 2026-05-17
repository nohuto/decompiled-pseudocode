/*
 * XREFs of _TppValidateCleanupGroupMember@8 @ 0x4B2C1B74
 * Callers:
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 *     _TppWaitpValidateWait@12 @ 0x4B2B7C55 (_TppWaitpValidateWait@12.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 *     _TppIopValidateIo@12 @ 0x4B2E70F8 (_TppIopValidateIo@12.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _TppWorkpValidateWork@12 @ 0x4B2EC4DD (_TppWorkpValidateWork@12.c)
 *     _TppJobpValidateJob@8 @ 0x4B383B34 (_TppJobpValidateJob@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall TppValidateCleanupGroupMember(int a1, int a2)
{
  int v3; // eax
  void *ThreadPoolData; // ecx

  v3 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 0x10000) != 0 )
    return 0;
  if ( (v3 & 0x20000) == 0 )
    return 1;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0
      && *(_DWORD *)(*(_DWORD *)ThreadPoolData + 136) == a1;
}
