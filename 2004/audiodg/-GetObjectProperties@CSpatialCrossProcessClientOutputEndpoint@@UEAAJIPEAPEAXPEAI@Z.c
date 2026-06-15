/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140063A20
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x140061084 (-GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x1400628AC (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140064220 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectProperties(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectProperties; // ebx
  unsigned int v9[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v10; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectProperties = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectProperties",
      163,
      (unsigned int)ObjectProperties,
      (__int64)a4);
    return (unsigned int)ObjectProperties;
  }
  if ( !*((_BYTE *)this + 1456) )
  {
    ObjectProperties = -2004287481;
    goto LABEL_10;
  }
  ObjectProperties = CSparseIndexMapRT::TranslateIndex(
                       (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1320),
                       a2,
                       v9,
                       &v10);
  if ( ObjectProperties < 0 )
    goto LABEL_10;
  if ( v10 )
    ObjectProperties = CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
                         (SpatialBlock **)this - 2,
                         *((_DWORD *)this + 360),
                         v9[0]);
  if ( ObjectProperties < 0 )
    goto LABEL_10;
  ObjectProperties = CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
                       (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                       *((_DWORD *)this + 360),
                       v9[0],
                       a3,
                       a4);
  if ( ObjectProperties < 0 )
    goto LABEL_10;
  return (unsigned int)ObjectProperties;
}
