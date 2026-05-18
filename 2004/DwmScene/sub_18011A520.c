/*
 * XREFs of sub_18011A520 @ 0x18011A520
 * Callers:
 *     sub_180117464 @ 0x180117464 (sub_180117464.c)
 *     sub_1801177A8 @ 0x1801177A8 (sub_1801177A8.c)
 *     sub_180117AFC @ 0x180117AFC (sub_180117AFC.c)
 *     sub_180117FF8 @ 0x180117FF8 (sub_180117FF8.c)
 * Callees:
 *     sub_18011923C @ 0x18011923C (sub_18011923C.c)
 *     sub_18011A08C @ 0x18011A08C (sub_18011A08C.c)
 *     sub_18011BE58 @ 0x18011BE58 (sub_18011BE58.c)
 */

__int64 __fastcall sub_18011A520(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  v9[0] = 0LL;
  sub_18011BE58(a1, v9);
  v6 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)v9[0] == v6 )
  {
    v7 = *v6;
    v9[0] = a3;
    sub_18011923C(a1 + 8, v7, (__int64)&unk_1801D7418, v9);
    sub_18011A08C((_QWORD *)a1, a2, (char *)(**(_QWORD **)(a1 + 8) + 16LL), **(_QWORD **)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = v9[0];
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
