/*
 * XREFs of sub_18005CD40 @ 0x18005CD40
 * Callers:
 *     sub_18005CCC8 @ 0x18005CCC8 (sub_18005CCC8.c)
 * Callees:
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 */

__int64 __fastcall sub_18005CD40(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = a2; i; --i )
  {
    result = sub_18005D370(a1);
    a1 += 64LL;
  }
  return result;
}
