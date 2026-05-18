/*
 * XREFs of sub_180028C30 @ 0x180028C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_180070E0C @ 0x180070E0C (sub_180070E0C.c)
 *     sub_1800A062C @ 0x1800A062C (sub_1800A062C.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
char __fastcall sub_180028C30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // r14
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  ULONG_PTR v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  float *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  size_t v32; // r12
  __int64 v33; // r13
  char *v34; // rdi
  char *i; // r15
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rbx
  volatile signed __int32 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // eax
  _DWORD v44[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+68h] [rbp-98h] BYREF
  __int128 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int128 v53; // [rsp+B8h] [rbp-48h]
  _BYTE v54[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v55[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[16]; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v58; // [rsp+F8h] [rbp-8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+100h] [rbp+0h] BYREF
  __int64 v60; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v61; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v62; // [rsp+1B0h] [rbp+B0h] BYREF
  _Mtx_t v63[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v64; // [rsp+1D0h] [rbp+D0h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v50 = a2;
  v64 = 0LL;
  sub_180066E3C(a1 + 24, &v64);
  *(_OWORD *)v63 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, v63);
  v49 = 0LL;
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = *(_QWORD *)(a1 + 280);
  }
  v51[0] = *(_QWORD *)(a1 + 272);
  v51[1] = v5;
  sub_180018B88(&v49, v51);
  v60 = 0LL;
  sub_1800391CC(v49, &v60);
  v62 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 32LL))(a3, &v62);
  v52 = 0LL;
  v6 = v62;
  v7 = *(volatile signed __int32 **)(v62 + 144);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 144);
  }
  v8 = *(_QWORD *)(v6 + 136);
  *(_QWORD *)&v52 = v8;
  *((_QWORD *)&v52 + 1) = v7;
  v48 = 0LL;
  v9 = sub_18007040C(a1);
  v10 = (__int64 *)sub_1800A0674(v8, v55, v9);
  sub_180018B88(&v48, v10);
  v53 = 0LL;
  v11 = v62;
  v12 = *(volatile signed __int32 **)(v62 + 160);
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = *(volatile signed __int32 **)(v11 + 160);
  }
  v13 = *(_QWORD *)(v11 + 152);
  *(_QWORD *)&v53 = v13;
  *((_QWORD *)&v53 + 1) = v12;
  v45 = 0LL;
  v14 = sub_18007040C(a1);
  v15 = (__int64 *)sub_1800A0674(v13, v56, v14);
  sub_180018B88(&v45, v15);
  v16 = v60;
  v17 = (_QWORD *)sub_180036B88(v48, &v47);
  v18 = (_QWORD *)sub_180036B88(v45, &v46);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 376LL))(v16, *v18, *v17);
  v19 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v61 = 0LL;
  sub_180036B88(v45, &v61);
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v60 + 112LL))(
          v60,
          v61,
          0LL,
          1LL,
          0,
          &Src);
  v22 = v21;
  if ( v21 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v22;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v23 = v62;
  v24 = *(_QWORD *)(v62 + 136);
  if ( v24 )
  {
    v25 = (float *)sub_1800A062C(v24, v54);
    v23 = v62;
  }
  else
  {
    v44[0] = 0;
    v44[1] = 0;
    v25 = (float *)v44;
  }
  v26 = *v25;
  v27 = v25[1];
  v28 = 0LL;
  if ( v26 >= 9.223372e18 )
  {
    v26 = v26 - 9.223372e18;
    if ( v26 < 9.223372e18 )
      v28 = 0x8000000000000000uLL;
  }
  v29 = v28 + (unsigned int)(int)v26;
  v30 = 0LL;
  if ( v27 >= 9.223372e18 )
  {
    v27 = v27 - 9.223372e18;
    if ( v27 < 9.223372e18 )
      v30 = 0x8000000000000000uLL;
  }
  v31 = v30 + (unsigned int)(int)v27;
  v32 = 4 * v29;
  v33 = v58;
  v34 = (char *)Src;
  for ( i = (char *)sub_180070E0C(a1, v50, v23, v31 * v32); v31; --v31 )
  {
    memcpy(i, v34, v32);
    v34 += v33;
    i += v32;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v60 + 120LL))(v60, v61, 0LL);
  v36 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL)) )
    {
      v37 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v37 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( v12 )
  {
    if ( !_InterlockedDecrement(v12 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL)) )
    {
      v38 = *((_QWORD *)&v48 + 1);
      (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v38 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
    }
  }
  if ( v7 )
  {
    if ( !_InterlockedDecrement(v7 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( !_InterlockedDecrement(v7 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v39 = (volatile signed __int32 *)*((_QWORD *)&v62 + 1);
  if ( *((_QWORD *)&v62 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
      if ( !_InterlockedDecrement(v39 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
    }
  }
  v40 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL)) )
    {
      v41 = *((_QWORD *)&v49 + 1);
      (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v41 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
    }
  }
  if ( LOBYTE(v63[1]) )
  {
    v42 = Mtx_unlock(v63[0]);
    if ( v42 )
    {
      std::_Throw_C_error(v42);
      JUMPOUT(0x180029208LL);
    }
  }
  if ( BYTE8(v64) )
    sub_180067304(v64);
  return 1;
}
