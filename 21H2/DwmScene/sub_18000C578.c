/*
 * XREFs of sub_18000C578 @ 0x18000C578
 * Callers:
 *     sub_18000C170 @ 0x18000C170 (sub_18000C170.c)
 *     sub_18000C270 @ 0x18000C270 (sub_18000C270.c)
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18000C5A4 @ 0x18000C5A4 (sub_18000C5A4.c)
 *     sub_18000C788 @ 0x18000C788 (sub_18000C788.c)
 *     sub_18000D5A0 @ 0x18000D5A0 (sub_18000D5A0.c)
 *     sub_18000D7DC @ 0x18000D7DC (sub_18000D7DC.c)
 *     sub_18000EBA8 @ 0x18000EBA8 (sub_18000EBA8.c)
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 *     sub_18001BDF0 @ 0x18001BDF0 (sub_18001BDF0.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_18000EEA0 @ 0x18000EEA0 (sub_18000EEA0.c)
 */

BOOL __fastcall sub_18000C578(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_18000EEA0(retaddr, 2342LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000C5A1LL);
  }
  return result;
}
