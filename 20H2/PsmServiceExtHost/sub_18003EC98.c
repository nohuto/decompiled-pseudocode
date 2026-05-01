/*
 * XREFs of sub_18003EC98 @ 0x18003EC98
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003EC98(unsigned __int64 a1, __int64 a2, __int64 *a3)
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
