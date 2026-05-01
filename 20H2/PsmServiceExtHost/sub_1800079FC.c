/*
 * XREFs of sub_1800079FC @ 0x1800079FC
 * Callers:
 *     sub_180007880 @ 0x180007880 (sub_180007880.c)
 * Callees:
 *     sub_1800078EC @ 0x1800078EC (sub_1800078EC.c)
 *     sub_180007978 @ 0x180007978 (sub_180007978.c)
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 */

int __fastcall sub_1800079FC(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdi
  int v5; // eax

  v2 = *(_BYTE **)(a2 + 1320);
  sub_180007978((__int64 *)a2, 0);
  sub_1800078EC(a2, 1);
  *(_BYTE *)(a2 + 12) = 1;
  sub_18000FF28(v2, 3LL);
  if ( (v2[836] & 1) == 0 )
  {
    v5 = sub_180007A80(v2);
    if ( v5 < 0 )
      return v5 | 0x10000000;
  }
  sub_180007F50(a1, v2);
  return 0;
}
