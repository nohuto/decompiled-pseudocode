/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run @ 0x1802D0CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) + 280LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v3 + 344) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 168) + 504LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 168) + 504LL),
      *(unsigned int *)(v3 + 148),
      *(unsigned int *)(v3 + 292));
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
