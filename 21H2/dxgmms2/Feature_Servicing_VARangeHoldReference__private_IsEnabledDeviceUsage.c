/*
 * XREFs of Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage @ 0x1C0017A40
 * Callers:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C000136C (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0062E98 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0066D60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x1C0017A78 (Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_VARangeHoldReference__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VARangeHoldReference__private_featureState & 1;
  else
    return Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VARangeHoldReference__private_featureState,
             3LL);
}
