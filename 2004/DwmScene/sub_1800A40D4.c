/*
 * XREFs of sub_1800A40D4 @ 0x1800A40D4
 * Callers:
 *     sub_1800A40A0 @ 0x1800A40A0 (sub_1800A40A0.c)
 *     sub_1800A41CC @ 0x1800A41CC (sub_1800A41CC.c)
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     sub_18006D30C @ 0x18006D30C (sub_18006D30C.c)
 *     sub_1800A2D84 @ 0x1800A2D84 (sub_1800A2D84.c)
 *     sub_1800A2FD8 @ 0x1800A2FD8 (sub_1800A2FD8.c)
 *     sub_1800F1694 @ 0x1800F1694 (sub_1800F1694.c)
 *     sub_1800F2E08 @ 0x1800F2E08 (sub_1800F2E08.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A40D4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v10[5]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+58h] [rbp-18h] BYREF

  v10[4] = a2;
  *(_OWORD *)a2 = 0LL;
  sub_1800A2FD8((__int64)a2, a1);
  v10[0] = a3;
  v10[1] = a4;
  sub_1800F1694(*a2, v10);
  if ( a5 )
  {
    v10[3] = 15LL;
    v10[2] = 0LL;
    LOBYTE(v10[0]) = 0;
    sub_1800F2E08(*a2, v10);
  }
  v11 = *(_DWORD *)(a1 + 552);
  if ( !v11 )
    sub_1801163DC(
      &unk_18020CA20,
      2LL,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  sub_1800A2D84((__int64 *)(a1 + 416), (__int64)v10, &v11);
  sub_18006D30C(v10[0] + 40LL, *(_QWORD *)(v10[0] + 40LL), a2);
  return a2;
}
