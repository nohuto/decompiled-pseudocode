/*
 * XREFs of sub_18008B040 @ 0x18008B040
 * Callers:
 *     sub_18008B0B8 @ 0x18008B0B8 (sub_18008B0B8.c)
 *     sub_18008B1D0 @ 0x18008B1D0 (sub_18008B1D0.c)
 * Callees:
 *     sub_18008A420 @ 0x18008A420 (sub_18008A420.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008B040(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = a1;
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = operator new(0x28uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  v5[0] = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18008A420((_QWORD *)(a1 + 24), 0x10uLL, v5);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
