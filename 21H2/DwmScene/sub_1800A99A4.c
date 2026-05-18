/*
 * XREFs of sub_1800A99A4 @ 0x1800A99A4
 * Callers:
 *     sub_1800A9970 @ 0x1800A9970 (sub_1800A9970.c)
 *     sub_1800A9A9C @ 0x1800A9A9C (sub_1800A9A9C.c)
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 * Callees:
 *     sub_180072BDC @ 0x180072BDC (sub_180072BDC.c)
 *     sub_1800A8654 @ 0x1800A8654 (sub_1800A8654.c)
 *     sub_1800A88A8 @ 0x1800A88A8 (sub_1800A88A8.c)
 *     sub_1800F6F64 @ 0x1800F6F64 (sub_1800F6F64.c)
 *     sub_1800F86D8 @ 0x1800F86D8 (sub_1800F86D8.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A99A4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v10[5]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+58h] [rbp-18h] BYREF

  v10[4] = a2;
  *(_OWORD *)a2 = 0LL;
  sub_1800A88A8((__int64)a2, a1);
  v10[0] = a3;
  v10[1] = a4;
  sub_1800F6F64(*a2, v10);
  if ( a5 )
  {
    v10[3] = 15LL;
    v10[2] = 0LL;
    LOBYTE(v10[0]) = 0;
    sub_1800F86D8(*a2, v10);
  }
  v11 = *(_DWORD *)(a1 + 552);
  if ( !v11 )
    sub_18011BCAC(
      &unk_180213A90,
      2LL,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  sub_1800A8654((__int64 *)(a1 + 416), (__int64)v10, &v11);
  sub_180072BDC(v10[0] + 40LL, *(_QWORD *)(v10[0] + 40LL), a2);
  return a2;
}
