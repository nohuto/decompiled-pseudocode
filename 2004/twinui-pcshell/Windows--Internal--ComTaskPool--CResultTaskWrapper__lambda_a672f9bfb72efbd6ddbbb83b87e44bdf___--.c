/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a672f9bfb72efbd6ddbbb83b87e44bdf___::Run @ 0x18005D120
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator() @ 0x18005D148 (_lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a672f9bfb72efbd6ddbbb83b87e44bdf___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
