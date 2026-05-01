/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d964be56f5c6f09b29aae486e6ea51e1___::Run @ 0x1802DF250
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d964be56f5c6f09b29aae486e6ea51e1_::operator() @ 0x1802DDB30 (_lambda_d964be56f5c6f09b29aae486e6ea51e1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d964be56f5c6f09b29aae486e6ea51e1___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_d964be56f5c6f09b29aae486e6ea51e1_::operator()((_BYTE **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
