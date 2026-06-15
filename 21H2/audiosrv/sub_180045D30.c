/*
 * XREFs of sub_180045D30 @ 0x180045D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall sub_180045D30(__int64 a1, void *a2)
{
  RPC_STATUS result; // eax
  unsigned int Type; // [rsp+40h] [rbp+18h] BYREF

  result = I_RpcBindingInqTransportType(a2, &Type);
  if ( result || Type != 4 )
    return 5;
  return result;
}
