/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C003E118
 * Callers:
 *     Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x1C003DC14 (Feature_NdisDatapathVerifier__private_ReportDeviceUsage.c)
 *     Feature_ScreenON_NAPS__private_ReportDeviceUsage @ 0x1C003FA3C (Feature_ScreenON_NAPS__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  v3 = *(volatile signed __int32 **)a3;
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, 0x10u);
  }
  else
  {
    v4 = *v3;
    do
    {
      if ( (v4 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v4) & 1) != 0 )
        break;
      v5 = v4;
      v4 = _InterlockedCompareExchange(v3, v4 | 0x10, v4);
    }
    while ( v5 != v4 );
  }
}
