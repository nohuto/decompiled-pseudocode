/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14
 * Callers:
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D6EC4 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAB80 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C00DE820 (DxgkGetContextSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00E06E0 (DxgkSetContextSchedulingPriority.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00E1E00 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkRender @ 0x1C00E9000 (DxgkRender.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0810 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0190DC0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C022AE50 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C022D330 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023AF74 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BC60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C000 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02591C0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026DF58 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0270F98 (DxgkCreateHwQueueInternal.c)
 *     OutputDuplPresent @ 0x1C029DAF8 (OutputDuplPresent.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A3B70 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02A7050 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C02A7850 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8050 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  struct DXGCONTEXT *v15; // rax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 64) )
    goto LABEL_8;
  v10 = *((_QWORD *)a3 + 30);
  v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) || (v11 & 0x2000) != 0 || (v11 & 0x1F) == 0 )
    goto LABEL_8;
  v12 = v11 & 0x1F;
  if ( (_BYTE)v12 != 7 )
  {
    v14 = WdLogNewEntry5_WdError(v12, 2LL * (unsigned int)v9);
    *(_QWORD *)(v14 + 24) = 267LL;
    WdLogEvent5_WdError(v14);
LABEL_8:
    v13 = 0LL;
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
LABEL_9:
  v15 = (struct DXGCONTEXT *)v13;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v13;
  if ( v13 && !a5 )
  {
    _m_prefetchw((const void *)(v13 + 32));
    v16 = *(_QWORD *)(v13 + 32);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 32), v16 + 1, v16);
      if ( v17 == v16 )
      {
        v15 = *(struct DXGCONTEXT **)this;
        goto LABEL_16;
      }
    }
    *(_QWORD *)this = 0LL;
    v15 = 0LL;
  }
LABEL_16:
  *a4 = v15;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
