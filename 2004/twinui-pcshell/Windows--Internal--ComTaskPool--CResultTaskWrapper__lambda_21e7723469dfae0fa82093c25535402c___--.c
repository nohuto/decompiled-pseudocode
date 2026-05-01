/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21e7723469dfae0fa82093c25535402c___::Run @ 0x1802DF8E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_21e7723469dfae0fa82093c25535402c_::operator() @ 0x1802DD920 (_lambda_21e7723469dfae0fa82093c25535402c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21e7723469dfae0fa82093c25535402c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_21e7723469dfae0fa82093c25535402c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
