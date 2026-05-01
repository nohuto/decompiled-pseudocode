/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_609f8103609db179fd7ee2c103db6114___::Run @ 0x1802BDE80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_609f8103609db179fd7ee2c103db6114_::operator() @ 0x1802BBFB4 (_lambda_609f8103609db179fd7ee2c103db6114_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_609f8103609db179fd7ee2c103db6114___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_609f8103609db179fd7ee2c103db6114_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
