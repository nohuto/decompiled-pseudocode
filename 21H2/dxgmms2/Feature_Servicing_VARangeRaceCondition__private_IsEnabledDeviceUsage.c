/*
 * XREFs of Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsage @ 0x1C0017A94
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A030 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback @ 0x1C0017ACC (Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_VARangeRaceCondition__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VARangeRaceCondition__private_featureState & 1;
  else
    return Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VARangeRaceCondition__private_featureState,
             3LL);
}
