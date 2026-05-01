/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04d74f0b1867aa1b237282343d8f99ac___::Run @ 0x1802B6E20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_04d74f0b1867aa1b237282343d8f99ac_::operator() @ 0x1802B4C38 (_lambda_04d74f0b1867aa1b237282343d8f99ac_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_04d74f0b1867aa1b237282343d8f99ac___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_04d74f0b1867aa1b237282343d8f99ac_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
