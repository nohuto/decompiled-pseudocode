/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_59e865485dd6116eaaa4eee0212523ff___::Run @ 0x180058E60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_59e865485dd6116eaaa4eee0212523ff_::operator() @ 0x180058E88 (_lambda_59e865485dd6116eaaa4eee0212523ff_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_59e865485dd6116eaaa4eee0212523ff___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_59e865485dd6116eaaa4eee0212523ff_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
