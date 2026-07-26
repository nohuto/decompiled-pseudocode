/*
 * XREFs of ?ndisReadRegistry@@YAXXZ @ 0x1C01446A4
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D968 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107624 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void ndisReadRegistry(void)
{
  unsigned int v0; // eax
  int v1; // r8d
  int v2; // r9d
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edx
  _DWORD VersionInformation[72]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v7[2]; // [rsp+168h] [rbp+60h] BYREF
  int v8; // [rsp+178h] [rbp+70h]
  const wchar_t *v9; // [rsp+180h] [rbp+78h]
  unsigned int *v10; // [rsp+188h] [rbp+80h]
  int v11; // [rsp+190h] [rbp+88h]
  const wchar_t *v12; // [rsp+198h] [rbp+90h]
  enum _NDIS_PORT_CONTROL_STATE *v13; // [rsp+1A0h] [rbp+98h]
  int v14; // [rsp+1A8h] [rbp+A0h]
  const wchar_t *v15; // [rsp+1B0h] [rbp+A8h]
  enum _NDIS_PORT_CONTROL_STATE *v16; // [rsp+1B8h] [rbp+B0h]
  int v17; // [rsp+1C0h] [rbp+B8h]
  const wchar_t *v18; // [rsp+1C8h] [rbp+C0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v19; // [rsp+1D0h] [rbp+C8h]
  int v20; // [rsp+1D8h] [rbp+D0h]
  const wchar_t *v21; // [rsp+1E0h] [rbp+D8h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v22; // [rsp+1E8h] [rbp+E0h]
  int v23; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v24; // [rsp+1F8h] [rbp+F0h]
  void *v25; // [rsp+200h] [rbp+F8h]
  int v26; // [rsp+208h] [rbp+100h]
  const wchar_t *v27; // [rsp+210h] [rbp+108h]
  int *v28; // [rsp+218h] [rbp+110h]
  int v29; // [rsp+220h] [rbp+118h]
  const wchar_t *v30; // [rsp+228h] [rbp+120h]
  int *v31; // [rsp+230h] [rbp+128h]
  int v32; // [rsp+238h] [rbp+130h]
  const wchar_t *v33; // [rsp+240h] [rbp+138h]
  unsigned int *v34; // [rsp+248h] [rbp+140h]
  int v35; // [rsp+250h] [rbp+148h]
  const wchar_t *v36; // [rsp+258h] [rbp+150h]
  unsigned int *v37; // [rsp+260h] [rbp+158h]
  int v38; // [rsp+268h] [rbp+160h]
  const wchar_t *v39; // [rsp+270h] [rbp+168h]
  int *v40; // [rsp+278h] [rbp+170h]
  int v41; // [rsp+280h] [rbp+178h]
  const wchar_t *v42; // [rsp+288h] [rbp+180h]
  unsigned int *v43; // [rsp+290h] [rbp+188h]
  int v44; // [rsp+298h] [rbp+190h]
  const wchar_t *v45; // [rsp+2A0h] [rbp+198h]
  unsigned int *v46; // [rsp+2A8h] [rbp+1A0h]
  int v47; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v48; // [rsp+2B8h] [rbp+1B0h]
  unsigned int *v49; // [rsp+2C0h] [rbp+1B8h]
  int v50; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v51; // [rsp+2D0h] [rbp+1C8h]
  char *v52; // [rsp+2D8h] [rbp+1D0h]
  int v53; // [rsp+2E0h] [rbp+1D8h]
  const wchar_t *v54; // [rsp+2E8h] [rbp+1E0h]
  unsigned int *v55; // [rsp+2F0h] [rbp+1E8h]
  int v56; // [rsp+2F8h] [rbp+1F0h]
  const wchar_t *v57; // [rsp+300h] [rbp+1F8h]
  unsigned int *v58; // [rsp+308h] [rbp+200h]
  int v59; // [rsp+310h] [rbp+208h]
  const wchar_t *v60; // [rsp+318h] [rbp+210h]
  unsigned int *v61; // [rsp+320h] [rbp+218h]
  int v62; // [rsp+328h] [rbp+220h]
  const wchar_t *v63; // [rsp+330h] [rbp+228h]
  void *v64; // [rsp+338h] [rbp+230h]
  int v65; // [rsp+340h] [rbp+238h]
  const wchar_t *v66; // [rsp+348h] [rbp+240h]
  unsigned int *v67; // [rsp+350h] [rbp+248h]
  int v68; // [rsp+358h] [rbp+250h]
  const wchar_t *v69; // [rsp+360h] [rbp+258h]
  void *v70; // [rsp+368h] [rbp+260h]
  int v71; // [rsp+370h] [rbp+268h]
  const wchar_t *v72; // [rsp+378h] [rbp+270h]
  void *v73; // [rsp+380h] [rbp+278h]
  int v74; // [rsp+388h] [rbp+280h]
  const wchar_t *v75; // [rsp+390h] [rbp+288h]
  unsigned int *v76; // [rsp+398h] [rbp+290h]
  int v77; // [rsp+3A0h] [rbp+298h]
  const wchar_t *v78; // [rsp+3A8h] [rbp+2A0h]
  unsigned int *v79; // [rsp+3B0h] [rbp+2A8h]
  int v80; // [rsp+3B8h] [rbp+2B0h]
  const wchar_t *v81; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v82; // [rsp+3C8h] [rbp+2C0h]
  int v83; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v84; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v85; // [rsp+3E0h] [rbp+2D8h]
  int v86; // [rsp+3E8h] [rbp+2E0h]
  const wchar_t *v87; // [rsp+3F0h] [rbp+2E8h]
  unsigned int *v88; // [rsp+3F8h] [rbp+2F0h]
  int v89; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v90; // [rsp+408h] [rbp+300h]
  unsigned int *v91; // [rsp+410h] [rbp+308h]
  int v92; // [rsp+418h] [rbp+310h]
  const wchar_t *v93; // [rsp+420h] [rbp+318h]
  unsigned int *v94; // [rsp+428h] [rbp+320h]
  int v95; // [rsp+430h] [rbp+328h]
  const wchar_t *v96; // [rsp+438h] [rbp+330h]
  unsigned __int8 *v97; // [rsp+440h] [rbp+338h]
  int v98; // [rsp+448h] [rbp+340h]
  const wchar_t *v99; // [rsp+450h] [rbp+348h]
  unsigned int *v100; // [rsp+458h] [rbp+350h]
  int v101; // [rsp+460h] [rbp+358h]
  const wchar_t *v102; // [rsp+468h] [rbp+360h]
  unsigned int *v103; // [rsp+470h] [rbp+368h]
  int v104; // [rsp+478h] [rbp+370h]
  const wchar_t *v105; // [rsp+480h] [rbp+378h]
  unsigned int *v106; // [rsp+488h] [rbp+380h]
  int v107; // [rsp+490h] [rbp+388h]
  const wchar_t *v108; // [rsp+498h] [rbp+390h]
  ULONG *v109; // [rsp+4A0h] [rbp+398h]
  int v110; // [rsp+4A8h] [rbp+3A0h]
  const wchar_t *v111; // [rsp+4B0h] [rbp+3A8h]
  unsigned int *v112; // [rsp+4B8h] [rbp+3B0h]
  int v113; // [rsp+4C0h] [rbp+3B8h]
  const wchar_t *v114; // [rsp+4C8h] [rbp+3C0h]
  unsigned int *v115; // [rsp+4D0h] [rbp+3C8h]
  int v116; // [rsp+4D8h] [rbp+3D0h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int64 (__fastcall *v118)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+520h] [rbp+418h]
  int v119; // [rsp+528h] [rbp+420h]
  __int64 v120; // [rsp+530h] [rbp+428h]
  __int64 v121; // [rsp+538h] [rbp+430h]
  int v122; // [rsp+540h] [rbp+438h]
  void *v123; // [rsp+548h] [rbp+440h]
  int v124; // [rsp+550h] [rbp+448h]
  __int128 v125; // [rsp+558h] [rbp+450h]
  __int128 v126; // [rsp+568h] [rbp+460h]
  __int128 v127; // [rsp+578h] [rbp+470h]
  __int64 v128; // [rsp+588h] [rbp+480h]

  memset(&VersionInformation[1], 0, 0x118uLL);
  v119 = 20;
  QueryTable.QueryRoutine = 0LL;
  v120 = 0LL;
  QueryTable.Name = L"MediaTypes";
  v121 = 0LL;
  v118 = ndisAddMediaTypeToArray;
  QueryTable.Flags = 1;
  v123 = &unk_1C00E5F18;
  v122 = 4;
  v128 = 0LL;
  v124 = 0;
  memset(&QueryTable.EntryContext, 0, 32);
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v8 = 0;
  v11 = 2;
  v7[0] = L"Flags";
  v7[1] = &ndisFlags;
  v9 = L"PacketStackSize";
  v10 = &ndisPacketStackSize;
  v12 = L"PortAuthSendControlState";
  v13 = &ndisGlobalPortSendControlState;
  v15 = L"PortAuthReceiveControlState";
  v16 = &ndisGlobalPortReceiveControlState;
  v18 = L"PortAuthSendAuthorizationState";
  v19 = &ndisGlobalPortSendAuthorizationState;
  v21 = L"PortAuthReceiveAuthorizationState";
  v22 = &ndisGlobalPortReceiveAuthorizationState;
  v24 = L"MaxNumFilters";
  v25 = &ndisMaxNumberFilterPerAdapter;
  v27 = L"ReceiveWorkerThreadPriority";
  v28 = &dword_1C00E3FC8;
  v30 = L"ReceiveWorkerDisableAutoStart";
  v31 = &dword_1C00E3FCC;
  v33 = L"DefaultPnPCapabilities";
  v14 = 2;
  v17 = 2;
  v20 = 2;
  v23 = 2;
  v26 = 8;
  v29 = 8;
  v32 = 0;
  v35 = 0;
  v34 = &ndisDefaultPnPCapabilities;
  v38 = 0xFFFFFF;
  v36 = L"NoPauseOnSuspend";
  v41 = 0;
  v37 = &ndisNoPauseOnSuspend;
  v39 = L"MaxCachedNblContextSize";
  v40 = &ndisMaxCachedNblContextSize;
  v42 = L"NicQuietInitTimeoutMs";
  v43 = &ndisNicQuietInitTimeout;
  v45 = L"NicQuietWakeTimeoutMs";
  v46 = &ndisNicQuietWakeTimeout;
  v48 = L"NicQuietDerefDefaultTimeoutMs";
  v49 = &ndisNicQuietDerefDefaultTimeout;
  v51 = L"NicQuietDerefExtendedTimeoutMs";
  v52 = ndisNicQuietDerefExtendedTimeout;
  v54 = L"StartDeviceSync";
  v55 = &ndisStartDeviceSync;
  v57 = L"AllowWakeFromS5";
  v58 = &ndisAllowWakeFromS5;
  v60 = L"DebugLoggingMode";
  v61 = &ndisDebugLoggingMode;
  v63 = L"DatapathVerifier";
  v64 = &ndisDatapathVerifierMode;
  v66 = L"DisableIterativeDataPath";
  v67 = &ndisIterativeDataPathDisabled;
  v69 = L"StackExpansionFaultInjectionRatio";
  v70 = &ndisStackExpansionFaultInjectionRatio;
  v72 = L"StackExpansionFaultInjectionLevel";
  v73 = &ndisStackExpansionFaultInjectionLevel;
  v75 = L"AllowFlowControlUnderDebugger";
  v76 = &ndisAllowFlowControl;
  v78 = L"SriovSupportTestOverride";
  v79 = &ndisSriovSupportTestOverride;
  v44 = 30000;
  v47 = 1000;
  v50 = 100;
  v53 = 1000;
  v56 = 0;
  v59 = 0;
  v62 = 1;
  v65 = 3;
  v68 = 0;
  v71 = 100;
  v74 = 0;
  v77 = 0;
  v80 = 0;
  v81 = L"EnableNicAutoPowerSaverInSleepStudy";
  v83 = 0;
  v82 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v86 = 0;
  v84 = L"DisableNaps";
  v85 = &ndisDefaultNapsState;
  v87 = L"AOACTestOverride";
  v88 = &ndisAoAcTestOverride;
  v90 = L"EnableScreenOnNaps";
  v91 = &ndisIsScreenOnNapsEnabled;
  v93 = L"DisableWDIWatchdogForceBugcheck";
  v94 = &ndisWatchdogForceBugCheckForWDI;
  v96 = L"DisableNDISWatchDog";
  v97 = &ndisWatchdogDisable;
  v99 = L"ImplicitPowerRefManagement";
  v100 = &ndisPowerRefManagementState;
  v102 = L"DirectedMacForNapsEnabled";
  v103 = &ndisDirectedMacForNapsState;
  v105 = L"DisableReenumerationTimeoutBugcheck";
  v106 = &ndisBugCheckOnReenumerationTimeout;
  v108 = L"RssBaseCpu";
  v109 = &ndisRssBaseCpu;
  v111 = L"MaxNumRssCpus";
  v112 = &ndisMaxNumRssCpus;
  v114 = L"PadShortPackets";
  v115 = &ndisPadShortPackets;
  v89 = 0;
  v92 = 0;
  v95 = 1;
  v98 = 0;
  v101 = 0;
  v104 = 1;
  v107 = 1;
  v110 = 0;
  v113 = 1280;
  v116 = 0;
  ndisReadRegistryKnobs((struct _DRIVER_OBJECT *)0x3E8, (const struct NDIS_REGISTRY_KNOB *)v7, 0x25uLL);
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  v0 = ndisPacketStackSize;
  if ( !ndisPacketStackSize )
  {
    v0 = 1;
    ndisPacketStackSize = 1;
  }
  if ( v0 >= 6 )
    ndisPacketStackSize = 6;
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  v3 = 0;
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
  {
    LOBYTE(v3) = BYTE2(VersionInformation[70]) == 1;
    ndisNoPauseOnSuspend = v3;
  }
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v4 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v4 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v4 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v4 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v4 > 0x500 )
  {
    v4 = 1280;
    ndisMaxNumRssCpus = 1280;
  }
  v5 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v5 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v5 + v4 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v5;
  if ( (unsigned int)(dword_1C00E3FC8 - 1) > 0x1E )
    dword_1C00E3FC8 = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
      wil_details_FeatureReporting_ReportUsageToService(
        &Feature_NdisDatapathVerifier__private_reporting,
        0xFB7BF4u,
        v1,
        v2,
        &Feature_NdisDatapathVerifier_logged_traits);
    ndisDatapathVerifierMode = 0;
  }
}
