/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9f8b7cab6996de0caad01e4a93420c3___::Run @ 0x1802DF1F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9f8b7cab6996de0caad01e4a93420c3_::operator() @ 0x1802DD61C (_lambda_a9f8b7cab6996de0caad01e4a93420c3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9f8b7cab6996de0caad01e4a93420c3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a9f8b7cab6996de0caad01e4a93420c3_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
