/*
 * XREFs of IopLiveDumpStartDumpDataBuffering @ 0x1409AA6E8
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409A9070 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdEncodeDataBlock @ 0x1403B1738 (KdEncodeDataBlock.c)
 *     IopLiveDumpTrace @ 0x140503548 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405038E0 (IopLiveDumpTraceCaptureDumpDataBufferingDuration.c)
 *     KdDecodeDataBlock @ 0x14050B3A4 (KdDecodeDataBlock.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1409A9AE8 (IopLiveDumpInitiateCorralStateChange.c)
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
