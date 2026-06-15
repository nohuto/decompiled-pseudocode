/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140064CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x140061100 (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        float **a3,
        unsigned int *a4)
{
  unsigned int ObjectSampleBuffer; // ebx

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectSampleBuffer = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetObjectSampleBuffer",
      67,
      ObjectSampleBuffer,
      (__int64)a4);
    return ObjectSampleBuffer;
  }
  if ( !*((_BYTE *)this + 1480) )
  {
    ObjectSampleBuffer = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 369) )
  {
    ObjectSampleBuffer = -2147024809;
    goto LABEL_8;
  }
  ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
                         (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                         *((_DWORD *)this + 368),
                         a2,
                         a3,
                         a4);
  if ( (ObjectSampleBuffer & 0x80000000) != 0 )
    goto LABEL_8;
  return ObjectSampleBuffer;
}
