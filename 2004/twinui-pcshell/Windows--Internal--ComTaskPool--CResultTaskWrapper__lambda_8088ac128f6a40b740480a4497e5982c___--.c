/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8088ac128f6a40b740480a4497e5982c___::Run @ 0x1802D8B40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8088ac128f6a40b740480a4497e5982c_::operator() @ 0x1802D6C7C (_lambda_8088ac128f6a40b740480a4497e5982c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8088ac128f6a40b740480a4497e5982c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8088ac128f6a40b740480a4497e5982c_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
