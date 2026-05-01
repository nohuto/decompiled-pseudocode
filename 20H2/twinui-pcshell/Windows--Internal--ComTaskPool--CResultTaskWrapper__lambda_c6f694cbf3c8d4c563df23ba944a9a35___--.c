/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c6f694cbf3c8d4c563df23ba944a9a35___::Run @ 0x1802DF220
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c6f694cbf3c8d4c563df23ba944a9a35_::operator() @ 0x1802DD718 (_lambda_c6f694cbf3c8d4c563df23ba944a9a35_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c6f694cbf3c8d4c563df23ba944a9a35___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c6f694cbf3c8d4c563df23ba944a9a35_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
