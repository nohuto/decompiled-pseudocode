/*
 * XREFs of ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C000E490 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E0EA4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E3378 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C033C9A0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C035EDB0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0360E10 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A410 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::AcquireReference(DXGPROCESS *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  _InterlockedIncrement64((volatile signed __int64 *)this + 4);
  if ( *((__int64 *)this + 4) <= 0 )
  {
    WdLogSingleEntry1(1LL, 980LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v2, v1, v3, 0, 2, -1, (__int64)L"m_ReferenceCount > 0", 212, 0, 0, 0, 0);
    }
  }
}
