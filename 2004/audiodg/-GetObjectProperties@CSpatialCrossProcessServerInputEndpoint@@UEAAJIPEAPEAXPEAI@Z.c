/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140064C20
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x140061084 (-GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectProperties(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int ObjectProperties; // ebx

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectProperties = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetObjectProperties",
      93,
      ObjectProperties,
      (__int64)a4);
    return ObjectProperties;
  }
  if ( !*((_BYTE *)this + 1480) )
  {
    ObjectProperties = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 369) )
  {
    ObjectProperties = -2147024809;
    goto LABEL_8;
  }
  ObjectProperties = CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
                       (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                       *((_DWORD *)this + 368),
                       a2,
                       a3,
                       a4);
  if ( (ObjectProperties & 0x80000000) != 0 )
    goto LABEL_8;
  return ObjectProperties;
}
