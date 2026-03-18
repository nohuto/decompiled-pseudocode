/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C015CDF0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0164900 (DxgkReserveGpuVirtualAddress.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C0164E64 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0166ED0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C01673D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0167C20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01779E0 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C01A5B40 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2560 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01D9F50 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01E0C3C (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01E2F30 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01E5FC0 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E7284 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C01E7910 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetScanLine @ 0x1C01EB450 (DxgkGetScanLine.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CF06C (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02D24F0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D3654 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D78DC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DD060 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DFE10 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02F8F20 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C03389E0 (DxgkSetStablePowerState.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C033F130 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        unsigned __int8 a7)
{
  __int64 v7; // r14
  DXGADAPTER *v10; // rcx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // edi
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v19; // r13
  DXGADAPTER *v20; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]
  _BYTE v22[8]; // [rsp+60h] [rbp-38h] BYREF
  char v23; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+A0h] [rbp+8h]

  v7 = a2;
  v10 = 0LL;
  v20 = 0LL;
  v12 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 7965LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 7965LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v20;
  }
  v13 = *((_QWORD *)a1 + 349);
  if ( v13 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v13 + 96) )
    {
      v15 = -1073741811;
      WdLogSingleEntry2(2LL, v7, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_22;
    }
    v12 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v10 = v20;
    v14 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      WdLogSingleEntry2(4LL, a1, -1073741637LL);
      v15 = -1073741637;
      goto LABEL_22;
    }
    v14 = v24;
  }
  if ( !a3 )
  {
LABEL_10:
    if ( a5 )
    {
      *a5 = v12;
      v12 = 0LL;
      *a6 = v14;
    }
    v15 = 0;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 350) )
  {
    v20 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v21 = -1LL;
LABEL_9:
    v10 = 0LL;
    *a3 = v20;
    *a4 = v21;
    v20 = 0LL;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)a1 + 109) & 0x100) != 0 )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, a7, (struct DXGADAPTER_REFERENCE *)&v20);
    v19 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter >= 0 )
      goto LABEL_9;
    WdLogSingleEntry2(2LL, a1, IndirectDisplayPairedAdapter);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
      (__int64)a1,
      v19,
      0LL,
      0LL,
      0LL);
    v15 = v19;
LABEL_22:
    v10 = v20;
    goto LABEL_13;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  Global = DXGGLOBAL_GetGlobal();
  DXGADAPTER_REFERENCE::Assign(&v20, *((struct DXGADAPTER **)Global + 125));
  if ( v20 )
  {
    if ( v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    goto LABEL_9;
  }
  WdLogSingleEntry2(2LL, a1, -1073741637LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
    (__int64)a1,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v10 = v20;
  v15 = -1073741637;
LABEL_13:
  if ( v10 )
    DXGADAPTER::ReleaseReference(v10);
  v20 = 0LL;
  if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v12 + 2), v12);
  return v15;
}
