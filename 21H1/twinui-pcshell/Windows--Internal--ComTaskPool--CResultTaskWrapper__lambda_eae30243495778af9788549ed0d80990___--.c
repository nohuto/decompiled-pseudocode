/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eae30243495778af9788549ed0d80990___::Run @ 0x180084F60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eae30243495778af9788549ed0d80990_::operator() @ 0x180084F88 (_lambda_eae30243495778af9788549ed0d80990_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eae30243495778af9788549ed0d80990___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_eae30243495778af9788549ed0d80990_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
