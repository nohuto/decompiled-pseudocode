/*
 * XREFs of sub_18000D91C @ 0x18000D91C
 * Callers:
 *     sub_18000C188 @ 0x18000C188 (sub_18000C188.c)
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18000D7DC @ 0x18000D7DC (sub_18000D7DC.c)
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_18000EEA0 @ 0x18000EEA0 (sub_18000EEA0.c)
 */

BOOL __fastcall sub_18000D91C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_18000EEA0(retaddr, 2352LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000D945LL);
  }
  return result;
}
