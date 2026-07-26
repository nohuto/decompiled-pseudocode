/*
 * XREFs of ?ndisReadRegistry@@YAXXZ @ 0x1C0144710
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x1C003DC14 (Feature_NdisDatapathVerifier__private_ReportDeviceUsage.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C01075F4 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 */

void ndisReadRegistry(void)
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // edx
  _DWORD VersionInformation[72]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v5[2]; // [rsp+158h] [rbp+50h] BYREF
  int v6; // [rsp+168h] [rbp+60h]
  const wchar_t *v7; // [rsp+170h] [rbp+68h]
  unsigned int *v8; // [rsp+178h] [rbp+70h]
  int v9; // [rsp+180h] [rbp+78h]
  const wchar_t *v10; // [rsp+188h] [rbp+80h]
  enum _NDIS_PORT_CONTROL_STATE *v11; // [rsp+190h] [rbp+88h]
  int v12; // [rsp+198h] [rbp+90h]
  const wchar_t *v13; // [rsp+1A0h] [rbp+98h]
  enum _NDIS_PORT_CONTROL_STATE *v14; // [rsp+1A8h] [rbp+A0h]
  int v15; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v16; // [rsp+1B8h] [rbp+B0h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v17; // [rsp+1C0h] [rbp+B8h]
  int v18; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v19; // [rsp+1D0h] [rbp+C8h]
  enum _NDIS_PORT_AUTHORIZATION_STATE *v20; // [rsp+1D8h] [rbp+D0h]
  int v21; // [rsp+1E0h] [rbp+D8h]
  const wchar_t *v22; // [rsp+1E8h] [rbp+E0h]
  void *v23; // [rsp+1F0h] [rbp+E8h]
  int v24; // [rsp+1F8h] [rbp+F0h]
  const wchar_t *v25; // [rsp+200h] [rbp+F8h]
  int *v26; // [rsp+208h] [rbp+100h]
  int v27; // [rsp+210h] [rbp+108h]
  const wchar_t *v28; // [rsp+218h] [rbp+110h]
  int *v29; // [rsp+220h] [rbp+118h]
  int v30; // [rsp+228h] [rbp+120h]
  const wchar_t *v31; // [rsp+230h] [rbp+128h]
  unsigned int *v32; // [rsp+238h] [rbp+130h]
  int v33; // [rsp+240h] [rbp+138h]
  const wchar_t *v34; // [rsp+248h] [rbp+140h]
  unsigned int *v35; // [rsp+250h] [rbp+148h]
  int v36; // [rsp+258h] [rbp+150h]
  const wchar_t *v37; // [rsp+260h] [rbp+158h]
  int *v38; // [rsp+268h] [rbp+160h]
  int v39; // [rsp+270h] [rbp+168h]
  const wchar_t *v40; // [rsp+278h] [rbp+170h]
  unsigned int *v41; // [rsp+280h] [rbp+178h]
  int v42; // [rsp+288h] [rbp+180h]
  const wchar_t *v43; // [rsp+290h] [rbp+188h]
  unsigned int *v44; // [rsp+298h] [rbp+190h]
  int v45; // [rsp+2A0h] [rbp+198h]
  const wchar_t *v46; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v47; // [rsp+2B0h] [rbp+1A8h]
  int v48; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v49; // [rsp+2C0h] [rbp+1B8h]
  char *v50; // [rsp+2C8h] [rbp+1C0h]
  int v51; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v52; // [rsp+2D8h] [rbp+1D0h]
  unsigned int *v53; // [rsp+2E0h] [rbp+1D8h]
  int v54; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v55; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v56; // [rsp+2F8h] [rbp+1F0h]
  int v57; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v58; // [rsp+308h] [rbp+200h]
  unsigned int *v59; // [rsp+310h] [rbp+208h]
  int v60; // [rsp+318h] [rbp+210h]
  const wchar_t *v61; // [rsp+320h] [rbp+218h]
  void *v62; // [rsp+328h] [rbp+220h]
  int v63; // [rsp+330h] [rbp+228h]
  const wchar_t *v64; // [rsp+338h] [rbp+230h]
  unsigned int *v65; // [rsp+340h] [rbp+238h]
  int v66; // [rsp+348h] [rbp+240h]
  const wchar_t *v67; // [rsp+350h] [rbp+248h]
  void *v68; // [rsp+358h] [rbp+250h]
  int v69; // [rsp+360h] [rbp+258h]
  const wchar_t *v70; // [rsp+368h] [rbp+260h]
  void *v71; // [rsp+370h] [rbp+268h]
  int v72; // [rsp+378h] [rbp+270h]
  const wchar_t *v73; // [rsp+380h] [rbp+278h]
  unsigned int *v74; // [rsp+388h] [rbp+280h]
  int v75; // [rsp+390h] [rbp+288h]
  const wchar_t *v76; // [rsp+398h] [rbp+290h]
  unsigned int *v77; // [rsp+3A0h] [rbp+298h]
  int v78; // [rsp+3A8h] [rbp+2A0h]
  const wchar_t *v79; // [rsp+3B0h] [rbp+2A8h]
  unsigned int *v80; // [rsp+3B8h] [rbp+2B0h]
  int v81; // [rsp+3C0h] [rbp+2B8h]
  const wchar_t *v82; // [rsp+3C8h] [rbp+2C0h]
  unsigned int *v83; // [rsp+3D0h] [rbp+2C8h]
  int v84; // [rsp+3D8h] [rbp+2D0h]
  const wchar_t *v85; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v86; // [rsp+3E8h] [rbp+2E0h]
  int v87; // [rsp+3F0h] [rbp+2E8h]
  const wchar_t *v88; // [rsp+3F8h] [rbp+2F0h]
  unsigned int *v89; // [rsp+400h] [rbp+2F8h]
  int v90; // [rsp+408h] [rbp+300h]
  const wchar_t *v91; // [rsp+410h] [rbp+308h]
  unsigned int *v92; // [rsp+418h] [rbp+310h]
  int v93; // [rsp+420h] [rbp+318h]
  const wchar_t *v94; // [rsp+428h] [rbp+320h]
  unsigned __int8 *v95; // [rsp+430h] [rbp+328h]
  int v96; // [rsp+438h] [rbp+330h]
  const wchar_t *v97; // [rsp+440h] [rbp+338h]
  unsigned int *v98; // [rsp+448h] [rbp+340h]
  int v99; // [rsp+450h] [rbp+348h]
  const wchar_t *v100; // [rsp+458h] [rbp+350h]
  unsigned int *v101; // [rsp+460h] [rbp+358h]
  int v102; // [rsp+468h] [rbp+360h]
  const wchar_t *v103; // [rsp+470h] [rbp+368h]
  unsigned int *v104; // [rsp+478h] [rbp+370h]
  int v105; // [rsp+480h] [rbp+378h]
  const wchar_t *v106; // [rsp+488h] [rbp+380h]
  ULONG *v107; // [rsp+490h] [rbp+388h]
  int v108; // [rsp+498h] [rbp+390h]
  const wchar_t *v109; // [rsp+4A0h] [rbp+398h]
  unsigned int *v110; // [rsp+4A8h] [rbp+3A0h]
  int v111; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v112; // [rsp+4B8h] [rbp+3B0h]
  unsigned int *v113; // [rsp+4C0h] [rbp+3B8h]
  int v114; // [rsp+4C8h] [rbp+3C0h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+4D8h] [rbp+3D0h] BYREF
  __int64 (__fastcall *v116)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+510h] [rbp+408h]
  int v117; // [rsp+518h] [rbp+410h]
  __int64 v118; // [rsp+520h] [rbp+418h]
  __int64 v119; // [rsp+528h] [rbp+420h]
  int v120; // [rsp+530h] [rbp+428h]
  void *v121; // [rsp+538h] [rbp+430h]
  int v122; // [rsp+540h] [rbp+438h]
  __int128 v123; // [rsp+548h] [rbp+440h]
  __int128 v124; // [rsp+558h] [rbp+450h]
  __int128 v125; // [rsp+568h] [rbp+460h]
  __int64 v126; // [rsp+578h] [rbp+470h]

  memset(&VersionInformation[1], 0, 0x118uLL);
  v117 = 20;
  QueryTable.QueryRoutine = 0LL;
  v118 = 0LL;
  QueryTable.Name = L"MediaTypes";
  v119 = 0LL;
  v116 = ndisAddMediaTypeToArray;
  QueryTable.Flags = 1;
  v121 = &unk_1C00E6008;
  v120 = 4;
  v126 = 0LL;
  v122 = 0;
  memset(&QueryTable.EntryContext, 0, 32);
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  v6 = 0;
  v9 = 2;
  v5[0] = L"Flags";
  v5[1] = &ndisFlags;
  v7 = L"PacketStackSize";
  v8 = &ndisPacketStackSize;
  v10 = L"PortAuthSendControlState";
  v11 = &ndisGlobalPortSendControlState;
  v13 = L"PortAuthReceiveControlState";
  v14 = &ndisGlobalPortReceiveControlState;
  v16 = L"PortAuthSendAuthorizationState";
  v17 = &ndisGlobalPortSendAuthorizationState;
  v19 = L"PortAuthReceiveAuthorizationState";
  v20 = &ndisGlobalPortReceiveAuthorizationState;
  v22 = L"MaxNumFilters";
  v23 = &ndisMaxNumberFilterPerAdapter;
  v25 = L"ReceiveWorkerThreadPriority";
  v26 = &dword_1C00E40C8;
  v28 = L"ReceiveWorkerDisableAutoStart";
  v29 = &dword_1C00E40CC;
  v31 = L"DefaultPnPCapabilities";
  v12 = 2;
  v15 = 2;
  v18 = 2;
  v21 = 2;
  v24 = 8;
  v27 = 8;
  v30 = 0;
  v33 = 0;
  v32 = &ndisDefaultPnPCapabilities;
  v36 = 0xFFFFFF;
  v34 = L"NoPauseOnSuspend";
  v39 = 0;
  v35 = &ndisNoPauseOnSuspend;
  v37 = L"MaxCachedNblContextSize";
  v38 = &ndisMaxCachedNblContextSize;
  v40 = L"NicQuietInitTimeoutMs";
  v41 = &ndisNicQuietInitTimeout;
  v43 = L"NicQuietWakeTimeoutMs";
  v44 = &ndisNicQuietWakeTimeout;
  v46 = L"NicQuietDerefDefaultTimeoutMs";
  v47 = &ndisNicQuietDerefDefaultTimeout;
  v49 = L"NicQuietDerefExtendedTimeoutMs";
  v50 = ndisNicQuietDerefExtendedTimeout;
  v52 = L"StartDeviceSync";
  v53 = &ndisStartDeviceSync;
  v55 = L"AllowWakeFromS5";
  v56 = &ndisAllowWakeFromS5;
  v58 = L"DebugLoggingMode";
  v59 = &ndisDebugLoggingMode;
  v61 = L"DatapathVerifier";
  v62 = &ndisDatapathVerifierMode;
  v64 = L"DisableIterativeDataPath";
  v65 = &ndisIterativeDataPathDisabled;
  v67 = L"StackExpansionFaultInjectionRatio";
  v68 = &ndisStackExpansionFaultInjectionRatio;
  v70 = L"StackExpansionFaultInjectionLevel";
  v71 = &ndisStackExpansionFaultInjectionLevel;
  v73 = L"AllowFlowControlUnderDebugger";
  v74 = &ndisAllowFlowControl;
  v76 = L"SriovSupportTestOverride";
  v77 = &ndisSriovSupportTestOverride;
  v42 = 30000;
  v45 = 1000;
  v48 = 100;
  v51 = 1000;
  v54 = 0;
  v57 = 0;
  v60 = 1;
  v63 = 3;
  v66 = 0;
  v69 = 100;
  v72 = 0;
  v75 = 0;
  v78 = 0;
  v79 = L"EnableNicAutoPowerSaverInSleepStudy";
  v81 = 0;
  v80 = &ndisEnableNicAutoPowerSaverInSleepStudy;
  v84 = 0;
  v82 = L"DisableNaps";
  v83 = &ndisDefaultNapsState;
  v85 = L"AOACTestOverride";
  v86 = &ndisAoAcTestOverride;
  v88 = L"EnableScreenOnNaps";
  v89 = &ndisIsScreenOnNapsEnabled;
  v91 = L"DisableWDIWatchdogForceBugcheck";
  v92 = &ndisWatchdogForceBugCheckForWDI;
  v94 = L"DisableNDISWatchDog";
  v95 = &ndisWatchdogDisable;
  v97 = L"ImplicitPowerRefManagement";
  v98 = &ndisPowerRefManagementState;
  v100 = L"DirectedMacForNapsEnabled";
  v101 = &ndisDirectedMacForNapsState;
  v103 = L"DisableReenumerationTimeoutBugcheck";
  v104 = &ndisBugCheckOnReenumerationTimeout;
  v106 = L"RssBaseCpu";
  v107 = &ndisRssBaseCpu;
  v109 = L"MaxNumRssCpus";
  v110 = &ndisMaxNumRssCpus;
  v112 = L"PadShortPackets";
  v113 = &ndisPadShortPackets;
  v87 = 0;
  v90 = 0;
  v93 = 1;
  v96 = 0;
  v99 = 0;
  v102 = 1;
  v105 = 1;
  v108 = 0;
  v111 = 1280;
  v114 = 0;
  ndisReadRegistryKnobs((struct _DRIVER_OBJECT *)0x3E8, (const struct NDIS_REGISTRY_KNOB *)v5, 0x25uLL);
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
  v1 = 0;
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
  {
    LOBYTE(v1) = BYTE2(VersionInformation[70]) == 1;
    ndisNoPauseOnSuspend = v1;
  }
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v2 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v2 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v2 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v2 > 0x500 )
  {
    v2 = 1280;
    ndisMaxNumRssCpus = 1280;
  }
  v3 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v3 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v3 + v2 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v3;
  if ( (unsigned int)(dword_1C00E40C8 - 1) > 0x1E )
    dword_1C00E40C8 = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
      Feature_NdisDatapathVerifier__private_ReportDeviceUsage();
    ndisDatapathVerifierMode = 0;
  }
}
