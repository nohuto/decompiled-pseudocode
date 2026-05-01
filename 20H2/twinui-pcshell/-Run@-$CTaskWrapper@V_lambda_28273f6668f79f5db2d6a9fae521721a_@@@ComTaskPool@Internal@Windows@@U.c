/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180216680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>::Run(
        __int64 a1)
{
  return CreationThreadDispatcher::RunSync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(
           *(_QWORD *)(a1 + 40),
           (int *)(a1 + 16));
}
