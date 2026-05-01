/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7908cfebc1d28059a047661d0fa1da88___::Run @ 0x180056820
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7908cfebc1d28059a047661d0fa1da88_::operator() @ 0x180058048 (_lambda_7908cfebc1d28059a047661d0fa1da88_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7908cfebc1d28059a047661d0fa1da88___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7908cfebc1d28059a047661d0fa1da88_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
