/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018F97C
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0190A6C (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1BF4 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0124590 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018D400 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C018D82C (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C018DAFC (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C018E098 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C018E9A8 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C018FBDC (-_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C018FD88 (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C018FDE8 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C018FEBC (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C018FF18 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C018FF84 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C018FFF0 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0190060 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01900E4 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01902D4 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01904E0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C01906C0 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C019075C (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0191B9C (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020D41C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F5438 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F99D8 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F9CDC (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FADFC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02FB208 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  char v8; // si
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  struct DXGMONITOR *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  int VideoOutputTechnology; // esi
  __int64 v22; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v23; // ebx
  int updated; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGMONITOR *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // cf
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int128 v41; // [rsp+30h] [rbp-20h] BYREF
  __int64 v42; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  bool v44; // [rsp+98h] [rbp+48h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY UsageClass; // [rsp+A8h] [rbp+58h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v15 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v35);
  }
  v16 = a7;
  if ( v15 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
    goto LABEL_34;
  }
  if ( !a3 || a7 )
  {
LABEL_34:
    v36 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v36);
  }
LABEL_6:
  *(_DWORD *)(a1 + 44) = v10;
  *(_QWORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 432) = v15;
  *(_DWORD *)(a1 + 436) = v15;
  if ( v8 )
  {
    v37 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFFB | (v37 ? 0 : 4) | 2;
  }
  v17 = *(_QWORD *)(a1 + 32);
  UsageClass = D3DKMDT_VOT_UNINITIALIZED;
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
  VideoOutputTechnology = DmmGetVideoOutputTechnology((_QWORD *)v18, v10, &UsageClass, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v38);
  }
  v23 = UsageClass;
  if ( UsageClass == D3DKMDT_VOT_UNINITIALIZED )
  {
    v39 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v39);
  }
  *(_DWORD *)(a1 + 48) = v23;
  if ( v15 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology >= 0 )
    {
      if ( *(_DWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 160) )
        updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
      else
        updated = DXGMONITOR::_ProcessDisplayIDBlob((DXGMONITOR *)a1, a8);
      VideoOutputTechnology = updated;
    }
    if ( (*(_DWORD *)(v18 + 348) & 0x100) != 0 )
    {
      v40 = *(_QWORD *)(v18 + 2696);
      UsageClass = D3DKMDT_VOT_HD15;
      a6 = 0;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, int *))(*(_QWORD *)(v40 + 16)
                                                                                                 + 1984LL))(
             *(_QWORD *)(*(_QWORD *)(v40 + 16) + 1888LL),
             v10,
             &UsageClass,
             &a6) >= 0 )
      {
        *(_DWORD *)(a1 + 756) = UsageClass;
        *(_DWORD *)(a1 + 760) = a6;
      }
    }
  }
  else if ( v16 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
    VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v16);
    ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v15 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitorFromEDID((DXGMONITOR *)a1);
    }
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL) + 2596LL) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v19);
    if ( !*(_DWORD *)(a1 + 208) )
      VideoOutputTechnology = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1, v19, v22);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v15 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        if ( (*(_DWORD *)(v18 + 348) & 0x40000) != 0 )
        {
          v42 = 0LL;
          v41 = 0LL;
          DXGADAPTER::GetVirtualMonitorInfo((DXGADAPTER *)v18, v10, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v41);
          *(_DWORD *)(a1 + 584) = v41;
        }
        else
        {
          DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 584));
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v26, v25) + 304321) )
        {
          LOBYTE(a6) = 1;
          v44 = 0;
          LOBYTE(UsageClass) = 1;
          if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(
                      (DXGMONITOR *)a1,
                      (enum _DXGK_DISPLAY_USAGE *)&a6,
                      &v44,
                      (bool *)&UsageClass) >= 0 )
          {
            LOBYTE(v27) = UsageClass;
            LOBYTE(v28) = a6;
            UsageClass = (unsigned int)DXGMONITOR::GetUsageClass(v28, v27);
          }
          else
          {
            Handle = 0LL;
            UsageClass = D3DKMDT_VOT_HD15;
            if ( DXGMONITOR::_OpenMonitorDataStore((DXGMONITOR *)a1, 1u, &Handle) >= 0 )
            {
              if ( g_OSTestSigningEnabled )
                DXGMONITOR::_ReadUsageOverridesFromRegistry(
                  v29,
                  Handle,
                  (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
              ZwClose(Handle);
            }
          }
          if ( (int)DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(
                      (DXGMONITOR *)a1,
                      (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass) < 0 )
          {
            v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
            WdLogEvent5_WdWarning(v33);
          }
          *(_DWORD *)(a1 + 592) = UsageClass;
          *(_BYTE *)(a1 + 596) = v44;
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1);
        VideoOutputTechnology = DXGMONITOR::_UpdateLinkInfo((DXGMONITOR *)a1, *(_DWORD *)(a1 + 592) != 0);
        DXGMONITOR::_InitColorSpaceTransformCaps((DXGMONITOR *)a1);
        DXGMONITOR::_InitMipiDsiCaps((DXGMONITOR *)a1);
      }
      if ( VideoOutputTechnology >= 0 )
        *(_DWORD *)(a1 + 40) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
