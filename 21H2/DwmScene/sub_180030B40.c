/*
 * XREFs of sub_180030B40 @ 0x180030B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180030B40(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rbx
  _QWORD v13[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp-B0h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v17[12]; // [rsp+100h] [rbp+0h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v13[1] = a2;
  v17[9] = 0;
  v17[3] = 1;
  v17[8] = 32;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v17[4] = sub_18002F66C(v4, v5 != 0);
  v17[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v17[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v17[2] = 1;
  v17[5] = 1;
  v17[6] = 0;
  v17[10] = 512;
  v17[7] = 0;
  *a2 = 0LL;
  *a2 = 0LL;
  v6 = *sub_18002F588(a1, v13);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v17, 0LL, a2);
  v9 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = sub_18002F7A0(a1, &v14);
  sub_18002BE74(*v10, v8);
  v11 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}
