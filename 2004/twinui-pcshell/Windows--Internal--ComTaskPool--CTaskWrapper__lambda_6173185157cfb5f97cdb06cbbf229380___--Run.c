/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___::Run @ 0x180290910
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x18028FA20 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6173185157cfb5f97cdb06cbbf229380___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rcx

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 48LL);
  AcquireSRWLockExclusive(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(v3 + 256) && (*(_DWORD *)(v3 + 284) & 0x100) == 0 )
    TabTransferManager::PerformCancel((TabTransferManager *)v3, 0);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
