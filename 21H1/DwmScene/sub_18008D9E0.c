/*
 * XREFs of sub_18008D9E0 @ 0x18008D9E0
 * Callers:
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18008D650 @ 0x18008D650 (sub_18008D650.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008D9E0(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  float **v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 *v15; // rax
  float v16; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-B0h]
  _QWORD v18[4]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-68h] BYREF

  v17 = a1;
  pExceptionObject[8] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v16 = (float)a4;
  v7 = (float **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  sub_18008D650((_QWORD *)(a1 + 40), 1uLL, &v16);
  if ( (int)**v7 != a4 )
    goto LABEL_9;
  v8 = a2[3];
  if ( v8 >= 0x10 )
  {
    v9 = v8 + 1;
    v10 = *a2;
    if ( v9 < 0x1000 )
    {
LABEL_6:
      j_j__o_free(v10);
      goto LABEL_7;
    }
    v11 = v9 + 39;
    v12 = *(_QWORD *)(v10 - 8);
    v13 = v10 - v12;
    if ( (unsigned __int64)(v13 - 8) <= 0x1F )
    {
      v10 = v12;
      goto LABEL_6;
    }
    o__invalid_parameter_noinfo_noreturn(v13, v11);
LABEL_9:
    sub_18000FD48(v19);
    v15 = sub_18000FD48(v18);
    sub_180027FF4(pExceptionObject, v15, 436, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_7:
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
