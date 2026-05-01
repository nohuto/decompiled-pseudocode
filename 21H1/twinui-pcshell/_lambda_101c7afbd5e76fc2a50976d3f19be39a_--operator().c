/*
 * XREFs of _lambda_101c7afbd5e76fc2a50976d3f19be39a_::operator() @ 0x18026BF60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::Run @ 0x18026EBE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___--Run.c)
 * Callees:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18026CD7C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027002C (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_101c7afbd5e76fc2a50976d3f19be39a_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1 + 6;
  AcquireSRWLockExclusive(v2);
  v3 = *((_OWORD *)a1 + 2);
  TabTransferManager::ValidateTabId(*a1, &v3);
  *(_OWORD *)&(*a1)[28].Ptr = *((_OWORD *)a1 + 1);
  LODWORD((*a1)[30].Ptr) = *((_DWORD *)a1 + 12);
  *(PVOID *)((char *)&(*a1)[30].Ptr + 4) = *(RTL_SRWLOCK **)((char *)a1 + 52);
  TabTransferManager::AdvanceTransfer(*a1, 8LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
