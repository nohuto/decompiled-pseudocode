/*
 * XREFs of sub_180075784 @ 0x180075784
 * Callers:
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 *     sub_180077F6C @ 0x180077F6C (sub_180077F6C.c)
 *     sub_1800780B4 @ 0x1800780B4 (sub_1800780B4.c)
 */

__int64 __fastcall sub_180075784(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-91h] BYREF
  __int64 v18; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-81h] BYREF
  __int64 v20; // [rsp+60h] [rbp-79h] BYREF
  __int64 v21; // [rsp+68h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 *v23; // [rsp+90h] [rbp-49h]
  int v24; // [rsp+98h] [rbp-41h]
  int v25; // [rsp+9Ch] [rbp-3Dh]
  __int64 *v26; // [rsp+A0h] [rbp-39h]
  int v27; // [rsp+A8h] [rbp-31h]
  int v28; // [rsp+ACh] [rbp-2Dh]
  __int64 *v29; // [rsp+B0h] [rbp-29h]
  int v30; // [rsp+B8h] [rbp-21h]
  int v31; // [rsp+BCh] [rbp-1Dh]
  unsigned __int64 *v32; // [rsp+C0h] [rbp-19h]
  int v33; // [rsp+C8h] [rbp-11h]
  int v34; // [rsp+CCh] [rbp-Dh]
  __int64 *v35; // [rsp+D0h] [rbp-9h]
  int v36; // [rsp+D8h] [rbp-1h]
  int v37; // [rsp+DCh] [rbp+3h]
  __int64 *v38; // [rsp+E0h] [rbp+7h]
  int v39; // [rsp+E8h] [rbp+Fh]
  int v40; // [rsp+ECh] [rbp+13h]

  v4 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  if ( (int)sub_180077F6C(&v16) < 0 )
    return 2LL;
  v8 = v16;
  v9 = v4 >> 2;
  if ( v16 < v4 >> 2 )
  {
    if ( (unsigned int)dword_1800B31E0 > 5 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v18 = *(_QWORD *)(a3 + 56);
        v19 = *(_QWORD *)(a2 + 56);
        v16 = v8;
        v17 = v4 >> 2;
        sub_180072004(v10, byte_18009DDA5, v11, v12, (__int64)&v19, (__int64)&v18, (__int64)&v17, (__int64)&v16);
      }
    }
    return 2LL;
  }
  if ( v16 < v4 )
    v4 = v16;
  v13 = sub_1800780B4(v4);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v15 = *(_QWORD *)(a3 + 56);
    v40 = 0;
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v20 = v15;
    v21 = *(_QWORD *)(a2 + 56);
    v38 = (__int64 *)&v19;
    v35 = &v18;
    v32 = &v17;
    v29 = &v20;
    v26 = &v21;
    v23 = &v16;
    v39 = v14 + 7;
    v36 = v14 + 7;
    v33 = v14 + 7;
    v30 = v14 + 7;
    v27 = v14 + 7;
    v19 = v4;
    v18 = v8;
    v17 = v9;
    LODWORD(v16) = v13;
    v24 = 4;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009E50C, 0LL, 0LL, v14 + 7, &v22);
  }
  if ( v13 < 0 || (unsigned int)sub_1800763F0(a1, 5LL, *(unsigned int *)(a1 + 72), &v16) || (_DWORD)v16 != 2 )
    return 0LL;
  else
    return 4LL;
}
