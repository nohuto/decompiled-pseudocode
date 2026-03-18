/*
 * XREFs of sub_1C002F010 @ 0x1C002F010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 */

__int64 __fastcall sub_1C002F010(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  sub_1C000F050(a1);
  result = sub_1C0016CA0(a1, a2);
  if ( result )
    return sub_1C002F594(a1, result, a3);
  return result;
}
