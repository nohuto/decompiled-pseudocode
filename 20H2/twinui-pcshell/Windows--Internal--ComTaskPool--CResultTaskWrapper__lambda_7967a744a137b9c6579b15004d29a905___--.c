/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7967a744a137b9c6579b15004d29a905___::Run @ 0x1802E7520
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7967a744a137b9c6579b15004d29a905_::operator() @ 0x1802E5EDC (_lambda_7967a744a137b9c6579b15004d29a905_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7967a744a137b9c6579b15004d29a905___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7967a744a137b9c6579b15004d29a905_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
