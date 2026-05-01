/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e4dce5b548ec2ba2e171320f5984322f___::Run @ 0x18004DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e4dce5b548ec2ba2e171320f5984322f_::operator() @ 0x18004DAC8 (_lambda_e4dce5b548ec2ba2e171320f5984322f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e4dce5b548ec2ba2e171320f5984322f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e4dce5b548ec2ba2e171320f5984322f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
