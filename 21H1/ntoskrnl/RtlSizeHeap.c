/*
 * XREFs of RtlSizeHeap @ 0x140580B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x140585FB8 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  return RtlpSizeHeapInternal(a1, a2, a3);
}
