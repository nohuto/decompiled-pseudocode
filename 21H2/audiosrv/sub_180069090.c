/*
 * XREFs of sub_180069090 @ 0x180069090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180069090(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = combase_66(a1 + 56);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 412, (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h", v1);
  return v2;
}
