/*
 * XREFs of sub_1800298F4 @ 0x1800298F4
 * Callers:
 *     sub_180016AA0 @ 0x180016AA0 (sub_180016AA0.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800298F4(DWORD SessionId)
{
  unsigned int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v4; // eax
  _DWORD *v5; // r10
  int v7; // [rsp+38h] [rbp-69h] BYREF
  int v8; // [rsp+3Ch] [rbp-65h] BYREF
  int v9; // [rsp+40h] [rbp-61h] BYREF
  int v10; // [rsp+44h] [rbp-5Dh] BYREF
  int v11; // [rsp+48h] [rbp-59h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp-51h] BYREF
  _DWORD *v13; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION **v15; // [rsp+88h] [rbp-19h]
  __int64 v16; // [rsp+90h] [rbp-11h]
  int *v17; // [rsp+98h] [rbp-9h]
  __int64 v18; // [rsp+A0h] [rbp-1h]
  int *v19; // [rsp+A8h] [rbp+7h]
  __int64 v20; // [rsp+B0h] [rbp+Fh]
  int *v21; // [rsp+B8h] [rbp+17h]
  __int64 v22; // [rsp+C0h] [rbp+1Fh]
  int *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  int *v25; // [rsp+D8h] [rbp+37h]
  __int64 v26; // [rsp+E0h] [rbp+3Fh]

  v2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v12 = v3;
  if ( !(unsigned int)sub_18002880C(SessionId, 0, 0LL, &v13) )
  {
    v4 = v13[58];
    if ( (v4 == 1 || !v13[57]) && dword_18004FE60 == 1 || (v4 == 1 || !v13[57]) && dword_18004FE5C == 1 )
    {
      v2 = 0;
    }
    else if ( v4 == 1 && dword_18004FE58 == 1 )
    {
      v2 = 0;
    }
    dword_18004FE58 &= -(v4 != 0);
    v5 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
    if ( *v5 > 4u )
    {
      v7 = dword_18004FE58;
      v8 = dword_18004FE5C;
      v9 = dword_18004FE60;
      v10 = v13[57];
      v11 = v13[58];
      LODWORD(v12) = *v13;
      v25 = &v7;
      v26 = 4LL;
      v23 = &v8;
      v24 = 4LL;
      v21 = &v9;
      v22 = 4LL;
      v19 = &v10;
      v20 = 4LL;
      v17 = &v11;
      v18 = 4LL;
      v15 = &v12;
      v16 = 4LL;
      sub_180001090((__int64)v5, (unsigned __int8 *)dword_1800465B8, 0LL, 0LL, 8u, &v14);
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
