/*
 * XREFs of sub_18001A310 @ 0x18001A310
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_180082C58 @ 0x180082C58 (sub_180082C58.c)
 *     sub_1800AD1E0 @ 0x1800AD1E0 (sub_1800AD1E0.c)
 *     sub_1800AD434 @ 0x1800AD434 (sub_1800AD434.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 * Callees:
 *     sub_18001256C @ 0x18001256C (sub_18001256C.c)
 *     sub_18001C744 @ 0x18001C744 (sub_18001C744.c)
 */

__int64 __fastcall sub_18001A310(_OWORD *a1, __int64 a2)
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
  sub_18001C744(v7);
  sub_18001256C((_OWORD *)a2, *(double *)&v3, *(double *)&v4, *(double *)&v5);
  return a2;
}
