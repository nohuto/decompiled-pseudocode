/*
 * XREFs of sub_18002F330 @ 0x18002F330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_18006B8E0 @ 0x18006B8E0 (sub_18006B8E0.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  int v10; // eax
  ULONG_PTR v11; // rbx
  __int64 (__fastcall *v12)(_QWORD, __int64); // rbx
  __int64 v13; // rax
  signed __int32 v14; // eax
  bool v15; // zf
  __int64 v16; // rbx
  __int128 v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  void *retaddr; // [rsp+148h] [rbp+48h]

  v17 = 0LL;
  result = sub_18002F7A0(a1, &v17);
  if ( (_QWORD)v17 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 192LL))(
            a2,
            a3,
            a4,
            0LL,
            a5);
    v11 = v10;
    if ( v10 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v11;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    result = sub_18006B8E0(a1, v18);
    v12 = *(__int64 (__fastcall **)(_QWORD, __int64))(result + 16);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      result = v12(*a5, v13);
    }
  }
  if ( *((_QWORD *)&v17 + 1) )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      v16 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  return result;
}
