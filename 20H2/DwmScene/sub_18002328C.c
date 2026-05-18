/*
 * XREFs of sub_18002328C @ 0x18002328C
 * Callers:
 *     sub_180024A60 @ 0x180024A60 (sub_180024A60.c)
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_18002328C(__int64 a1)
{
  _QWORD *v1; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-69h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+D0h] [rbp+47h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v7 = 0;
  v1 = (_QWORD *)sub_180024694(a1, &v5);
  v2 = (*(int (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v7);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (v2 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (v7 & 0x240000) == 2359296;
}
