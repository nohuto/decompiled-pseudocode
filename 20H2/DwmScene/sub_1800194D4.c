/*
 * XREFs of sub_1800194D4 @ 0x1800194D4
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_1800AA1F8 @ 0x1800AA1F8 (sub_1800AA1F8.c)
 *     sub_1800ACEA0 @ 0x1800ACEA0 (sub_1800ACEA0.c)
 *     sub_1800AD630 @ 0x1800AD630 (sub_1800AD630.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 *     sub_18001CA40 @ 0x18001CA40 (sub_18001CA40.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800194D4(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int128 v4; // xmm7
  __int128 v5; // xmm8
  __int128 v6; // xmm9
  __int128 v7; // xmm5
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  _OWORD v11[4]; // [rsp+20h] [rbp-98h] BYREF

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v7 = a3[1];
  v11[0] = *a3;
  v8 = a3[2];
  v11[1] = v7;
  v9 = a3[3];
  v11[2] = v8;
  v11[3] = v9;
  sub_18001CA40(a1, v11);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  sub_18001256C((_OWORD *)a1, *(double *)&v4, *(double *)&v5, *(double *)&v6);
  return a1;
}
