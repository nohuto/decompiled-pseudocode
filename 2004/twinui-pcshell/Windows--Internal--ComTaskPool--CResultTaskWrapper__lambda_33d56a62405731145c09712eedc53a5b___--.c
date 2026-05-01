/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_33d56a62405731145c09712eedc53a5b___::Run @ 0x18005B450
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_33d56a62405731145c09712eedc53a5b_::operator() @ 0x18005B478 (_lambda_33d56a62405731145c09712eedc53a5b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_33d56a62405731145c09712eedc53a5b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_33d56a62405731145c09712eedc53a5b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
