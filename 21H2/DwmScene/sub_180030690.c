/*
 * XREFs of sub_180030690 @ 0x180030690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017DD4 @ 0x180017DD4 (sub_180017DD4.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002F490 @ 0x18002F490 (sub_18002F490.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_18006C4D4 @ 0x18006C4D4 (sub_18006C4D4.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180030690(__int64 **a1, __int64 *a2)
{
  __int64 v4; // r12
  __int64 **v5; // r13
  __int64 *v6; // rdi
  __int64 (__fastcall *v7)(__int64 **, __int64); // rax
  int v8; // ebx
  char v9; // al
  int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // eax
  ULONG_PTR v15; // rbx
  int v16; // ebx
  char v17; // al
  __int64 **v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 *v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 *v29; // rax
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 *v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v42; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD v43[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v44; // [rsp+1C0h] [rbp+C0h]
  int v45; // [rsp+1C8h] [rbp+C8h]
  int v46; // [rsp+1CCh] [rbp+CCh]
  int v47; // [rsp+1D0h] [rbp+D0h]
  int v48; // [rsp+1D4h] [rbp+D4h]
  __int64 v49; // [rsp+1D8h] [rbp+D8h]
  void *retaddr; // [rsp+228h] [rbp+128h]

  v36 = a2;
  v37 = 0LL;
  sub_18002F7A0((__int64)a1, &v37);
  v4 = v37;
  if ( !(_QWORD)v37 )
    goto LABEL_35;
  v5 = a1 + 63;
  v6 = a1[63];
  v36 = v6;
  v7 = (__int64 (__fastcall *)(__int64 **, __int64))(*a1)[33];
  if ( v6 )
  {
    v8 = v7(a1, 2LL);
    v9 = ((__int64 (__fastcall *)(__int64 **))(*a1)[37])(a1);
    v10 = sub_18002F66C(v8, v9 != 0);
    v11 = *v6;
    v12 = ((__int64 (__fastcall *)(__int64 **))(*a1)[11])(a1);
    v13 = ((__int64 (__fastcall *)(__int64 **))(*a1)[10])(a1);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, int, _DWORD))(v11 + 104))(
            v36,
            2LL,
            v13,
            v12,
            v10,
            0);
    v15 = v14;
    sub_18002BE74(v4, v14);
    if ( (v15 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v15;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
      sub_18006C4D4(a1);
  }
  else
  {
    v48 = 0;
    v49 = 3LL;
    v45 = 32;
    v46 = 2;
    v16 = v7(a1, 2LL);
    v17 = ((__int64 (__fastcall *)(__int64 **))(*a1)[37])(a1);
    v43[2] = sub_18002F66C(v16, v17 != 0);
    v43[1] = ((__int64 (__fastcall *)(__int64 **))(*a1)[11])(a1);
    v43[0] = ((__int64 (__fastcall *)(__int64 **))(*a1)[10])(a1);
    v44 = 1LL;
    v47 = 0;
    v43[3] = 0;
    v42 = 0LL;
    v18 = (__int64 **)sub_18002F490((__int64)a1, &v38);
    v19 = *v18;
    v20 = **v18;
    v21 = sub_180017DD4(&v42);
    (*(void (__fastcall **)(__int64 *, const IID *, __int64 *))(v20 + 48))(v19, &stru_1801417F0, v21);
    v22 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = sub_18002F588((__int64)a1, &v36);
    v24 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
    }
    ((void (__fastcall *)(__int64 **, __int64, _QWORD, _DWORD *, __int64 **))(*a1)[51])(a1, v42, *v23, v43, a1 + 63);
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
    }
    v26 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4) )
  {
    ((void (__fastcall *)(__int64 **))(*a1)[52])(a1);
    v41 = 0LL;
    v27 = *v5;
    v28 = **v5;
    v29 = sub_180017DD4(&v41);
    v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, void *, __int64 *))(v28 + 72))(v27, 0LL, &unk_180142FC0, v29);
    v31 = v30;
    if ( v30 < 0 )
    {
      memset(&v40, 0, sizeof(v40));
      v40.ExceptionCode = -532265403;
      v40.ExceptionAddress = retaddr;
      v40.NumberParameters = 1;
      v40.ExceptionInformation[0] = v31;
      RaiseFailFastException(&v40, 0LL, 0);
    }
    *a2 = 0LL;
    if ( a2 == &v41 )
    {
      v32 = v41;
    }
    else
    {
      *a2 = v41;
      v32 = 0LL;
      v41 = 0LL;
    }
    if ( v32 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    if ( *((_QWORD *)&v37 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v33 = *((_QWORD *)&v37 + 1);
        (***((void (__fastcall ****)(_QWORD))&v37 + 1))(*((_QWORD *)&v37 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 8LL))(*((_QWORD *)&v37 + 1));
      }
    }
  }
  else
  {
LABEL_35:
    if ( *((_QWORD *)&v37 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v34 = *((_QWORD *)&v37 + 1);
        (***((void (__fastcall ****)(_QWORD))&v37 + 1))(*((_QWORD *)&v37 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 8LL))(*((_QWORD *)&v37 + 1));
      }
    }
    *a2 = 0LL;
  }
  return a2;
}
