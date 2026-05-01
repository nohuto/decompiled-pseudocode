/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_946ff4b2cd2342ecd6351b66005f8fb8___::Run @ 0x18005B850
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator() @ 0x18005B878 (_lambda_946ff4b2cd2342ecd6351b66005f8fb8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_946ff4b2cd2342ecd6351b66005f8fb8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
