/*
 * XREFs of Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00276A0
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C00F80D0 (DxgkGetDeviceStateInternal.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C014379C (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 * Callees:
 *     Feature_3895685435__private_IsEnabledFallback @ 0x1C00276D8 (Feature_3895685435__private_IsEnabledFallback.c)
 */

__int64 Feature_3895685435__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3895685435__private_featureState & 0x10) != 0 )
    return Feature_3895685435__private_featureState & 1;
  else
    return Feature_3895685435__private_IsEnabledFallback((unsigned int)Feature_3895685435__private_featureState, 3LL);
}
