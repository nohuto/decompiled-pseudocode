/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___::Run @ 0x18005DED0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x18005DCD8 (_lambda_3d1fcc114f22629400696f1d7422949c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3d1fcc114f22629400696f1d7422949c_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
