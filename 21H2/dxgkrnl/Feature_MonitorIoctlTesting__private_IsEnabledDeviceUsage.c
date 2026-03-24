/*
 * XREFs of Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage @ 0x1C0028930
 * Callers:
 *     ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C018FBDC (-_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FB7E8 (-_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FBA64 (-_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02FBE74 (-_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 * Callees:
 *     Feature_MonitorIoctlTesting__private_IsEnabledFallback @ 0x1C0028968 (Feature_MonitorIoctlTesting__private_IsEnabledFallback.c)
 */

__int64 Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MonitorIoctlTesting__private_featureState & 0x10) != 0 )
    return Feature_MonitorIoctlTesting__private_featureState & 1;
  else
    return Feature_MonitorIoctlTesting__private_IsEnabledFallback(
             (unsigned int)Feature_MonitorIoctlTesting__private_featureState,
             3LL);
}
