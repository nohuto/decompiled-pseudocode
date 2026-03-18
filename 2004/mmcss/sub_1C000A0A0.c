/*
 * XREFs of sub_1C000A0A0 @ 0x1C000A0A0
 * Callers:
 *     sub_1C000ABE0 @ 0x1C000ABE0 (sub_1C000ABE0.c)
 *     sub_1C000B090 @ 0x1C000B090 (sub_1C000B090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000A0A0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 > v2;
}
