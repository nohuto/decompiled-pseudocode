/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e77970cd92140e07acf370381d6037d8___::Run @ 0x180075BD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e77970cd92140e07acf370381d6037d8_::operator() @ 0x180075BF8 (_lambda_e77970cd92140e07acf370381d6037d8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e77970cd92140e07acf370381d6037d8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e77970cd92140e07acf370381d6037d8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
