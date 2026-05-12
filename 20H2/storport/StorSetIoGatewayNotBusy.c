/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1C004E2F0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008D50 (StorRemoveIoGatewayItem.c)
 *     StorSetIoGatewayBusy @ 0x1C004E1CC (StorSetIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorSetIoGatewayNotBusy(unsigned int *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1[10] )
    {
      result = a1[7];
      a1[10] = 0;
      a1[8] = result;
    }
  }
  return result;
}
