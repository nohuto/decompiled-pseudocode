/*
 * XREFs of sub_180023940 @ 0x180023940
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_1800312B8 @ 0x1800312B8 (sub_1800312B8.c)
 *     sub_1800338FC @ 0x1800338FC (sub_1800338FC.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18006B53C @ 0x18006B53C (sub_18006B53C.c)
 *     sub_18009AD5C @ 0x18009AD5C (sub_18009AD5C.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_180023940(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rcx
  __int128 v7; // rdi
  volatile signed __int32 *v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 *v11; // rax
  unsigned int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  float *v25; // rax
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  size_t v32; // rbx
  char *v33; // r12
  char *v34; // r15
  __int64 v35; // r13
  __int64 v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+78h] [rbp-88h] BYREF
  __int128 v53; // [rsp+88h] [rbp-78h] BYREF
  __int128 v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-40h]
  __int128 v58; // [rsp+D0h] [rbp-30h]
  _BYTE v59[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v60[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v61[16]; // [rsp+F8h] [rbp-8h] BYREF
  void *Src; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v63; // [rsp+110h] [rbp+10h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+120h] [rbp+20h] BYREF
  __int64 v65; // [rsp+1C0h] [rbp+C0h] BYREF
  _Mtx_t v66[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v50 = a2;
  *(_OWORD *)v66 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, v66);
  v54 = 0LL;
  v6 = *(_QWORD *)(a1 + 280);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 280);
  }
  v56[0] = *(_QWORD *)(a1 + 272);
  v56[1] = v6;
  sub_1800186E0(&v54, v56);
  v65 = 0LL;
  sub_1800338FC(v54, &v65);
  v57 = 0LL;
  *((_QWORD *)&v7 + 1) = a4[18];
  if ( *((_QWORD *)&v7 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL));
    *((_QWORD *)&v7 + 1) = a4[18];
  }
  *(_QWORD *)&v7 = a4[17];
  v57 = v7;
  v58 = 0LL;
  v8 = (volatile signed __int32 *)a4[20];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a4[20];
    *(_QWORD *)&v7 = v57;
  }
  *(_QWORD *)&v58 = a4[19];
  v9 = v58;
  *((_QWORD *)&v58 + 1) = v8;
  v53 = 0LL;
  v10 = sub_18006AB3C(a1);
  v11 = (__int64 *)sub_18009ADA4(v7, v60, v10);
  sub_1800186E0(&v53, v11);
  v52 = 0LL;
  v12 = sub_18006AB3C(a1);
  v13 = (__int64 *)sub_18009ADA4(v9, v61, v12);
  sub_1800186E0(&v52, v13);
  v14 = v65;
  v15 = (_QWORD *)sub_1800312B8(v53, &v47);
  v16 = v52;
  v45 = v52;
  v17 = (_QWORD *)sub_1800312B8(v52, &v46);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(v14, *v17, *v15);
  v18 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v65;
  v21 = (_QWORD *)sub_1800312B8(v16, &v48);
  v22 = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v20 + 112LL))(
          v20,
          *v21,
          0LL,
          1LL,
          0,
          &Src);
  v23 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (v22 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v22;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v24 = a4[17];
  if ( v24 )
  {
    v25 = (float *)sub_18009AD5C(v24, v59);
  }
  else
  {
    v49[0] = 0;
    v49[1] = 0;
    v25 = (float *)v49;
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
  v32 = 16 * v29;
  v55 = v63;
  v33 = (char *)Src;
  v34 = (char *)sub_18006B53C(a1, v50, a4, v31 * v32);
  if ( v31 )
  {
    v35 = v55;
    do
    {
      memcpy(v34, v33, v32);
      v33 += v35;
      v34 += v32;
      --v31;
    }
    while ( v31 );
  }
  *(_DWORD *)(v50 + 20) = 1;
  v36 = v65;
  v37 = (_QWORD *)sub_1800312B8(v45, &v51);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 120LL))(v36, *v37, 0LL);
  v38 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  if ( *((_QWORD *)&v52 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL)) )
    {
      v39 = *((_QWORD *)&v52 + 1);
      (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v39 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
    }
  }
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL)) )
    {
      v40 = *((_QWORD *)&v53 + 1);
      (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v40 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
    }
  }
  if ( v8 )
  {
    if ( !_InterlockedDecrement(v8 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  v41 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  if ( *((_QWORD *)&v54 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL)) )
    {
      v42 = *((_QWORD *)&v54 + 1);
      (***((void (__fastcall ****)(_QWORD))&v54 + 1))(*((_QWORD *)&v54 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v42 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
    }
  }
  if ( LOBYTE(v66[1]) )
  {
    v43 = Mtx_unlock(v66[0]);
    if ( v43 )
    {
      std::_Throw_C_error(v43);
      JUMPOUT(0x180023EA6LL);
    }
  }
  return 1;
}
