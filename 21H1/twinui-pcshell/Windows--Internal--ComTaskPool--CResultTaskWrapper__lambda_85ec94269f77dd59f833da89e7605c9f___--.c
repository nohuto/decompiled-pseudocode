/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_85ec94269f77dd59f833da89e7605c9f___::Run @ 0x18007F300
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_85ec94269f77dd59f833da89e7605c9f_::operator() @ 0x18007F328 (_lambda_85ec94269f77dd59f833da89e7605c9f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_85ec94269f77dd59f833da89e7605c9f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_85ec94269f77dd59f833da89e7605c9f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
