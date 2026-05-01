/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a19857b3688babe6995a710ade713d88___::Run @ 0x18009EA20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a19857b3688babe6995a710ade713d88_::operator() @ 0x18009E46C (_lambda_a19857b3688babe6995a710ade713d88_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a19857b3688babe6995a710ade713d88___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a19857b3688babe6995a710ade713d88_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
