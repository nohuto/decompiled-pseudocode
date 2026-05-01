/*
 * XREFs of sub_1800018B0 @ 0x1800018B0
 * Callers:
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 * Callees:
 *     sub_180001C3C @ 0x180001C3C (sub_180001C3C.c)
 *     sub_180001EF8 @ 0x180001EF8 (sub_180001EF8.c)
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002DE3C @ 0x18002DE3C (sub_18002DE3C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180067100 @ 0x180067100 (sub_180067100.c)
 */

__int64 __fastcall sub_1800018B0(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  _QWORD *v12; // rbx
  unsigned int v14; // edi
  __int64 v15; // r13
  void *v16; // r15
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  char v19; // di
  unsigned int *v20; // r14
  __int64 v21; // rsi
  int v22; // ebx
  __int64 v23; // r9
  int v24; // r14d
  __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  DWORD v31; // edi
  char v33; // [rsp+38h] [rbp-C8h]
  char v34; // [rsp+70h] [rbp-90h]
  unsigned int v35; // [rsp+74h] [rbp-8Ch] BYREF
  int v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  void *v40; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp-58h] BYREF
  int v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE TlsValue[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[560]; // [rsp+150h] [rbp+50h] BYREF

  v12 = (_QWORD *)qword_1800B41A0;
  v14 = a2;
  v39 = a11;
  v42 = a12;
  v38 = qword_1800B41A0;
  v36 = a4;
  v35 = a2;
  sub_18000B7F8(TlsValue);
  v15 = 0LL;
  v16 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  if ( v14 >= 0x32 || !v14 || !a3 || !a12 || !a7 )
  {
    v22 = -2147024809;
    v24 = a8;
    goto LABEL_28;
  }
  v34 = 1;
  v17 = 0;
  v18 = a3;
  while ( (unsigned int)(*v18 - 22) <= 4 )
  {
    ++v17;
    v18 += 6;
    if ( v17 >= v14 )
      goto LABEL_11;
  }
  v34 = 0;
LABEL_11:
  sub_18001E380(v18);
  if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(*v12 + 40LL))(v12, a5, v45) >= 0 )
  {
    sub_18002DE3C(v12[16], v45, &v40);
    v16 = v40;
  }
  v19 = 0;
  v20 = a3;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = sub_180004474(v12, *v20, a5, 0LL);
    if ( v22 < 0 )
      break;
    v12 = (_QWORD *)v38;
    v21 = (unsigned int)(v21 + 1);
    v20 += 6;
    if ( (unsigned int)v21 >= v35 )
    {
      v24 = a8;
      v25 = v38;
      goto LABEL_22;
    }
  }
  v24 = a8;
  if ( (a8 & 1) == 0 )
    goto LABEL_24;
  if ( !v34 )
  {
    v25 = v38;
    goto LABEL_21;
  }
  v26 = (unsigned int)a3[6 * v21];
  LOBYTE(v23) = 1;
  v25 = v38;
  v22 = sub_180004474(v38, v26, a5, v23);
  if ( v22 < 0 )
  {
LABEL_24:
    v14 = v35;
    goto LABEL_25;
  }
LABEL_21:
  v19 = 1;
LABEL_22:
  v33 = v19;
  v14 = v35;
  v27 = sub_180001EF8(
          *(_QWORD *)(v25 + 24),
          v35,
          (_DWORD)a3,
          v36,
          a5,
          a6,
          a7,
          v33,
          v24,
          a9,
          a10,
          (__int64)v16,
          v39,
          (__int64)&v37);
  v15 = v37;
  v22 = v27;
  if ( v27 >= 0 )
  {
    *v42 = v37;
    sub_180001C3C(v25 + 88, (int)v43);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v22 = 0;
  }
LABEL_25:
  sub_18000F390();
  if ( v16 )
    sub_1800265B0(v16);
LABEL_28:
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v35 = (unsigned __int8)v30;
    v41 = a10;
    LODWORD(v42) = a9;
    LODWORD(v40) = a5;
    LODWORD(v39) = v24;
    LODWORD(v37) = v14;
    *(_QWORD *)v43 = v15;
    LODWORD(v38) = v22;
    sub_180067100(
      v28,
      (unsigned int)&unk_18009AF8F,
      v29,
      v30,
      (__int64)&v38,
      (__int64)v43,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v35);
  }
  v31 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v31, 0LL);
  }
  return (unsigned int)v22;
}
