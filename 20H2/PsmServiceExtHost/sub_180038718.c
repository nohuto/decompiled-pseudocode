/*
 * XREFs of sub_180038718 @ 0x180038718
 * Callers:
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 * Callees:
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_1800388D8 @ 0x1800388D8 (sub_1800388D8.c)
 *     sub_1800389E0 @ 0x1800389E0 (sub_1800389E0.c)
 *     sub_1800394DC @ 0x1800394DC (sub_1800394DC.c)
 *     sub_180039DF0 @ 0x180039DF0 (sub_180039DF0.c)
 *     sub_18003AB4C @ 0x18003AB4C (sub_18003AB4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046880 @ 0x180046880 (sub_180046880.c)
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_180038718(unsigned __int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rdi
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rbx
  unsigned int v10; // eax
  int result; // eax
  char v12; // bl
  int v13; // r9d
  void *v14; // rcx
  int v15; // r9d
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A8h]
  _BYTE *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[24]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  void *v28; // [rsp+A0h] [rbp-60h]
  char v29; // [rsp+A8h] [rbp-58h]
  char v30; // [rsp+A9h] [rbp-57h]
  _BYTE v31[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+B8h] [rbp-48h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-40h]
  _BYTE *v34; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall ***v35)(); // [rsp+120h] [rbp+20h]
  _BYTE v36[4096]; // [rsp+130h] [rbp+30h] BYREF

  v3 = 0LL;
  v4 = a1 + 8 * a2;
  v22 = 0LL;
  v6 = a1;
  while ( 1 )
  {
    sub_180039DF0((unsigned int)v25, *a3, a3[1], *((_BYTE *)a3 + 4), a3[3], *((_BYTE *)a3 + 8));
    v19 = 4096;
    v9 = (unsigned int)sub_18003AB4C(v6, v7, v8, (unsigned int)&v20, (__int64)v36, (__int64)&v19);
    ((void (__fastcall *)(__int64))sub_1800389E0)(v9);
    if ( (_DWORD)v9 )
    {
      v10 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v10 = v19;
    }
    result = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, _QWORD, __int64))sub_1800388D8)(v25, v36, v10, 4096LL);
    if ( v30 )
      break;
    v21 = 0LL;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v32 = off_18008D688;
    v35 = &v32;
    v33 = v23;
    v34 = v25;
    v12 = ((__int64 (__fastcall *)(unsigned __int16 *, _BYTE *))sub_1800394DC)(a3, v31);
    if ( v29 )
    {
      result = sub_180066BC0(v6, v26, (int)v27 - (int)v26, v13, v17, v20, 1);
      if ( result == -1073741823 )
      {
        ++v3;
        v12 = 0;
        goto LABEL_7;
      }
      if ( result )
        sub_180066BC0(v6, v26, v27 - v26, v15, v18, 0, 0);
    }
    result = v21;
    v6 += 8LL;
    v22 = v21;
LABEL_7:
    v14 = v28;
    v28 = 0LL;
    if ( v14 )
      result = sub_18003850C(v14);
    if ( v12 || v6 >= v4 || v3 >= 0x32 )
      return result;
  }
  v16 = v28;
  v28 = 0LL;
  if ( v16 )
    return sub_18003850C(v16);
  return result;
}
