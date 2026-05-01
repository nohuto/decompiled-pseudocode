/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x180046100
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x180046188 (_lambda_75ecb61212cbd325c11a4ad813499630_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_75ecb61212cbd325c11a4ad813499630_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
