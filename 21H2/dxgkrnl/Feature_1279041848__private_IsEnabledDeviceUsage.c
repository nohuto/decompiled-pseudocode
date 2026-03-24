/*
 * XREFs of Feature_1279041848__private_IsEnabledDeviceUsage @ 0x1C00267AC
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EA80 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_1279041848__private_IsEnabledFallback @ 0x1C00267E4 (Feature_1279041848__private_IsEnabledFallback.c)
 */

__int64 Feature_1279041848__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1279041848__private_featureState & 0x10) != 0 )
    return Feature_1279041848__private_featureState & 1;
  else
    return Feature_1279041848__private_IsEnabledFallback((unsigned int)Feature_1279041848__private_featureState, 3LL);
}
