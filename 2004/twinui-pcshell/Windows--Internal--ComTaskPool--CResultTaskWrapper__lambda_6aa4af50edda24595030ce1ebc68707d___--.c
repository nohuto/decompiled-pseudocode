/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6aa4af50edda24595030ce1ebc68707d___::Run @ 0x180071A90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6aa4af50edda24595030ce1ebc68707d_::operator() @ 0x180071AB8 (_lambda_6aa4af50edda24595030ce1ebc68707d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6aa4af50edda24595030ce1ebc68707d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6aa4af50edda24595030ce1ebc68707d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
