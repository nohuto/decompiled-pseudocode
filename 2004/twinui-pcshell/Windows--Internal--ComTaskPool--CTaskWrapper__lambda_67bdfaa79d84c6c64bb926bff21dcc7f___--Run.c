/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___::Run @ 0x18002FF90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a0ee7bb0dcee848556900d8415f399c8_::operator() @ 0x18002FEC4 (_lambda_a0ee7bb0dcee848556900d8415f399c8_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_a0ee7bb0dcee848556900d8415f399c8_::operator()((unsigned int *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
