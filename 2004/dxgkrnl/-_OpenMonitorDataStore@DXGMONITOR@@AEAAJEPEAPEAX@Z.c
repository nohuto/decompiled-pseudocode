/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0185AF0
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01858E4 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0186AD0 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0186B44 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0186BC8 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0186C38 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0186CA4 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0186DF0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F5E34 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F5F1C (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02F5FE8 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F60B4 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02F61EC (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02F62C0 (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02F6390 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02F654C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000C69C (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0185C78 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C02F5060 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(DXGMONITOR *this, __int64 a2, void **a3)
{
  bool v3; // zf
  char v5; // r15
  __int64 v7; // rdx
  char v8; // r14
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-10h] BYREF

  v3 = *((_DWORD *)this + 108) == 1;
  Destination = 0LL;
  v5 = a2;
  if ( !v3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v24);
  }
  v7 = *((unsigned __int16 *)this + 260);
  if ( !(_WORD)v7 )
  {
    v25 = WdLogNewEntry5_WdError(this, v7);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v25);
    return 3221225659LL;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  if ( (*(_DWORD *)(v9 + 348) & 0x40000) != 0 )
  {
    if ( !(unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v9 + 2696), v7) )
    {
      LOWORD(v7) = *((_WORD *)this + 260);
      v8 = 1;
      goto LABEL_5;
    }
    v26 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = -1073741637LL;
    return 3221225659LL;
  }
LABEL_5:
  v10 = v7 + 170;
  Destination.MaximumLength = v10;
  if ( v8 )
  {
    v10 += *((_WORD *)this + 276);
    Destination.MaximumLength = v10;
  }
  v11 = (wchar_t *)operator new[](v10, 0x4D677844u, PagedPool);
  Destination.Buffer = v11;
  if ( v11 )
  {
    memset(v11, 0, Destination.MaximumLength);
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 520));
    if ( v8 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 552));
    v16 = v5 != 0 ? 0xFFF2FFDA : 0;
    v19 = DxgkOpenRegistrySubkey(a3, v16 + 983103, 0LL, &Destination);
    if ( v19 == -1073741772
      && (v5 || (v19 = DxgkCreateRegistrySubkey(a3, v16 + 983103, 0LL, &Destination), v19 == -1073741772)) )
    {
      v22 = WdLogNewEntry5_WdTrace(v18, v17, v20, v21);
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = -1073741772LL;
    }
    else if ( v19 < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v32 + 32) = v19;
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdError(v32);
    }
    operator delete[](Destination.Buffer);
    return (unsigned int)v19;
  }
  else
  {
    v31 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
}
