/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_52b61fe057652d6daae3134326b4df51___::Run @ 0x18009E9F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_52b61fe057652d6daae3134326b4df51_::operator() @ 0x18009E300 (_lambda_52b61fe057652d6daae3134326b4df51_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_52b61fe057652d6daae3134326b4df51___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_52b61fe057652d6daae3134326b4df51_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
