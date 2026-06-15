/*
 * XREFs of sub_18011DF04 @ 0x18011DF04
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18011DF04(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+48h] [rbp-59h] BYREF
  __int64 v6; // [rsp+50h] [rbp-51h] BYREF
  __int64 v7; // [rsp+58h] [rbp-49h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-41h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v10; // [rsp+78h] [rbp-29h]
  PROPVARIANT v11[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v12; // [rsp+90h] [rbp-11h]
  __int128 v13; // [rsp+98h] [rbp-9h] BYREF
  __int128 v14; // [rsp+A8h] [rbp+7h]
  _DWORD v15[6]; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v16; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+E0h] [rbp+3Fh]
  int v18; // [rsp+E8h] [rbp+47h]

  v2 = 0;
  ppv = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v5 = 0;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  if ( CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv) >= 0 )
  {
    HIDWORD(v14) = 0;
    v13 = xmmword_1801737D0;
    LODWORD(v14) = 1;
    *(_QWORD *)((char *)&v14 + 4) = 1LL;
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      v15[0] = 590439624;
      v15[1] = 1283267372;
      v15[2] = 1907779772;
      v15[3] = 1730509416;
      v15[4] = 1;
      (*(void (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(v3, v15, pvar);
      if ( LOWORD(pvar[0]) != 31
        || (*(int (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v7) < 0
        || (*(int (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
             *(_QWORD *)(a1 + 40),
             &xmmword_18015BB80,
             v11) < 0
        || LOWORD(v11[0]) != 19 )
      {
        goto LABEL_11;
      }
      DWORD2(v14) = LOWORD(v11[1]);
    }
    if ( (*(int (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &unk_1801737C0,
           1LL,
           0LL,
           &v6) >= 0 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, __int128 *, int, int *))(*(_QWORD *)v6 + 24LL))(
             v6,
             &v13,
             32LL,
             &v16,
             28,
             &v5) >= 0 )
        v2 = 1;
    }
  }
LABEL_11:
  PropVariantClear(pvar);
  PropVariantClear(v11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v2;
}
