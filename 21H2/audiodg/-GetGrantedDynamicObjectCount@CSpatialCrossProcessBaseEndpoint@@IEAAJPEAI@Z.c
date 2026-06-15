/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140069990
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140069EA4 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x14006BD60 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14006B3E0 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  int v4; // ebx
  __int64 v5; // r9
  unsigned int v6; // edx
  signed __int64 v7; // rax
  unsigned int v8; // ecx

  *a2 = 0;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(this);
  if ( v4 < 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 20LL), 0, 0);
    if ( v6 > *((_DWORD *)this + 73) )
      break;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 64LL), 0, 0) & 0x40) != 0 )
    {
      *a2 = v6;
    }
    else
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 161) + 56LL), 0LL, 0LL);
      v8 = v7 + HIDWORD(v7);
      if ( v6 < (int)v7 + HIDWORD(v7) )
        v8 = v6;
      *a2 = v8;
    }
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 20LL), 0, 0) )
      goto LABEL_11;
  }
  v4 = -2005139387;
LABEL_11:
  if ( v4 < 0 )
LABEL_12:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount",
      726,
      (unsigned int)v4,
      v5);
  return (unsigned int)v4;
}
