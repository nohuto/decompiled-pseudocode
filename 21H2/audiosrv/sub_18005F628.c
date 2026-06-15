/*
 * XREFs of sub_18005F628 @ 0x18005F628
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005F628(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1LL;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
