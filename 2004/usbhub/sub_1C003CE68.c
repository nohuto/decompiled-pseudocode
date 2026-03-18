/*
 * XREFs of sub_1C003CE68 @ 0x1C003CE68
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C003CE68(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 result; // rax

  v1 = sub_1C000F050(a1);
  result = (unsigned int)++v1[1316];
  if ( (int)result > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
