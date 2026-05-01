/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8d0fb77c452b9bcaee92e3ab82296a11___::Run @ 0x1802BDEE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8d0fb77c452b9bcaee92e3ab82296a11_::operator() @ 0x1802BC214 (_lambda_8d0fb77c452b9bcaee92e3ab82296a11_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8d0fb77c452b9bcaee92e3ab82296a11___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8d0fb77c452b9bcaee92e3ab82296a11_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
