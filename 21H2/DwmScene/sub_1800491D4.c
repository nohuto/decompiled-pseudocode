/*
 * XREFs of sub_1800491D4 @ 0x1800491D4
 * Callers:
 *     sub_180042A30 @ 0x180042A30 (sub_180042A30.c)
 *     sub_180046630 @ 0x180046630 (sub_180046630.c)
 * Callees:
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180048FF0 @ 0x180048FF0 (sub_180048FF0.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x180124450 (j_--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800491D4(_QWORD *a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // r15
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+120h] [rbp+20h] BYREF
  __int64 v31; // [rsp+128h] [rbp+28h] BYREF
  int v32; // [rsp+130h] [rbp+30h] BYREF
  __int64 v33; // [rsp+134h] [rbp+34h]
  int v34; // [rsp+13Ch] [rbp+3Ch]
  __int64 v35; // [rsp+140h] [rbp+40h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a4;
  v24 = a1;
  v27[1] = a3;
  v7 = *a2;
  v31 = 0LL;
  sub_180029F64(v7, &v31);
  v35 = 0LL;
  v32 = v4;
  v33 = 3LL;
  v34 = 0x20000;
  v30 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v31 + 24LL))(v31, &v32, 0LL, &v30);
  sub_18002BE74(v7, v8);
  v9 = sub_180029F94(v7, &v25);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v9 + 376LL))(*v9, v30, *a3);
  v10 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = sub_180029F94(v7, &v26);
  v12 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v11 + 112LL))(
          *v11,
          v30,
          0LL,
          1LL,
          0,
          &Src);
  v13 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( (v12 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v12;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v14 = operator new(v4);
  v17 = v14;
  if ( v14 )
    memset(v14, 0, v4);
  else
    v17 = 0LL;
  v24 = v17;
  if ( v4 )
  {
    if ( v17 )
    {
      if ( Src )
      {
        memcpy(v17, Src, v4);
        goto LABEL_16;
      }
      memset(v17, 0, v4);
    }
    *(_DWORD *)o__errno(v16, v15) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_16:
  v18 = sub_180029F94(v7, v27);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v18 + 120LL))(*v18, v30, 0LL);
  v19 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  sub_180048FF0(a1, (__int64 *)&v24);
  if ( v24 )
    j_j__o_free(v24);
  v20 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return a1;
}
