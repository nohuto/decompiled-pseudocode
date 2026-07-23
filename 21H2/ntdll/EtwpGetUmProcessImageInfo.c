/*
 * XREFs of EtwpGetUmProcessImageInfo @ 0x1800878D4
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpTrackRegBinaryInfo @ 0x180081EFC (EtwpTrackRegBinaryInfo.c)
 * Callees:
 *     EtwpProviderArrivalCallback @ 0x180087974 (EtwpProviderArrivalCallback.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110E00 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = EtwpLoggerArray;
  v4 = a1 & 0x7FFF;
  v9 = v4;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( v4 < 0x40 )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v4 + 8));
    v5 = *(_QWORD *)(EtwpLoggerArray + 16LL * v4);
    if ( (v5 & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8));
    return 4201;
  }
  v6 = EtwpDemuxUmTraceHandle(a1, &v9);
  if ( !v6 )
  {
    v4 = v9;
    v2 = EtwpLoggerArray;
    goto LABEL_3;
  }
  v5 = v10;
LABEL_5:
  if ( !v6 )
  {
    v7 = *(_DWORD *)(v5 + 324);
    if ( (v7 & 0x800) != 0 && (v7 & 0x10000) == 0 )
      v6 = EtwpProviderArrivalCallback(v5, a2);
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v5 + 20) + 8));
  }
  return v6;
}
