/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185C9C
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A3CC (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F08F4 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0120E00 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0184734 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0184940 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185920 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185994 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185A18 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0185A88 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0185AF4 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185C40 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C0185EFC (-_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01860D0 (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0186130 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0187A44 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0187E70 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C0188140 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01886DC (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0188FEC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C018B200 (-_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0195034 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C0197AF4 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020C53C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F4138 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F86D8 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F89DC (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F9AFC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02F9F08 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
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
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22; // ebx
  int updated; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGMONITOR *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // cf
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int128 v44; // [rsp+30h] [rbp-20h] BYREF
  __int64 v45; // [rsp+40h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  bool v47; // [rsp+98h] [rbp+48h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY UsageClass; // [rsp+A8h] [rbp+58h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v15 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v38);
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
    v39 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v39);
  }
LABEL_6:
  *(_DWORD *)(a1 + 44) = v10;
  *(_QWORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 432) = v15;
  *(_DWORD *)(a1 + 436) = v15;
  if ( v8 )
  {
    v40 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFFB | (v40 ? 0 : 4) | 2;
  }
  v17 = *(_QWORD *)(a1 + 32);
  UsageClass = D3DKMDT_VOT_UNINITIALIZED;
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
  VideoOutputTechnology = DmmGetVideoOutputTechnology((_QWORD *)v18, v10, &UsageClass, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v41);
  }
  v22 = UsageClass;
  if ( UsageClass == D3DKMDT_VOT_UNINITIALIZED )
  {
    v42 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v42);
  }
  *(_DWORD *)(a1 + 48) = v22;
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
      v43 = *(_QWORD *)(v18 + 2696);
      UsageClass = D3DKMDT_VOT_HD15;
      a6 = 0;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, int *))(*(_QWORD *)(v43 + 16)
                                                                                                 + 1984LL))(
             *(_QWORD *)(*(_QWORD *)(v43 + 16) + 1888LL),
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
      DXGMONITOR::_QueryDriverRecommendMonitorModes((DXGMONITOR *)a1);
    if ( !*(_DWORD *)(a1 + 208) )
      VideoOutputTechnology = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v15 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1, v24);
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1, v25);
        if ( (*(_DWORD *)(v18 + 348) & 0x40000) != 0 )
        {
          v45 = 0LL;
          v44 = 0LL;
          DXGADAPTER::GetVirtualMonitorInfo((DXGADAPTER *)v18, v10, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v44);
          *(_DWORD *)(a1 + 584) = v44;
        }
        else
        {
          DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 584));
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v27, v26) + 304321) )
        {
          LOBYTE(a6) = 1;
          v47 = 0;
          LOBYTE(UsageClass) = 1;
          if ( DXGMONITOR::_GetIntendedUsageFromDescriptor(
                 (DXGMONITOR *)a1,
                 (enum _DXGK_DISPLAY_USAGE *)&a6,
                 &v47,
                 (bool *)&UsageClass) >= 0 )
          {
            LOBYTE(v29) = UsageClass;
            LOBYTE(v30) = a6;
            UsageClass = (unsigned int)DXGMONITOR::GetUsageClass(v30, v29);
          }
          else
          {
            Handle = 0LL;
            LOBYTE(v29) = 1;
            UsageClass = D3DKMDT_VOT_HD15;
            if ( (int)DXGMONITOR::_OpenMonitorDataStore((DXGMONITOR *)a1, v29, &Handle) >= 0 )
            {
              if ( g_OSTestSigningEnabled )
                DXGMONITOR::_ReadUsageOverridesFromRegistry(
                  v31,
                  Handle,
                  (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
              ZwClose(Handle);
            }
          }
          if ( DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(
                 (DXGMONITOR *)a1,
                 (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass) < 0 )
          {
            v34 = WdLogNewEntry5_WdWarning(v32, v28, v33);
            WdLogEvent5_WdWarning(v34);
          }
          *(_DWORD *)(a1 + 592) = UsageClass;
          *(_BYTE *)(a1 + 596) = v47;
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1, v28);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1, v35);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1, v36);
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
