/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D47F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DC1F4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C00DD090 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00F4820 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F5280 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C011E930 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C011F150 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C012A7DC (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012BEB4 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C013F158 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01490C0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014A6A0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C0150090 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0151480 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C0153380 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0156F20 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0159430 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C0159930 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C015B3D0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C015F080 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01654A0 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0166968 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C0168350 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetScanLine @ 0x1C016ABA0 (DxgkGetScanLine.c)
 *     DxgkGetDisplayModeList @ 0x1C016B3F0 (DxgkGetDisplayModeList.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C016F6C0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C016FDF0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0221D74 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0222510 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02231B0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C02240E0 (DxgkQueryClockCalibration.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0224738 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C022803C (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C022CC20 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C025D710 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C02861D0 (DxgkSetStablePowerState.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028BDF0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C028EDAC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0220830 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        unsigned __int8 a7)
{
  DXGADAPTER *v8; // rcx
  struct DXGADAPTER *v9; // rsi
  __int64 v11; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  DXGADAPTER *v32; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]
  _BYTE v34[8]; // [rsp+30h] [rbp-38h] BYREF
  char v35; // [rsp+38h] [rbp-30h]
  unsigned __int64 v36; // [rsp+70h] [rbp+8h]

  v8 = 0LL;
  v9 = 0LL;
  v11 = (unsigned int)a2;
  v32 = 0LL;
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v18 + 24) = 7854LL;
    WdLogEvent5_WdAssertion(v18);
    v8 = v32;
  }
  v13 = *((_QWORD *)a1 + 337);
  if ( v13 )
  {
    if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 80) )
    {
      v19 = WdLogNewEntry5_WdError(v8, a2);
      v15 = -1073741811;
      *(_QWORD *)(v19 + 24) = v11;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      goto LABEL_24;
    }
    v9 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v8 = v32;
    v14 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      v17 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v17 + 24) = a1;
      *(_QWORD *)(v17 + 32) = -1073741637LL;
      WdLogEvent5_WdEvent(v17);
      v15 = -1073741637;
      goto LABEL_24;
    }
    v14 = v36;
  }
  if ( !a3 )
  {
LABEL_12:
    if ( a5 )
    {
      *a5 = v9;
      v9 = 0LL;
      *a6 = v14;
    }
    v15 = 0;
    goto LABEL_15;
  }
  if ( *((_QWORD *)a1 + 338) )
  {
    if ( v8 )
      DXGADAPTER::ReleaseReference(v8);
    v32 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v33 = -1LL;
    goto LABEL_11;
  }
  if ( (*((_DWORD *)a1 + 87) & 0x100) != 0 )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, a7, (struct DXGADAPTER_REFERENCE *)&v32);
    v23 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter >= 0 )
    {
LABEL_11:
      v8 = 0LL;
      *a3 = v32;
      *a4 = v33;
      v32 = 0LL;
      goto LABEL_12;
    }
    v24 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v24 + 24) = a1;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    v15 = v23;
LABEL_24:
    v8 = v32;
    goto LABEL_15;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v34, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  Global = DXGGLOBAL::GetGlobal(v26, v25);
  DXGADAPTER_REFERENCE::Assign(&v32, *((struct DXGADAPTER **)Global + 105));
  if ( v32 )
  {
    if ( v35 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v28);
    goto LABEL_11;
  }
  v30 = WdLogNewEntry5_WdError(v29, v28);
  *(_QWORD *)(v30 + 24) = a1;
  *(_QWORD *)(v30 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v30);
  if ( v35 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v31);
  v8 = v32;
  v15 = -1073741637;
LABEL_15:
  if ( v8 )
    DXGADAPTER::ReleaseReference(v8);
  v32 = 0LL;
  if ( v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
  return v15;
}
