/*
 * XREFs of Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0017B4C
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000C9A8 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchCreateHwQueue @ 0x1C0039B80 (VidSchCreateHwQueue.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D34C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     VidSchCreateSyncObject @ 0x1C0083960 (VidSchCreateSyncObject.c)
 * Callees:
 *     Feature_WSL_Device_GPU__private_IsEnabledFallback @ 0x1C0017B84 (Feature_WSL_Device_GPU__private_IsEnabledFallback.c)
 */

__int64 Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WSL_Device_GPU__private_featureState & 0x10) != 0 )
    return Feature_WSL_Device_GPU__private_featureState & 1;
  else
    return Feature_WSL_Device_GPU__private_IsEnabledFallback(
             (unsigned int)Feature_WSL_Device_GPU__private_featureState,
             3LL);
}
