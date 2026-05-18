/*
 * XREFs of sub_18011C9F8 @ 0x18011C9F8
 * Callers:
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 * Callees:
 *     sub_18011A08C @ 0x18011A08C (sub_18011A08C.c)
 *     sub_18011BE58 @ 0x18011BE58 (sub_18011BE58.c)
 *     sub_18011C944 @ 0x18011C944 (sub_18011C944.c)
 */

__int64 __fastcall sub_18011C9F8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v9[0] = 0LL;
  sub_18011BE58((_QWORD *)a1, v9, a3);
  v6 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)v9[0] == v6 )
  {
    v7 = *v6;
    v9[0] = (__int64)a3;
    sub_18011C944(a1 + 8, v7, (__int64)&unk_1801D7A9B, v9);
    sub_18011A08C((_QWORD *)a1, a2, (char *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9[0];
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
