/*
 * XREFs of sub_18010107C @ 0x18010107C
 * Callers:
 *     sub_1800CB014 @ 0x1800CB014 (sub_1800CB014.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010107C(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 16LL;
  if ( a2 < 0x10 || (v4 = 2048, result = a2, a2 <= 0x800) )
    v4 = result;
  *(_DWORD *)(a1 + 1940) = v4;
  return result;
}
