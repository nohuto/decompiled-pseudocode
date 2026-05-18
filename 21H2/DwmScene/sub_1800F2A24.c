/*
 * XREFs of sub_1800F2A24 @ 0x1800F2A24
 * Callers:
 *     sub_1800F30C8 @ 0x1800F30C8 (sub_1800F30C8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180092F9C @ 0x180092F9C (sub_180092F9C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F2A24(_QWORD *a1, int a2)
{
  char *v3; // r8
  __int128 *v4; // rdx
  __int64 *v6; // rax
  __int128 v7; // [rsp+38h] [rbp-61h] BYREF
  char v8; // [rsp+48h] [rbp-51h] BYREF
  _OWORD v9[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v10[4]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B0h] [rbp+17h] BYREF

  *(_QWORD *)&v7 = a1;
  if ( a2 < 0 )
  {
LABEL_16:
    sub_18000FE28(v9);
    v6 = sub_18000FE28(v10);
    sub_18002D8C4(pExceptionObject, v6, 95, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a2 <= 2 )
  {
    LODWORD(v7) = 0;
    v3 = (char *)&v7 + 4;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 3 )
  {
    *(_QWORD *)&v7 = 0LL;
    v3 = (char *)&v7 + 8;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 4 )
  {
    *(_QWORD *)&v7 = 0LL;
    DWORD2(v7) = 0;
    v3 = (char *)&v7 + 12;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 <= 6 )
  {
    v7 = 0LL;
    v3 = &v8;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 7 )
  {
    v9[0] = xmmword_180214C90;
    v9[1] = xmmword_180214CA0;
    v9[2] = xmmword_180214CB0;
    v9[3] = xmmword_180214CC0;
    v3 = (char *)v10;
    v4 = v9;
LABEL_14:
    a1[2] = 0LL;
    a1[1] = 0LL;
    *a1 = 0LL;
    sub_180092F9C(a1, v4, (__int64)v3);
    return a1;
  }
  if ( a2 != 8 )
    goto LABEL_16;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return a1;
}
