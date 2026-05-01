/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___::Run @ 0x1800AE450
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ef1ee2ad9bb2cc2c534b77abec71acbc_::operator() @ 0x1800AE0D4 (_lambda_ef1ee2ad9bb2cc2c534b77abec71acbc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ef1ee2ad9bb2cc2c534b77abec71acbc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ef1ee2ad9bb2cc2c534b77abec71acbc_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
