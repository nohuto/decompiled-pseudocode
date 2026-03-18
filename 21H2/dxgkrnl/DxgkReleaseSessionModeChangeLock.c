/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001D198 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0162A00 (DxgkDisplayOnOff.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162E98 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C07FC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2560 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkUpdateGdiInfo @ 0x1C01D4920 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C01D7ED0 (DxgkGetDpiOverrideForSource.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01E1BC4 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01E8700 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E4B6C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02FA214 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02FA820 (DxgkUpdateDpiInfoForNewOverride.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C030A9C4 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C032DE78 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void DxgkReleaseSessionModeChangeLock()
{
  __int64 v0; // rbx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v2; // rbx
  DXGFASTMUTEX *v3; // rdi
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  DXGFASTMUTEX *v7; // [rsp+50h] [rbp-18h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  v0 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v0 )
    goto LABEL_20;
  v8 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v7 = (DXGFASTMUTEX *)(v0 + 88);
  if ( v0 == -88 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v7 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v7);
  v8 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v0 + 80) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v7);
    v2 = 0LL;
  }
  else
  {
    _mm_lfence();
    v2 = *(_QWORD *)(*(_QWORD *)(v0 + 48) + 8 * CurrentProcessSessionId);
    v3 = v7;
    v8 = 0;
    if ( *((struct _KTHREAD **)v7 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v7, 0LL, 0LL);
    v4 = *((_DWORD *)v3 + 8);
    if ( v4 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v4 = *((_DWORD *)v3 + 8);
    }
    v5 = v4 - 1;
    *((_DWORD *)v3 + 8) = v5;
    if ( !v5 )
    {
      *((_QWORD *)v3 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v3 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v2 )
  {
    v6 = v2 + 18544;
    if ( *(struct _KTHREAD **)(v2 + 18552) == KeGetCurrentThread() )
    {
      *(_QWORD *)(v2 + 18552) = 0LL;
      ExReleasePushLockExclusiveEx(v6, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v6, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    WdLogSingleEntry1(1LL, 359LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 359LL, 0LL, 0LL, 0LL, 0LL);
  }
}
