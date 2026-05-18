/*
 * XREFs of sub_1800A674C @ 0x1800A674C
 * Callers:
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A674C(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  const void **v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-C0h] BYREF
  const void *Src; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v18[40]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-58h] BYREF

  pExceptionObject[8] = a2;
  v15 = 0LL;
  v3 = (_QWORD *)(a1 + 18576);
  sub_1800A754C(a1 + 18576, &v15, a2);
  if ( v15 == *v3 )
    goto LABEL_9;
  v4 = v15 + 64;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = v5 + 1;
    v7 = *a2;
    if ( v6 < 0x1000 )
    {
LABEL_6:
      j_j__o_free(v7);
      goto LABEL_7;
    }
    v8 = v6 + 39;
    v9 = *(_QWORD *)(v7 - 8);
    v10 = v7 - v9;
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v7 = v9;
      goto LABEL_6;
    }
    o__invalid_parameter_noinfo_noreturn(v10, v8);
LABEL_9:
    v12 = sub_1800A1588(&Src, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v13 = sub_180031AE8((__int64)v18, v12, "' does not exist");
    v14 = sub_18000FE28(v16);
    sub_18002D8C4(pExceptionObject, v14, 158, v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_7:
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return v4;
}
