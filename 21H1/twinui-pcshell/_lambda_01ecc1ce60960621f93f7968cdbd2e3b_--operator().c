/*
 * XREFs of _lambda_01ecc1ce60960621f93f7968cdbd2e3b_::operator() @ 0x18013E644
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___::Run @ 0x18013F730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_01ecc1ce60960621f93f7968cdbd2e3b_::operator()(_DWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v7; // rax

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 208LL))(*(_QWORD *)a1);
  if ( *result )
  {
    v5 = a1[2];
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 208LL))(*(_QWORD *)a1);
    result = (_QWORD *)v6(a2, *v7, v5);
    if ( !a1[2] )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 200LL))(*(_QWORD *)a1, 0LL);
  }
  return result;
}
