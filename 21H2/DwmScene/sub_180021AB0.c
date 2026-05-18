/*
 * XREFs of sub_180021AB0 @ 0x180021AB0
 * Callers:
 *     sub_18001DE58 @ 0x18001DE58 (sub_18001DE58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021AB0(int a1, int a2)
{
  unsigned __int8 v2; // cl

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return a2 == 0 ? 4 : 0;
      case 2:
        return a2 != 0 ? 1 : 5;
      case 3:
        return a2 != 0 ? 2 : 6;
      case 4:
        return a2 != 0 ? 3 : 7;
      case 5:
        return a2 != 0 ? 8 : 10;
      case 6:
        return a2 != 0 ? 9 : 11;
    }
    v2 = a1 - 100;
    if ( v2 <= 0x31u )
      return v2 + (a2 != 0 ? 100 : 150);
  }
  return 255LL;
}
