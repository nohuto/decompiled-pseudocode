/*
 * XREFs of IopLiveDumpStartDumpDataBuffering @ 0x1409B0658
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409AEFE0 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdEncodeDataBlock @ 0x1403B40A8 (KdEncodeDataBlock.c)
 *     IopLiveDumpTrace @ 0x140506F58 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405072F0 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     KdDecodeDataBlock @ 0x14050ECD4 (KdDecodeDataBlock.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409AFA58 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpStartDumpDataBuffering(const GUID *a1)
{
  __int64 v2; // r9
  char result; // al
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  KdDecodeDataBlock();
  IopLiveDumpTrace();
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)&a1[19], 4LL, &v4, v2);
  IopLiveDumpTrace();
  result = KdEncodeDataBlock();
  if ( (a1[5].Data1 & 0x80u) != 0 )
  {
    *(_QWORD *)a1[33].Data4 = v4;
    return IopLiveDumpTraceCaptureDumpDataBufferingDuration(a1);
  }
  return result;
}
