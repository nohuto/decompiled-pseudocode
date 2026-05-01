/*
 * XREFs of sub_180077F2C @ 0x180077F2C
 * Callers:
 *     sub_18006FC70 @ 0x18006FC70 (sub_18006FC70.c)
 *     sub_180070120 @ 0x180070120 (sub_180070120.c)
 * Callees:
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 */

char __fastcall sub_180077F2C(__int64 a1, char a2)
{
  char result; // al
  __int64 v5; // rdx

  result = sub_180045CFC();
  v5 = 0LL;
  if ( result )
  {
    LOBYTE(v5) = a2 != 0;
    return NotifySystemExpandedResourceModeStateChange(a1, v5);
  }
  return result;
}
