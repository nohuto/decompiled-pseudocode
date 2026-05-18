/*
 * XREFs of sub_1800DA1CC @ 0x1800DA1CC
 * Callers:
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800D7770 @ 0x1800D7770 (sub_1800D7770.c)
 *     sub_1800D7C80 @ 0x1800D7C80 (sub_1800D7C80.c)
 *     sub_1800D8EB4 @ 0x1800D8EB4 (sub_1800D8EB4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DA1CC(__int64 a1, __int64 *a2, double a3)
{
  unsigned __int64 v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 *v14; // rax
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v20[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v22; // [rsp+F0h] [rbp-18h]
  _BYTE v23[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v24[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned __int64 v25; // [rsp+1C8h] [rbp+C0h]
  int v26; // [rsp+270h] [rbp+168h]
  int v27; // [rsp+274h] [rbp+16Ch]

  if ( !*(_BYTE *)a1 )
  {
    sub_18000FE28(v17);
    v14 = sub_18000FE28(v16);
    sub_1800D1210(pExceptionObject, v14, 127LL, (__int64)v17, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v5 = a2[4];
  v6 = (__int64 *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_9;
  do
  {
    if ( *(_QWORD *)(v8 + 32) >= v5 )
    {
      v7 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v7 == *v6 || v5 < *(_QWORD *)(v7 + 32) )
LABEL_9:
    v7 = *v6;
  if ( v7 == *v6 )
  {
    v24[2] = 0LL;
    v25 = 15LL;
    LOBYTE(v24[0]) = 0;
    v26 = 0;
    v27 = 0;
    sub_180012F14(v24, a2);
    v19 = a2[4];
    sub_1800D8EB4((__int64)v20, (__int64)v23);
    v9 = sub_1800D7770(a1 + 16, *v6, (__int64)&v19);
    sub_1800D7C80((__int64 **)(a1 + 16), (__int64)&v15, 0, v9 + 4, v9);
    if ( v22 >= 0x10 )
    {
      v10 = v21;
      if ( v22 + 1 >= 0x1000 )
      {
        v10 = *(_QWORD *)(v21 - 8);
        if ( (unsigned __int64)(v21 - v10 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v10, v22 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v10);
    }
    v7 = v15;
    if ( v25 >= 0x10 )
    {
      v11 = v24[0];
      if ( v25 + 1 >= 0x1000 )
      {
        v11 = *(_QWORD *)(v24[0] - 8);
        if ( (unsigned __int64)(v24[0] - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, v25 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v11);
    }
  }
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a1 + 8);
  *(double *)(v7 + 8LL * *(unsigned int *)(v7 + 240) + 80) = a3;
  *(_DWORD *)(v7 + 240) = (*(_DWORD *)(v7 + 240) + 1) % 0x14u;
  v12 = *(_DWORD *)(v7 + 244) + 1;
  if ( v12 > 0x14 )
    v12 = 20;
  *(_DWORD *)(v7 + 244) = v12;
  return v7 + 80;
}
