/*
 * XREFs of GetFreeReservedQueueIndex @ 0x1C0010F0C
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C00110AC (IoctlCreateReservedQueuePair.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019BE0 (NVMeReservedCompletionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFreeReservedQueueIndex(__int64 a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx

  v1 = *(_WORD *)(a1 + 814);
  v2 = 0;
  if ( !v1 )
    return 0xFFFFLL;
  while ( *(_WORD *)(32LL * v2 + *(_QWORD *)(a1 + 792) + 16) )
  {
    if ( ++v2 >= v1 )
      return 0xFFFFLL;
  }
  return v2;
}
