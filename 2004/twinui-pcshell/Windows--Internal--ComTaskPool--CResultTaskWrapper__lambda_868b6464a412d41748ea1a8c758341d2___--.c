/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_868b6464a412d41748ea1a8c758341d2___::Run @ 0x180056160
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_868b6464a412d41748ea1a8c758341d2_::operator() @ 0x180056258 (_lambda_868b6464a412d41748ea1a8c758341d2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_868b6464a412d41748ea1a8c758341d2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_868b6464a412d41748ea1a8c758341d2_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
