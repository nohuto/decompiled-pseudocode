/*
 * XREFs of _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _EtwpTrackRegBinaryInfo@4 @ 0x4B381980 (_EtwpTrackRegBinaryInfo@4.c)
 * Callees:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

int __fastcall EtwpGetUmProcessImageInfo(unsigned __int16 a1, int a2)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = EtwpLoggerArray;
  v3 = a1;
  v4 = a1 & 0x7FFF;
  v10 = v4;
  if ( !EtwpLoggerArray )
    return 4201;
  if ( v4 < 0x40 )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8 * v4 + 4));
    v6 = *(_DWORD *)(EtwpLoggerArray + 8 * v4);
    if ( (v6 & 1) == 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v4 + 4));
    return 4201;
  }
  v7 = EtwpDemuxUmTraceHandle(v3, &v10);
  if ( !v7 )
  {
    v4 = v10;
    v2 = EtwpLoggerArray;
    goto LABEL_3;
  }
  v6 = v10;
LABEL_5:
  if ( !v7 )
  {
    v8 = *(_DWORD *)(v6 + 212);
    if ( (v8 & 0x800) != 0 && (v8 & 0x10000) == 0 )
      v7 = EtwpProviderArrivalCallback(v6, a2);
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v6 + 20) + 4));
  }
  return v7;
}
