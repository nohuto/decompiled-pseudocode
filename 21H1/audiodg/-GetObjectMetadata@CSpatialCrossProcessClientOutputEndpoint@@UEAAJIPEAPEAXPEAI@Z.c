/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140063950
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x140061000 (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x1400628AC (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140064220 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectMetadata; // ebx
  unsigned int v9[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v10; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectMetadata = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata",
      202,
      (unsigned int)ObjectMetadata,
      (__int64)a4);
    return (unsigned int)ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1456) )
  {
    ObjectMetadata = -2004287481;
    goto LABEL_10;
  }
  ObjectMetadata = CSparseIndexMapRT::TranslateIndex(
                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1320),
                     a2,
                     v9,
                     &v10);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  if ( v10 )
    ObjectMetadata = CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
                       (SpatialBlock **)this - 2,
                       *((_DWORD *)this + 360),
                       v9[0]);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                     *((_DWORD *)this + 360),
                     v9[0],
                     a3,
                     a4);
  if ( ObjectMetadata < 0 )
    goto LABEL_10;
  return (unsigned int)ObjectMetadata;
}
