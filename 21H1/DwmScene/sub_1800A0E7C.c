/*
 * XREFs of sub_1800A0E7C @ 0x1800A0E7C
 * Callers:
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A0E7C(__int64 a1, __int64 *a2)
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
  sub_1800A1C7C(a1 + 18576, &v15, a2);
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
    v12 = sub_18009BCB8(&Src, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v13 = sub_18002C218((__int64)v18, v12, "' does not exist");
    v14 = sub_18000FD48(v16);
    sub_180027FF4(pExceptionObject, v14, 158, v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_7:
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return v4;
}
