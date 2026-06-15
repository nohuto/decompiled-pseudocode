/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x140061100
 * Callers:
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140063AF0 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140064CA0 (-GetObjectSampleBuffer@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        float **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r8

  v5 = 0;
  if ( !a4 )
  {
    v5 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer", 825, v5, (__int64)a4);
    return v5;
  }
  v7 = *((_QWORD *)this + 162);
  if ( a3 >= *(_DWORD *)(v7 + 8) || a2 >= 2 )
  {
    v5 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (float *)(*(_QWORD *)(v7 + 24LL * a2 + 56) + a3 * *(_DWORD *)(v7 + 20));
  if ( a5 )
    *a5 = *(_DWORD *)(v7 + 20) >> 2;
  return v5;
}
