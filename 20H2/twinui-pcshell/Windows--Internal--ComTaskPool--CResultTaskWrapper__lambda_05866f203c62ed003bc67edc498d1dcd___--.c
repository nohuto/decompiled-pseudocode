/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_05866f203c62ed003bc67edc498d1dcd___::Run @ 0x180076E10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_05866f203c62ed003bc67edc498d1dcd_::operator() @ 0x180076E38 (_lambda_05866f203c62ed003bc67edc498d1dcd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_05866f203c62ed003bc67edc498d1dcd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_05866f203c62ed003bc67edc498d1dcd_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
