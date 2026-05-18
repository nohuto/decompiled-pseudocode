/*
 * XREFs of sub_180043904 @ 0x180043904
 * Callers:
 *     sub_18003D160 @ 0x18003D160 (sub_18003D160.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800246C4 @ 0x1800246C4 (sub_1800246C4.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180043720 @ 0x180043720 (sub_180043720.c)
 *     _o__invalid_parameter_noinfo @ 0x18011E029 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     j_??2@YAPEAX_K@Z @ 0x18011EB80 (j_--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180043904(_QWORD *a1, __int64 *a2, _QWORD *a3, unsigned int a4)
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
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+120h] [rbp+20h] BYREF
  __int64 v29; // [rsp+128h] [rbp+28h] BYREF
  int v30; // [rsp+130h] [rbp+30h] BYREF
  __int64 v31; // [rsp+134h] [rbp+34h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  __int64 v33; // [rsp+140h] [rbp+40h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a4;
  v22 = a1;
  v25[1] = a3;
  v7 = *a2;
  v29 = 0LL;
  sub_180024694(v7, &v29);
  v33 = 0LL;
  v30 = v4;
  v31 = 3LL;
  v32 = 0x20000;
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v30, 0LL, &v28);
  sub_1800265A4(v7, v8);
  v9 = sub_1800246C4(v7, &v23);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v9 + 376LL))(*v9, v28, *a3);
  v10 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = sub_1800246C4(v7, &v24);
  v12 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v11 + 112LL))(
          *v11,
          v28,
          0LL,
          1LL,
          0,
          &Src);
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
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
  v15 = v14;
  if ( v14 )
    memset(v14, 0, v4);
  else
    v15 = 0LL;
  v22 = v15;
  if ( v4 )
  {
    if ( v15 )
    {
      if ( Src )
      {
        memcpy(v15, Src, v4);
        goto LABEL_16;
      }
      memset(v15, 0, v4);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_16:
  v16 = sub_1800246C4(v7, v25);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v16 + 120LL))(*v16, v28, 0LL);
  v17 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  sub_180043720(a1, (__int64 *)&v22);
  if ( v22 )
    j_j__o_free(v22);
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return a1;
}
