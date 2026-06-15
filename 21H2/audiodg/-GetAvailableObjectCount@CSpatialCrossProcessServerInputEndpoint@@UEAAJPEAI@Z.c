/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14006D550
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006B848 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  CSpatialCrossProcessServerInputEndpoint *v3; // r9
  _DWORD *v4; // r10
  char v5; // r11

  v2 = *((_DWORD *)this + 371);
  *a2 = 0;
  v3 = this;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount",
      40,
      v2,
      (__int64)v3);
    return v2;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16))
    || *((_DWORD *)v3 + 372) == 1 )
  {
    if ( *((_BYTE *)v3 + 1480) != v5 )
      *v4 = *((_DWORD *)v3 + 369);
    if ( v2 != -2005139433 && v2 != -2005139358 && v2 >= 2 )
      goto LABEL_11;
  }
  else
  {
    return (unsigned int)-2005139433;
  }
  return v2;
}
