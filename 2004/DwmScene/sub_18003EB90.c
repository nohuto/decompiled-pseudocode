/*
 * XREFs of sub_18003EB90 @ 0x18003EB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_18003EADC @ 0x18003EADC (sub_18003EADC.c)
 *     sub_18003F20C @ 0x18003F20C (sub_18003F20C.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18003EB90(__int64 a1)
{
  int v2; // eax
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  ULONG_PTR v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  ULONG_PTR v12; // rdi
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, void *, _QWORD *); // rcx
  __int64 v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-D0h] BYREF
  EXCEPTION_RECORD v18; // [rsp+D0h] [rbp-30h] BYREF
  EXCEPTION_RECORD v19; // [rsp+170h] [rbp+70h] BYREF
  __int64 v20; // [rsp+210h] [rbp+110h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, void *, __int64 *); // [rsp+218h] [rbp+118h] BYREF
  void *retaddr; // [rsp+248h] [rbp+148h]

  sub_18003EADC(a1);
  if ( *(_QWORD *)(a1 + 536) )
  {
    v16 = 0LL;
    sub_18003F20C(a1, &v16);
    v21 = 0LL;
    sub_180024694(v16, &v21);
    v20 = 0LL;
    v2 = (**v21)(v21, &unk_18013B948, &v20);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v4 = *(_QWORD *)(a1 + 512);
    v5 = (__int64 *)(a1 + 520);
    v6 = *(_QWORD *)(a1 + 520);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 216LL))(v4, v20, a1 + 520);
    v8 = v7;
    if ( v7 < 0 )
    {
      memset(&v18, 0, sizeof(v18));
      v18.ExceptionCode = -532265403;
      v18.ExceptionAddress = retaddr;
      v18.NumberParameters = 1;
      v18.ExceptionInformation[0] = v8;
      RaiseFailFastException(&v18, 0LL, 0);
    }
    v9 = *v5;
    v10 = *(_QWORD *)(a1 + 528);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 528) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 88LL))(v9, 0LL, a1 + 528);
    v12 = v11;
    if ( v11 < 0 )
    {
      memset(&v19, 0, sizeof(v19));
      v19.ExceptionCode = -532265403;
      v19.ExceptionAddress = retaddr;
      v19.NumberParameters = 1;
      v19.ExceptionInformation[0] = v12;
      RaiseFailFastException(&v19, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 8LL))(*(_QWORD *)(a1 + 536), a1);
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v14)[2])(v14);
    }
    if ( *((_QWORD *)&v16 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v15 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v15 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
}
