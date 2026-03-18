/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B104
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9F60 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01178E4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkCreateProtectedSession @ 0x1C02886D0 (DxgkCreateProtectedSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 136));
      KeLeaveCriticalRegion();
    }
  }
}
