/*
 * XREFs of sub_180019F78 @ 0x180019F78
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800891B4 @ 0x1800891B4 (sub_1800891B4.c)
 *     sub_1800AFAC8 @ 0x1800AFAC8 (sub_1800AFAC8.c)
 *     sub_1800B2770 @ 0x1800B2770 (sub_1800B2770.c)
 *     sub_1800B2F00 @ 0x1800B2F00 (sub_1800B2F00.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     sub_18001264C @ 0x18001264C (sub_18001264C.c)
 *     sub_1800207C4 @ 0x1800207C4 (sub_1800207C4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180019F78(__int64 a1, _OWORD *a2, _OWORD *a3)
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
  sub_1800207C4(a1, v11);
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
  sub_18001264C((_OWORD *)a1, *(double *)&v4, *(double *)&v5, *(double *)&v6);
  return a1;
}
