/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8___::Run @ 0x18018A040
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_66130c34581757aa5e7e6aafaafaa423_::operator() @ 0x1801891B0 (_lambda_66130c34581757aa5e7e6aafaafaa423_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_153d02fd68e04791af94e0f734ac69a8___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_66130c34581757aa5e7e6aafaafaa423_::operator()((unsigned int *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
