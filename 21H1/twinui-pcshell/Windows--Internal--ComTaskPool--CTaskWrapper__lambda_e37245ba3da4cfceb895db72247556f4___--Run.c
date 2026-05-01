/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e37245ba3da4cfceb895db72247556f4___::Run @ 0x180062DD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_34e39aef9b6af58545d6992c86a4e9be_::operator() @ 0x180062E60 (_lambda_34e39aef9b6af58545d6992c86a4e9be_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e37245ba3da4cfceb895db72247556f4___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_34e39aef9b6af58545d6992c86a4e9be_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
