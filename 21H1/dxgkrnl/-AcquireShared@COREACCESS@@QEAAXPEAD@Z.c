/*
 * XREFs of ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48
 * Callers:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00457B8 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00DC09C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00F6940 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F95F0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FC050 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0100C00 (DxgkPresent.c)
 *     DxgkLock2 @ 0x1C0101890 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0101E70 (DxgkUnlock2.c)
 *     DxgkLock @ 0x1C0102950 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0102EE0 (DxgkReclaimAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010D860 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010E330 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     DxgkReclaimAllocations2 @ 0x1C010EE80 (DxgkReclaimAllocations2.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C01109F0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01132F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0135030 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkUnlock @ 0x1C0141940 (DxgkUnlock.c)
 *     DxgkOfferAllocations @ 0x1C0142010 (DxgkOfferAllocations.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C0144130 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0145460 (DxgkSetQueuedLimit.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0145D30 (DxgkMapGpuVirtualAddress.c)
 *     ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C01463F0 (-DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0146C30 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0158BE0 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetScanLine @ 0x1C015C2F0 (DxgkGetScanLine.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022C7E8 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     DxgkDestroyOverlay @ 0x1C0276C30 (DxgkDestroyOverlay.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C027FE48 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A51FC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 */

void __fastcall COREACCESS::AcquireShared(COREACCESS *this, char *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // rdi
  char v11; // al
  char *v12; // rax

  if ( *((_BYTE *)this + 24) )
  {
    v7 = WdLogNewEntry5_WdCriticalError();
    *(_QWORD *)(v7 + 24) = 275LL;
    *(_QWORD *)(v7 + 32) = 4LL;
    *(_QWORD *)(v7 + 40) = this;
    *(_OWORD *)(v7 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v4 = *((_QWORD *)this + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v4 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventBlockThread, v6, 72LL);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 2) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)this + 2), a2);
  }
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    v8 = 17LL;
    v9 = (char *)this + 40;
    v10 = a2 - ((char *)this + 40);
    do
    {
      if ( v8 == -2147483629 )
        break;
      v11 = v9[v10];
      if ( !v11 )
        break;
      *v9++ = v11;
      --v8;
    }
    while ( v8 );
    v12 = v9 - 1;
    if ( v8 )
      v12 = v9;
    *v12 = 0;
    if ( v8 )
      *((_QWORD *)this + 4) = (char *)this + 40;
  }
  *((_BYTE *)this + 24) = 1;
}
