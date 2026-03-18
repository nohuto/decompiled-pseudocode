/*
 * XREFs of sub_1C0015BF8 @ 0x1C0015BF8
 * Callers:
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0015500 @ 0x1C0015500 (sub_1C0015500.c)
 */

__int64 __fastcall sub_1C0015BF8(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  __int64 result; // rax

  v2 = sub_1C000F050(a1);
  v3 = v2;
  if ( *((_BYTE *)v2 + 3408)
    || *((_DWORD **)v2 + 388) != v2 + 776
    || v2[780]
    || *((_DWORD **)v2 + 603) != v2 + 1206
    || (v2[640] & 0x10) != 0
    || (int)v2[685] > 1
    || (int)sub_1C0015500(a1) < 0 )
  {
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
  *((_BYTE *)v3 + 3408) = 0;
  return result;
}
