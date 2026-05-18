/*
 * XREFs of sub_18001BA00 @ 0x18001BA00
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 *     sub_1800B2D04 @ 0x1800B2D04 (sub_1800B2D04.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 * Callees:
 *     sub_18001264C @ 0x18001264C (sub_18001264C.c)
 *     sub_1800204C8 @ 0x1800204C8 (sub_1800204C8.c)
 */

__int64 __fastcall sub_18001BA00(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  sub_1800204C8(v7);
  sub_18001264C((_OWORD *)a2, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  return a2;
}
