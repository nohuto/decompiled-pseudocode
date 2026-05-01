/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_218d2bf51dd35665d9ca3455cad3f3f5___::Run @ 0x18005C640
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_218d2bf51dd35665d9ca3455cad3f3f5_::operator() @ 0x18005C668 (_lambda_218d2bf51dd35665d9ca3455cad3f3f5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_218d2bf51dd35665d9ca3455cad3f3f5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_218d2bf51dd35665d9ca3455cad3f3f5_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
