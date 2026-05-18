/*
 * XREFs of sub_1801222C8 @ 0x1801222C8
 * Callers:
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 * Callees:
 *     sub_18011F95C @ 0x18011F95C (sub_18011F95C.c)
 *     sub_180121728 @ 0x180121728 (sub_180121728.c)
 *     sub_180122214 @ 0x180122214 (sub_180122214.c)
 */

__int64 __fastcall sub_1801222C8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v9[0] = 0LL;
  sub_180121728((_QWORD *)a1, v9, a3);
  v6 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)v9[0] == v6 )
  {
    v7 = *v6;
    v9[0] = (__int64)a3;
    sub_180122214(a1 + 8, v7, (__int64)&unk_1801DDDEB, v9);
    sub_18011F95C((_QWORD *)a1, a2, (char *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9[0];
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
