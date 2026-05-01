/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___::Run @ 0x1802E53D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f27b60bae871d07517fb334ba178f733_::operator() @ 0x1802E46EC (_lambda_f27b60bae871d07517fb334ba178f733_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f27b60bae871d07517fb334ba178f733___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f27b60bae871d07517fb334ba178f733_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
