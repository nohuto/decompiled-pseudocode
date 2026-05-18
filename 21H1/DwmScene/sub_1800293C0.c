/*
 * XREFs of sub_1800293C0 @ 0x1800293C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001792C @ 0x18001792C (sub_18001792C.c)
 *     sub_180029190 @ 0x180029190 (sub_180029190.c)
 *     sub_180029D9C @ 0x180029D9C (sub_180029D9C.c)
 *     D2D1CreateFactory @ 0x18010E50E (D2D1CreateFactory.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800293C0(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, void *, __int64); // rcx
  _QWORD *v5; // r14
  __int64 v6; // rcx
  int v7; // eax
  ULONG_PTR v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 *v11; // rax
  unsigned int v12; // ebx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, void *, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  _QWORD *v23; // [rsp+58h] [rbp-A8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD v25; // [rsp+100h] [rbp+0h] BYREF
  __int128 v26; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v27; // [rsp+1B0h] [rbp+B0h]
  int v28; // [rsp+1B8h] [rbp+B8h]
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v23 = a2;
  v4 = (__int64 (__fastcall ***)(_QWORD, void *, __int64))*a2;
  v20 = v4;
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64)))(*v4)[1])(v4);
  sub_180029190((__int64)a1, (__int64 *)&v20);
  v5 = a1 + 213;
  v6 = a1[213];
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (**(__int64 (__fastcall ***)(_QWORD, void *, __int64))*a2)(*a2, &unk_18013CCD0, (__int64)(a1 + 213));
  v8 = v7;
  if ( v7 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v9 = *v5;
  if ( *v5 )
  {
    v10 = strnlen("BackBufferSurface", 0xFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v9 + 24LL))(
      v9,
      &unk_1801D6830,
      v10,
      "BackBufferSurface");
  }
  v11 = sub_18001792C(a1 + 215);
  D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &riid, 0LL, (void **)v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 264LL))(a1, 2LL);
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  v14 = sub_180029D9C(v12, v13 != 0);
  LODWORD(v21) = 0;
  v20 = (__int64 (__fastcall ***)(_QWORD, void *, __int64))(v14 | 0x100000000LL);
  *(_QWORD *)((char *)&v21 + 4) = v20;
  HIDWORD(v21) = 0;
  v22 = 0x200000000LL;
  v26 = v21;
  v27 = 0x200000000LL;
  v28 = 0;
  v15 = a1[215];
  v16 = a1[214];
  if ( v16 )
  {
    a1[214] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD *))(*(_QWORD *)v15 + 120LL))(
          v15,
          *v5,
          &v26,
          a1 + 214);
  v18 = v17;
  if ( v17 < 0 )
  {
    memset(&v25, 0, sizeof(v25));
    v25.ExceptionCode = -532265403;
    v25.ExceptionAddress = retaddr;
    v25.NumberParameters = 1;
    v25.ExceptionInformation[0] = v18;
    RaiseFailFastException(&v25, 0LL, 0);
  }
  v19 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
