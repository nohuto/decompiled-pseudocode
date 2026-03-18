/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C011F004
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009D18 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E06B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01072F0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C011D760 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C011E930 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012BEB4 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012D5B4 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0132DA4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkUpdateGdiInfo @ 0x1C0144140 (DxgkUpdateGdiInfo.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0148624 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x1C014A330 (DxgkDisplayOnOff.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C014A6A0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014B154 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0156F20 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C0158880 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0158A60 (DxgkSessionConnected.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D6E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0167550 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C0168750 (DxgkGetDpiOverrideForSource.c)
 *     DxgkGetDisplayModeList @ 0x1C016B3F0 (DxgkGetDisplayModeList.c)
 *     DxgkSessionReconnected @ 0x1C0173210 (DxgkSessionReconnected.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0253630 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C0268C08 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027CE88 (DxgkRedrawCursorForPostCompositon.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A7DB0 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A8480 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkReleaseSessionModeChangeLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 CurrentProcessSessionId; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  DXGFASTMUTEX *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGFASTMUTEX *v21; // [rsp+20h] [rbp-18h] BYREF
  char v22; // [rsp+28h] [rbp-10h]

  v4 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( !v4 )
    goto LABEL_21;
  v22 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v3, v2);
  v21 = (DXGFASTMUTEX *)(v4 + 80);
  if ( v4 == -80 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, v5);
    *(_QWORD *)(v15 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v21 + 2) == CurrentThread )
  {
    v16 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v16 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v22 )
  {
    v17 = WdLogNewEntry5_WdCriticalError(CurrentThread, v5);
    *(_QWORD *)(v17 + 40) = &v21;
    *(_QWORD *)(v17 + 24) = 275LL;
    *(_QWORD *)(v17 + 32) = 4LL;
    *(_OWORD *)(v17 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  DXGFASTMUTEX::Acquire(v21);
  v22 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 72) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v21);
LABEL_21:
    v10 = 0LL;
    goto LABEL_16;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * CurrentProcessSessionId);
  v11 = v21;
  v22 = 0;
  if ( *((struct _KTHREAD **)v21 + 2) != KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdCriticalError(v9, v8);
    *(_QWORD *)(v18 + 24) = 275LL;
    *(_QWORD *)(v18 + 32) = 4LL;
    *(_QWORD *)(v18 + 40) = v11;
    *(_OWORD *)(v18 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v12 = *((_DWORD *)v11 + 6);
  if ( v12 <= 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v19 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v19);
    v12 = *((_DWORD *)v11 + 6);
  }
  v13 = v12 - 1;
  *((_DWORD *)v11 + 6) = v13;
  if ( !v13 )
  {
    *((_QWORD *)v11 + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_16:
  if ( v10 )
  {
    v14 = v10 + 18528;
    if ( *(struct _KTHREAD **)(v10 + 18536) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v10 + 18536) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v14, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v20 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v20 + 24) = 352LL;
    WdLogEvent5_WdAssertion(v20);
  }
}
