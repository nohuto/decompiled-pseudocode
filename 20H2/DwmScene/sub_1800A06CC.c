/*
 * XREFs of sub_1800A06CC @ 0x1800A06CC
 * Callers:
 *     sub_1800EFB68 @ 0x1800EFB68 (sub_1800EFB68.c)
 *     sub_1800EFCBC @ 0x1800EFCBC (sub_1800EFCBC.c)
 *     sub_1800F0144 @ 0x1800F0144 (sub_1800F0144.c)
 *     sub_1800F03B0 @ 0x1800F03B0 (sub_1800F03B0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A06CC(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v11[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v12[40]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+C0h] [rbp-48h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    v5 = sub_180026F44(v10, a3);
    v6 = (_QWORD *)sub_180043BDC((__int64)v11, (__int64)"ShaderManager::GetPropertyName() -- property id ", (__int64)v5);
    v7 = sub_18002C218((__int64)v12, v6, " is not registered");
    v8 = sub_18000FD48(v9);
    sub_180027FF4(pExceptionObject, v8, 700, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001CDF8(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
