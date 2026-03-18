/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0183644 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0223D28 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkInvalidateCache @ 0x1C02DAD20 (DxgkInvalidateCache.c)
 *     DxgkUpdateAllocationProperty @ 0x1C032C2A0 (DxgkUpdateAllocationProperty.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0346710 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0346F60 (NtDxgkUpdateTrackedWorkload.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0357004 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035F620 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C0361210 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368980 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370080 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380480 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 */

DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  struct _KEVENT *v5; // rbx
  __int64 v6; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  struct _KEVENT *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 2424) >= 0x2000 || *(_BYTE *)(v3 + 2724) )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2373LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v9,
            v8,
            v10,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2373LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    a2 = *(struct DXGDEVICE **)this;
    v4 = *((_DWORD *)DXGGLOBAL::m_pGlobal + 347);
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 2) = v4;
  v5 = (struct _KEVENT *)*((_QWORD *)a2 + 2);
  if ( *((_DWORD *)a2 + 108) == 2 )
  {
    if ( KeReadStateEvent(v5 + 5) )
      goto LABEL_6;
    v11 = v5 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v5 + 4) )
      goto LABEL_6;
    v11 = v5 + 4;
  }
  KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
LABEL_6:
  v6 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, "g", v13, 40LL);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL));
    }
  }
  return this;
}
