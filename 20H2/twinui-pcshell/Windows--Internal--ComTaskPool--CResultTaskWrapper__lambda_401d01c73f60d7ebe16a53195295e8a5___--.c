/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_401d01c73f60d7ebe16a53195295e8a5___::Run @ 0x180075AE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_401d01c73f60d7ebe16a53195295e8a5_::operator() @ 0x180075B08 (_lambda_401d01c73f60d7ebe16a53195295e8a5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_401d01c73f60d7ebe16a53195295e8a5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_401d01c73f60d7ebe16a53195295e8a5_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
