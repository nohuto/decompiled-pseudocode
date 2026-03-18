/*
 * XREFs of ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4
 * Callers:
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0035610 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0036800 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00380DC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004E4E0 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 *     NtDxgkDisplayPortOperation @ 0x1C004F020 (NtDxgkDisplayPortOperation.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010C750 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C012B98C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0137854 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F5DC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C0140308 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C0151240 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0154360 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0160F20 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0162E58 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0164124 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C0166650 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0170870 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C0170FA0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetAdapter @ 0x1C0174090 (DxgkGetAdapter.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0174288 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0174510 (-FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C0176A20 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020C8C0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02105F8 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C0217690 (DxgkGetDeviceObjectFromAdapter.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C0220BE4 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02219E0 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0222F24 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226618 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0226AA8 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     NtDxgkGetProcessList @ 0x1C02270A0 (NtDxgkGetProcessList.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C025ACFC (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F2C4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02696B0 (-FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026DF58 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C029B7E0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C029D918 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C029DA08 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C029DAF8 (OutputDuplPresent.c)
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C02A2AC0 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B0F30 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02B11D4 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C38FC (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 *     MonitorSetAppOverride @ 0x1C02F44A8 (MonitorSetAppOverride.c)
 *     ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C02FCB04 (-CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU.c)
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C02FCD84 (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTER_REFERENCE::Assign(DXGADAPTER **this, struct DXGADAPTER *a2)
{
  DXGADAPTER *v4; // rcx

  v4 = *this;
  if ( v4 )
    DXGADAPTER::ReleaseReference(v4);
  *this = a2;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    this[1] = (DXGADAPTER *)-1LL;
  }
}
