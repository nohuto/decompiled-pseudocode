/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df2f1ab58bc6f1d42d46571390bb9643___::Run @ 0x1802DF300
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_df2f1ab58bc6f1d42d46571390bb9643_::operator() @ 0x1802DDC6C (_lambda_df2f1ab58bc6f1d42d46571390bb9643_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df2f1ab58bc6f1d42d46571390bb9643___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_df2f1ab58bc6f1d42d46571390bb9643_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
