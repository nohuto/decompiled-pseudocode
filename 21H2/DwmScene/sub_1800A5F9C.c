/*
 * XREFs of sub_1800A5F9C @ 0x1800A5F9C
 * Callers:
 *     sub_1800F5438 @ 0x1800F5438 (sub_1800F5438.c)
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     sub_1800F5A14 @ 0x1800F5A14 (sub_1800F5A14.c)
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A5F9C(__int64 a1, _QWORD *a2, unsigned __int16 a3)
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
    v5 = sub_18002C814(v10, a3);
    v6 = (_QWORD *)sub_1800494AC((__int64)v11, (__int64)"ShaderManager::GetPropertyName() -- property id ", (__int64)v5);
    v7 = sub_180031AE8((__int64)v12, v6, " is not registered");
    v8 = sub_18000FE28(v9);
    sub_18002D8C4(pExceptionObject, v8, 700, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_180020B7C(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
