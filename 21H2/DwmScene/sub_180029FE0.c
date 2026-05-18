/*
 * XREFs of sub_180029FE0 @ 0x180029FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029FE0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  ULONG_PTR v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-79h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-69h] BYREF
  __int64 v11; // [rsp+D0h] [rbp+37h] BYREF
  int v12; // [rsp+D8h] [rbp+3Fh] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v12 = -1;
  v11 = 0LL;
  v1 = sub_180029F64(a1, &v9);
  v2 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  (**(void (__fastcall ***)(_QWORD, void *, __int64 *))*v1)(*v1, &unk_180141C98, &v11);
  v3 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = v11;
  if ( v11 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 104LL))(v11, &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v6;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v4 = v11;
  }
  v7 = v12;
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v7;
}
