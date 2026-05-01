/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f787ce11dee42df79c5ec7bca65a6817___::Run @ 0x18007E730
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f787ce11dee42df79c5ec7bca65a6817_::operator() @ 0x18007E758 (_lambda_f787ce11dee42df79c5ec7bca65a6817_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f787ce11dee42df79c5ec7bca65a6817___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f787ce11dee42df79c5ec7bca65a6817_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
