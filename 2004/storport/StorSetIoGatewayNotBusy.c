/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1C004D438
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0009CC0 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterDeferredRoutine @ 0x1C000FF20 (RaidAdapterDeferredRoutine.c)
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
