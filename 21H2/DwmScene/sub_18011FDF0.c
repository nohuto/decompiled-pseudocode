/*
 * XREFs of sub_18011FDF0 @ 0x18011FDF0
 * Callers:
 *     sub_18011CD34 @ 0x18011CD34 (sub_18011CD34.c)
 *     sub_18011D078 @ 0x18011D078 (sub_18011D078.c)
 *     sub_18011D3CC @ 0x18011D3CC (sub_18011D3CC.c)
 *     sub_18011D8C8 @ 0x18011D8C8 (sub_18011D8C8.c)
 * Callees:
 *     sub_18011EB0C @ 0x18011EB0C (sub_18011EB0C.c)
 *     sub_18011F95C @ 0x18011F95C (sub_18011F95C.c)
 *     sub_180121728 @ 0x180121728 (sub_180121728.c)
 */

__int64 __fastcall sub_18011FDF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v9[0] = 0LL;
  sub_180121728(a1, v9);
  v6 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)v9[0] == v6 )
  {
    v7 = *v6;
    v9[0] = a3;
    sub_18011EB0C(a1 + 8, v7, (__int64)&unk_1801DD7A8, v9);
    sub_18011F95C((_QWORD *)a1, a2, (char *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9[0];
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
