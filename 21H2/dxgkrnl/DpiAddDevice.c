/*
 * XREFs of DpiAddDevice @ 0x1C01F84B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0024A38 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C0026E20 (DpiGetDeviceRegistryPaths.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C005C07C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C00664BC (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x1C01E2B10 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F4164 (DpiFdoDetectPostDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C01F992C (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C01FA57C (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C01FAF64 (DpiGetDevicePropertyString.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0219FAC (DpiDxgkDdiAddDevice.c)
 *     DpiGetAgpStatus @ 0x1C021A5FC (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C021A654 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoDetectVgaDeviceInCapabilities @ 0x1C021AD90 (DpiFdoDetectVgaDeviceInCapabilities.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C021B680 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02CE778 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CE860 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CECB4 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C0388B54 (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C038B234 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C0394DF4 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C0396364 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C0396B64 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C03970B8 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3)
{
  char *DeviceExtension; // rbx
  char *v6; // r14
  char v7; // r12
  char *DriverObjectExtension; // rax
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // r8
  struct _DEVICE_OBJECT *started; // rsi
  const UNICODE_STRING *p_DriverName; // rdi
  wchar_t *UnicodeSubstring; // rax
  PDRIVER_OBJECT v15; // rsi
  int DevicePropertyString; // eax
  __int64 v17; // rdx
  void *v18; // rdi
  char v19; // al
  __int64 v20; // rdx
  ULONG v21; // edi
  NTSTATUS v22; // eax
  char v23; // al
  struct _DEVICE_OBJECT *v24; // rdi
  PDEVICE_OBJECT v25; // rax
  bool v26; // zf
  int DeviceRegistryPaths; // eax
  NTSTATUS DeviceProperty; // eax
  _DWORD *v29; // rdi
  NTSTATUS v30; // eax
  GUID *v31; // rdi
  bool v32; // al
  _DWORD *v33; // rdx
  unsigned __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  char v39; // r12
  char **v40; // rcx
  _DWORD *v41; // rax
  NTSTATUS v42; // eax
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  int v45; // r13d
  int v46; // edi
  int v47; // r15d
  char v48; // r12
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v53; // rdx
  int RegistryValues; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  struct _DEVICE_OBJECT *v58; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int16 *v60; // rcx
  int v61; // edx
  int v62; // edi
  bool v63; // al
  int AgpStatus; // eax
  __int64 v65; // rdi
  int v66; // ecx
  char v67; // al
  char v68; // al
  __int64 v69; // rdx
  bool v70; // cl
  __int64 v71; // rdx
  struct _KMUTANT *v72; // rdi
  _DWORD *v73; // rcx
  _DWORD *v74; // rcx
  void (__fastcall *v75)(_QWORD); // rax
  void (__fastcall *v76)(_QWORD); // rax
  void (__fastcall *v77)(_QWORD); // rax
  void (__fastcall *v78)(_QWORD); // rax
  void *v79; // rcx
  __int64 v80; // rcx
  struct _DEVICE_OBJECT *v81; // rcx
  char v82; // r15
  __int64 v83; // r8
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  int v90; // eax
  struct _DEVICE_OBJECT *v91; // rdi
  char v92; // al
  int v93; // eax
  char *v94; // rdi
  __int16 v95; // r10
  char **v96; // r9
  unsigned int v97; // edx
  char *v98; // rax
  signed __int64 v99; // rcx
  __int16 v100; // r10
  const wchar_t **v101; // r8
  int v102; // edx
  const wchar_t *v103; // rax
  char *v104; // rcx
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  char *v108; // rsi
  _QWORD *v109; // rcx
  PVOID *v110; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v112; // rdi
  unsigned int v113; // ebx
  struct _DEVICE_OBJECT *v114; // r14
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-520h]
  char v116; // [rsp+50h] [rbp-4F8h]
  char v117; // [rsp+51h] [rbp-4F7h]
  char v118; // [rsp+52h] [rbp-4F6h]
  char v119; // [rsp+53h] [rbp-4F5h]
  char v120; // [rsp+54h] [rbp-4F4h]
  char v121; // [rsp+55h] [rbp-4F3h]
  PDEVICE_OBJECT SourceDevice; // [rsp+58h] [rbp-4F0h] BYREF
  char v123; // [rsp+60h] [rbp-4E8h]
  char v124; // [rsp+61h] [rbp-4E7h]
  char v125; // [rsp+62h] [rbp-4E6h]
  char v126; // [rsp+63h] [rbp-4E5h]
  int v127; // [rsp+64h] [rbp-4E4h]
  char v128; // [rsp+68h] [rbp-4E0h]
  char v129; // [rsp+69h] [rbp-4DFh]
  bool v130; // [rsp+6Ah] [rbp-4DEh]
  char v131; // [rsp+6Bh] [rbp-4DDh] BYREF
  char v132; // [rsp+6Ch] [rbp-4DCh]
  ULONG ResultLength; // [rsp+70h] [rbp-4D8h] BYREF
  int v134; // [rsp+74h] [rbp-4D4h]
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-4D0h]
  unsigned int v136; // [rsp+80h] [rbp-4C8h] BYREF
  int v137; // [rsp+84h] [rbp-4C4h]
  int v138; // [rsp+88h] [rbp-4C0h] BYREF
  ULONG ReturnedProductType; // [rsp+8Ch] [rbp-4BCh] BYREF
  __int64 v140; // [rsp+90h] [rbp-4B8h] BYREF
  char *v141; // [rsp+98h] [rbp-4B0h]
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-4A8h]
  void *Source1; // [rsp+A8h] [rbp-4A0h]
  PVOID P; // [rsp+B0h] [rbp-498h]
  __int64 v145; // [rsp+B8h] [rbp-490h] BYREF
  int v146; // [rsp+C0h] [rbp-488h]
  int v147; // [rsp+C4h] [rbp-484h]
  const wchar_t *v148; // [rsp+C8h] [rbp-480h] BYREF
  int v149; // [rsp+D0h] [rbp-478h]
  _QWORD v150[2]; // [rsp+D8h] [rbp-470h] BYREF
  UNICODE_STRING String1; // [rsp+E8h] [rbp-460h] BYREF
  UNICODE_STRING v152; // [rsp+F8h] [rbp-450h] BYREF
  UNICODE_STRING v153; // [rsp+108h] [rbp-440h] BYREF
  UNICODE_STRING v154; // [rsp+118h] [rbp-430h] BYREF
  _QWORD v155[2]; // [rsp+128h] [rbp-420h] BYREF
  __int64 v156; // [rsp+138h] [rbp-410h] BYREF
  _QWORD v157[14]; // [rsp+140h] [rbp-408h] BYREF
  int v158[4]; // [rsp+1B0h] [rbp-398h] BYREF
  __int64 v159; // [rsp+1C0h] [rbp-388h]
  __int64 v160; // [rsp+1C8h] [rbp-380h] BYREF
  int v161; // [rsp+1D0h] [rbp-378h]
  _DWORD v162[2]; // [rsp+1E0h] [rbp-368h] BYREF
  _BYTE v163[24]; // [rsp+1E8h] [rbp-360h] BYREF
  __int64 v164; // [rsp+200h] [rbp-348h]
  int v165; // [rsp+208h] [rbp-340h]
  int v166; // [rsp+20Ch] [rbp-33Ch]
  int v167; // [rsp+210h] [rbp-338h]
  int v168; // [rsp+214h] [rbp-334h]
  int v169; // [rsp+218h] [rbp-330h]
  int v170; // [rsp+21Ch] [rbp-32Ch]
  _DWORD VersionInformation[72]; // [rsp+220h] [rbp-328h] BYREF
  __int64 v172; // [rsp+340h] [rbp-208h]
  __int64 v173; // [rsp+348h] [rbp-200h]
  _QWORD v174[10]; // [rsp+350h] [rbp-1F8h] BYREF
  int v175; // [rsp+3A0h] [rbp-1A8h]
  int v176; // [rsp+3A4h] [rbp-1A4h]
  int v177; // [rsp+3A8h] [rbp-1A0h]
  int v178; // [rsp+3ACh] [rbp-19Ch]
  const wchar_t *v179; // [rsp+3B0h] [rbp-198h]
  __int128 v180; // [rsp+3C0h] [rbp-188h] BYREF
  __int128 v181; // [rsp+3D0h] [rbp-178h]
  int v182; // [rsp+3E0h] [rbp-168h]
  __int128 v183; // [rsp+3E8h] [rbp-160h] BYREF
  __int64 v184; // [rsp+3F8h] [rbp-150h]
  wchar_t v185; // [rsp+400h] [rbp-148h]
  _OWORD v186[2]; // [rsp+408h] [rbp-140h] BYREF
  __int64 v187; // [rsp+428h] [rbp-120h]
  wchar_t v188; // [rsp+430h] [rbp-118h]
  _OWORD v189[2]; // [rsp+438h] [rbp-110h] BYREF
  wchar_t v190; // [rsp+458h] [rbp-F0h]
  _OWORD v191[2]; // [rsp+460h] [rbp-E8h] BYREF
  __int64 v192; // [rsp+480h] [rbp-C8h]
  int v193; // [rsp+488h] [rbp-C0h]
  _OWORD v194[2]; // [rsp+490h] [rbp-B8h] BYREF
  __int64 v195; // [rsp+4B0h] [rbp-98h]
  _OWORD v196[4]; // [rsp+4C0h] [rbp-88h] BYREF
  int v197; // [rsp+500h] [rbp-48h]

  v160 = 0LL;
  v161 = 0;
  DeviceExtension = 0LL;
  v6 = 0LL;
  v185 = aDriverVgpu[12];
  v7 = 0;
  v183 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = DeviceObject;
  v154.Buffer = (wchar_t *)&v183;
  v189[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v190 = aDriverWddmwarp[16];
  String1.Buffer = (wchar_t *)v189;
  v184 = *(_QWORD *)L"VGPU";
  v150[1] = v194;
  v194[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v188 = aDriverBasicdis[20];
  v195 = *(_QWORD *)L"der";
  v155[1] = v186;
  v189[1] = *(_OWORD *)L"WddmWarp";
  v193 = *(_DWORD *)L"r";
  DriverObject = ClientIdentificationAddress;
  v186[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v140 = 0LL;
  v194[1] = *(_OWORD *)L"BasicRender";
  v121 = 0;
  SourceDevice = 0LL;
  v187 = *(_QWORD *)L"play";
  ResultLength = 0;
  v186[1] = *(_OWORD *)L"BasicDisplay";
  v119 = 1;
  LOBYTE(v134) = 0;
  v191[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v117 = 0;
  v192 = *(_QWORD *)L"ender";
  v132 = 0;
  v120 = 0;
  v118 = 0;
  v126 = 0;
  v128 = 0;
  v124 = 0;
  v129 = 0;
  v131 = 0;
  v125 = 0;
  v130 = 0;
  v123 = 0;
  v127 = 3;
  *(_QWORD *)&v154.Length = 1703960LL;
  *(_QWORD *)&String1.Length = 2228256LL;
  v150[0] = 2621478LL;
  v155[0] = 2752552LL;
  v191[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v152.Length = 2883626LL;
  v152.Buffer = (wchar_t *)v191;
  v196[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v196[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v197 = *(_DWORD *)L"r";
  v196[3] = *(_OWORD *)L"celerator";
  v153.Buffer = (wchar_t *)v196;
  v196[2] = *(_OWORD *)L"omputeAccelerator";
  *(_QWORD *)&v153.Length = 4456514LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      a3,
      ClientIdentificationAddress,
      DeviceObject,
      0);
  v156 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v141 = DriverObjectExtension;
  v9 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    goto LABEL_156;
  }
  v10 = DpiDxgkDdiAddDevice(DriverObjectExtension, DeviceObject, &v140);
  LODWORD(started) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 144), v10);
LABEL_156:
    LOBYTE(v17) = 0;
    goto LABEL_157;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v121 = 1;
  LOBYTE(v11) = 1;
  UnicodeSubstring = (wchar_t *)RtlFindUnicodeSubstring(p_DriverName, v150, v11);
  v15 = DriverObject;
  if ( UnicodeSubstring == DriverObject->DriverName.Buffer )
  {
    v19 = 1;
    v118 = 1;
    v128 = 1;
    v124 = 1;
    goto LABEL_23;
  }
  if ( !RtlCompareUnicodeString(&String1, p_DriverName, 1u) )
  {
    v124 = 1;
    goto LABEL_111;
  }
  if ( !RtlCompareUnicodeString(&v152, p_DriverName, 1u) || !RtlCompareUnicodeString(&v153, p_DriverName, 1u) )
  {
    v123 = 1;
    goto LABEL_111;
  }
  if ( !RtlCompareUnicodeString(&v154, p_DriverName, 1u) )
  {
    v129 = 1;
    goto LABEL_111;
  }
  if ( (wchar_t *)RtlFindUnicodeSubstring(p_DriverName, v155, 1LL) != v15->DriverName.Buffer )
  {
    v125 = *(_BYTE *)(v9 + 134);
    v130 = dword_1C0130A00 == 5;
    v136 = 0;
    memset(v157, 0, sizeof(v157));
    v53 = *(_QWORD *)(v9 + 48);
    v157[2] = L"Start";
    LODWORD(v157[1]) = 292;
    v157[3] = &v136;
    LODWORD(v157[4]) = 67108868;
    LODWORD(v157[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v53, v157, 0LL, 0LL);
    started = (struct _DEVICE_OBJECT *)RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_153;
    if ( v136 != 3 )
    {
      WdLogSingleEntry1(2LL, v136);
      LODWORD(started) = -1073741637;
      goto LABEL_155;
    }
LABEL_111:
    v19 = 0;
    goto LABEL_23;
  }
  Source1 = 0LL;
  v126 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           DeviceObject,
                           DevicePropertyHardwareID,
                           PagedPool,
                           (__int64)&ResultLength);
  started = (struct _DEVICE_OBJECT *)DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
LABEL_153:
    v71 = (__int64)started;
    goto LABEL_154;
  }
  v18 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v118 = 1;
    if ( byte_1C0130492 )
    {
      v119 = 0;
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(4LL, 0LL);
    }
  }
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( (int)started < 0 )
    goto LABEL_155;
  v19 = v118;
LABEL_23:
  if ( !v140 )
  {
    v137 = 4;
    v21 = 496;
    v127 = 2;
    if ( !v19 )
      goto LABEL_25;
    LODWORD(started) = -1073741637;
    v71 = -1073741637LL;
LABEL_154:
    WdLogSingleEntry1(2LL, v71);
LABEL_155:
    v7 = 0;
    goto LABEL_156;
  }
  v20 = *(_QWORD *)(v9 + 616);
  v21 = 5736;
  v137 = 2;
  v127 = 0;
  if ( !v20 )
    goto LABEL_25;
  if ( v19 )
  {
    LODWORD(started) = -1073741637;
    v83 = -1073741637LL;
LABEL_199:
    WdLogSingleEntry2(2LL, v20, v83);
    goto LABEL_155;
  }
  v84 = DpiDxgkDdiLinkDevice(v9, (__int64)TargetDevice, v140, (int *)&v160);
  LODWORD(started) = v84;
  if ( v84 < 0 )
  {
    v20 = *(_QWORD *)(v9 + 616);
    v83 = v84;
    goto LABEL_199;
  }
  if ( HIDWORD(v160) > 0x100 )
  {
    started = (struct _DEVICE_OBJECT *)-1073741756LL;
    goto LABEL_203;
  }
  if ( HIDWORD(v160) && !(_BYTE)v161 )
  {
    v21 = 2744;
    v137 = 3;
    v127 = 1;
  }
LABEL_25:
  v22 = IoCreateDevice(DriverObject, v21, 0LL, 0x23u, v125 == 0 ? 0x100 : 0, 0, &SourceDevice);
  started = (struct _DEVICE_OBJECT *)v22;
  if ( v22 < 0 )
  {
LABEL_203:
    v71 = (__int64)started;
    goto LABEL_154;
  }
  v127 |= (unsigned int)SourceDevice & 0xFFFF00;
  DeviceExtension = (char *)SourceDevice->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v137;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = SourceDevice;
  *((_QWORD *)DeviceExtension + 4) = SourceDevice;
  *((_QWORD *)DeviceExtension + 5) = v9;
  *((_QWORD *)DeviceExtension + 6) = v140;
  DeviceExtension[480] = v118;
  v23 = v123;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v23;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v24 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v25 = IoAttachDeviceToDeviceStack(SourceDevice, v24);
  *((_QWORD *)DeviceExtension + 20) = v25;
  if ( !v25 )
  {
    LODWORD(started) = -1073741810;
    WdLogSingleEntry1(2LL, -1073741810LL);
    LOBYTE(v17) = 0;
    v7 = 0;
    goto LABEL_157;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v26 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v26 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
    goto LABEL_72;
  v6 = DeviceExtension;
  DeviceExtension[2693] = v124;
  DeviceExtension[1154] = v126;
  DeviceExtension[1155] = v128;
  DeviceExtension[1159] = v125;
  DeviceExtension[2694] = v129;
  DeviceExtension[2695] = v130;
  *((_DWORD *)DeviceExtension + 680) = 0;
  *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C0130491 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v160;
  *((_DWORD *)DeviceExtension + 127) = v161;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)SourceDevice, (__int64)v24, v9);
  LODWORD(started) = DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
  {
    v85 = DeviceRegistryPaths;
LABEL_210:
    WdLogSingleEntry1(2LL, v85);
    v39 = 0;
    goto LABEL_99;
  }
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v9 + 232) )
    {
      v55 = DpiAcpiRegisterAcpiCallbacks(SourceDevice);
      v56 = (unsigned __int8)v134;
      if ( v55 >= 0 )
        v56 = 1;
      v134 = v56;
    }
    DeviceExtension[1157] = 1;
  }
  started = TargetDevice;
  DeviceProperty = IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
  if ( DeviceProperty < 0 )
  {
    WdLogSingleEntry1(3LL, DeviceProperty);
    *((_DWORD *)DeviceExtension + 286) = -1;
  }
  v29 = DeviceExtension + 1148;
  v30 = IoGetDeviceProperty(started, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  if ( v30 < 0 || *v29 == -1 )
  {
    WdLogSingleEntry1(3LL, v30);
    *v29 = -1;
  }
  v31 = (GUID *)(DeviceExtension + 544);
  LODWORD(started) = IoGetDeviceProperty(
                       started,
                       DevicePropertyBusTypeGuid,
                       0x10u,
                       DeviceExtension + 544,
                       &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    WdLogSingleEntry1(4LL, SourceDevice);
    *v31 = GUID_BUS_TYPE_INVALID;
  }
  if ( !v118 )
  {
    v57 = DpiFdoDetectPostDevice((__int64)SourceDevice, &v131);
    started = (struct _DEVICE_OBJECT *)v57;
    if ( v57 < 0 )
    {
LABEL_211:
      v86 = (__int64)started;
LABEL_212:
      WdLogSingleEntry1(2LL, v86);
LABEL_213:
      v39 = 0;
      goto LABEL_99;
    }
    if ( v131 )
    {
      WdLogSingleEntry1(4LL, SourceDevice);
      *((_WORD *)DeviceExtension + 576) = 257;
      byte_1C0130808 = 1;
      if ( byte_1C0130491 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(TargetDevice);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v31 = (GUID *)(DeviceExtension + 544);
      }
    }
  }
  v138 = 0;
  v32 = (int)DpiReadPnpRegistryValue((__int64)SourceDevice, L"SoftGPUAdapter", (char *)&v138, 4u, 2u) >= 0 && v138;
  DeviceExtension[2692] = v32;
  if ( DeviceExtension[1159] )
  {
    *((_DWORD *)DeviceExtension + 281) = 5140;
    *((_QWORD *)DeviceExtension + 142) = 0LL;
    *((_DWORD *)DeviceExtension + 280) = 0;
    *((_QWORD *)DeviceExtension + 141) = 139LL;
    goto LABEL_51;
  }
  if ( RtlCompareMemory(v31, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
  {
    WdLogSingleEntry1(4LL, SourceDevice);
    v58 = TargetDevice;
    DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
    v39 = 0;
    if ( !*((_QWORD *)DeviceExtension + 77) )
    {
      v87 = -1073741127LL;
      LODWORD(started) = -1073741127;
LABEL_215:
      v88 = 2LL;
LABEL_216:
      WdLogSingleEntry1(v88, v87);
      goto LABEL_99;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 139) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_220:
      v87 = -1073741801LL;
      LODWORD(started) = -1073741801;
      v88 = 6LL;
      goto LABEL_216;
    }
    (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
      *((_QWORD *)DeviceExtension + 71),
      0LL,
      PoolWithTag,
      0LL,
      256);
    v60 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
    *((_DWORD *)DeviceExtension + 280) = 1;
    v61 = *v60;
    *((_DWORD *)DeviceExtension + 281) = v61;
    v62 = v60[1];
    *((_DWORD *)DeviceExtension + 282) = v62;
    *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v60 + 8);
    if ( (v60[7] & 0x7F) == 0 )
    {
      *((_DWORD *)DeviceExtension + 283) = v60[22];
      *((_DWORD *)DeviceExtension + 284) = v60[23];
    }
    v63 = v61 == 22611 && v62 == 4097;
    DeviceExtension[2696] = v63;
    DpiQueryBusInterface(v58, (__int64)(DeviceExtension + 624));
    DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
    AgpStatus = DpiGetAgpStatus(SourceDevice);
    if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
      WdLogSingleEntry1(3LL, AgpStatus);
    v65 = *((_QWORD *)SourceDevice->DeviceExtension + 139);
    v66 = DpiFdoDetectVgaDeviceInCapabilities();
    if ( v66 >= 0 )
    {
      v67 = *(_BYTE *)(v65 + 11);
      if ( v67 )
      {
        if ( v67 == 3 && !*(_BYTE *)(v65 + 10) )
          goto LABEL_136;
      }
      else if ( *(_BYTE *)(v65 + 10) == 1 )
      {
        goto LABEL_136;
      }
      v66 = -1073741823;
    }
LABEL_136:
    v68 = DeviceExtension[1152];
    LODWORD(started) = v66;
    if ( v66 < 0 )
    {
      if ( v68 )
        WdLogSingleEntry1(3LL, SourceDevice);
    }
    else
    {
      if ( !v68 )
      {
        if ( byte_1C0130808 )
          goto LABEL_51;
        WdLogSingleEntry1(3LL, SourceDevice);
        DeviceExtension[1152] = 1;
        byte_1C0130809 = 1;
        v68 = DeviceExtension[1152];
      }
      if ( v68 && byte_1C0130495 )
        DeviceExtension[1156] = 1;
    }
LABEL_51:
    if ( DeviceExtension[1152] )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( RtlCompareMemory(v31, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(v31, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      WdLogSingleEntry1(4LL, SourceDevice);
      if ( DeviceExtension[2694] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_DWORD *)DeviceExtension + 285) = 1;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
      goto LABEL_51;
    }
    if ( DeviceExtension[480] )
    {
      *((_DWORD *)DeviceExtension + 280) = 3;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      if ( DeviceExtension[1154] )
      {
        *((_DWORD *)DeviceExtension + 282) = 141;
      }
      else if ( DeviceExtension[2693] )
      {
        *((_DWORD *)DeviceExtension + 282) = 140;
      }
      goto LABEL_51;
    }
    v92 = DeviceExtension[2695];
    if ( v92 || g_OSTestSigningEnabled )
    {
      v26 = g_OSTestSigningEnabled == 0;
      *((_DWORD *)DeviceExtension + 280) = 3;
      if ( !v26 && !v92 )
      {
        P = 0LL;
        v93 = DpiGetDevicePropertyString(TargetDevice, DevicePropertyCompatibleIDs, PagedPool, (__int64)&ResultLength);
        LODWORD(started) = v93;
        if ( v93 >= 0 && (v94 = (char *)P) != 0LL )
        {
          if ( DeviceExtension[2692] )
          {
            *((_DWORD *)DeviceExtension + 281) = 5140;
            v95 = *(_WORD *)v94;
            v174[0] = L"SoftGPU_Full_D3D12";
            v96 = (char **)v174;
            v172 = 135LL;
            v174[3] = L"SoftGPU_Full_D3D9L";
            v97 = 0;
            v173 = 0LL;
            v174[6] = L"SoftGPU_Rod";
            v174[9] = L"SoftGPU_Dod";
            v179 = L"SoftGPU_MCDM";
            v174[1] = 128LL;
            v174[2] = 0LL;
            v174[4] = 136LL;
            v174[5] = 0LL;
            v174[7] = 137LL;
            v174[8] = 0LL;
            v175 = 134;
            v176 = 4660;
            v177 = 22136;
            v178 = 39612;
            while ( 1 )
            {
              v98 = *v96;
              if ( v95 )
                break;
LABEL_260:
              if ( !*(_WORD *)v98 )
                goto LABEL_263;
              ++v97;
              v96 += 3;
              if ( v97 >= 5 )
                goto LABEL_276;
            }
            v99 = v94 - v98;
            while ( *(_WORD *)v98 )
            {
              if ( *(_WORD *)&v98[v99] == *(_WORD *)v98 )
              {
                v98 += 2;
                if ( *(_WORD *)&v98[v99] )
                  continue;
              }
              goto LABEL_260;
            }
LABEL_263:
            *((_DWORD *)DeviceExtension + 282) = *((_DWORD *)&v172 + 6 * (int)v97);
            *((_DWORD *)DeviceExtension + 284) = *((_DWORD *)&v172 + 6 * (int)v97 + 1);
            *((_DWORD *)DeviceExtension + 283) = v174[3 * (int)v97 - 1];
            *((_DWORD *)DeviceExtension + 285) = *((_DWORD *)&v173 + 6 * (int)v97 + 1);
          }
          else
          {
            v100 = *(_WORD *)P;
            v148 = L"MCDMTestDevice";
            v101 = &v148;
            v146 = 5140;
            v102 = 0;
            v147 = 256;
            v149 = 2697;
            while ( 1 )
            {
              v103 = *v101;
              if ( v100 )
                break;
LABEL_270:
              if ( !*v103 )
                goto LABEL_273;
              v101 += 3;
              if ( ++v102 )
                goto LABEL_274;
            }
            v104 = (char *)((_BYTE *)P - (_BYTE *)v103);
            while ( *v103 )
            {
              if ( *(_WORD *)&v104[(_QWORD)v103] == *v103 )
              {
                if ( *(_WORD *)&v104[(_QWORD)++v103] )
                  continue;
              }
              goto LABEL_270;
            }
LABEL_273:
            *((_DWORD *)DeviceExtension + 281) = *(&v146 + 6 * v102);
            *((_DWORD *)DeviceExtension + 282) = *(&v147 + 6 * v102);
            DeviceExtension[LODWORD(v150[3 * v102])] = 1;
LABEL_274:
            if ( !*((_DWORD *)DeviceExtension + 282) )
            {
              ExFreePoolWithTag(v94, 0);
              LODWORD(started) = -1073741637;
              v86 = -1073741637LL;
              goto LABEL_212;
            }
          }
LABEL_276:
          ExFreePoolWithTag(v94, 0);
        }
        else
        {
          WdLogSingleEntry1(2LL, v93);
        }
      }
      goto LABEL_51;
    }
    goto LABEL_209;
  }
  v159 = 0LL;
  WdLogSingleEntry1(4LL, SourceDevice);
  if ( !DeviceExtension[1157] )
  {
LABEL_209:
    LODWORD(started) = -1073741637;
    v85 = -1073741637LL;
    goto LABEL_210;
  }
  *((_DWORD *)DeviceExtension + 280) = 2;
  v182 = 0;
  BYTE1(v158[2]) = 0;
  HIWORD(v158[2]) = 0;
  v158[3] = 0;
  strcpy((char *)v158, "AeiC_HID");
  v180 = 0LL;
  v181 = 0LL;
  v90 = DpEvalAcpiMethod((__int64)SourceDevice, 0xFFFFFFFF, v158, 0x18u, &v180, 0x24u);
  if ( v90 >= 0 )
    *(_QWORD *)(DeviceExtension + 1124) = v181;
  else
    WdLogSingleEntry1(2LL, v90);
  v182 = 0;
  strcpy((char *)v158, "AeiC_SUB");
  BYTE1(v158[2]) = 0;
  HIWORD(v158[2]) = 0;
  v158[3] = 0;
  v180 = 0LL;
  v181 = 0LL;
  if ( (int)DpEvalAcpiMethod((__int64)SourceDevice, 0xFFFFFFFF, v158, 0x18u, &v180, 0x24u) >= 0 )
    *(_QWORD *)(DeviceExtension + 1132) = v181;
  else
    WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
  v182 = 0;
  strcpy((char *)v158, "AeiC_HRV");
  BYTE1(v158[2]) = 0;
  HIWORD(v158[2]) = 0;
  v158[3] = 0;
  v180 = 0LL;
  v181 = 0LL;
  LODWORD(started) = DpEvalAcpiMethod((__int64)SourceDevice, 0xFFFFFFFF, v158, 0x18u, &v180, 0x24u);
  if ( (int)started >= 0 )
  {
    *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v181;
  }
  else
  {
    WdLogSingleEntry1(4LL, DpEvalAcpiMethod);
    LODWORD(started) = 0;
  }
  if ( DeviceExtension[1152] )
  {
    v91 = IoGetAttachedDeviceReference(TargetDevice);
    started = (struct _DEVICE_OBJECT *)(int)DpiSetDeviceUsageType(v91);
    ObfDereferenceObject(v91);
    if ( (int)started < 0 )
    {
      WdLogSingleEntry1(2LL, started);
      LODWORD(started) = 0;
    }
    goto LABEL_51;
  }
LABEL_52:
  if ( !DeviceExtension[480] && DeviceExtension[1154] )
  {
    WdLogSingleEntry1(4LL, SourceDevice);
    LODWORD(started) = -1071774664;
    goto LABEL_213;
  }
LABEL_53:
  if ( DeviceExtension[2692] && DeviceExtension[2693] )
  {
    LODWORD(started) = -1073741811;
    v86 = -1073741811LL;
    goto LABEL_212;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
  v33 = DeviceExtension + 1312;
  *((_WORD *)DeviceExtension + 648) = 64;
  v34 = 7LL;
  if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
  {
    *v33 = 1;
    v33 = DeviceExtension + 1316;
    v34 = 6LL;
  }
  memset64(v33, 0x100000001uLL, v34 >> 1);
  if ( (v34 & 1) != 0 )
    v33[v34 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 1384), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, SourceDevice);
  KeInitializeMutex((PRKMUTEX)DeviceExtension + 45, 0);
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2600), 0);
  *((_QWORD *)DeviceExtension + 314) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 313) = DeviceExtension + 2504;
  *((_QWORD *)DeviceExtension + 324) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 323) = DeviceExtension + 2584;
  *((_QWORD *)DeviceExtension + 339) = DeviceExtension + 2704;
  *((_QWORD *)DeviceExtension + 338) = DeviceExtension + 2704;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 153) = 0LL;
  *((_DWORD *)DeviceExtension + 292) = 1;
  *((_QWORD *)DeviceExtension + 147) = 0LL;
  *((_DWORD *)DeviceExtension + 296) = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
  *((_DWORD *)DeviceExtension + 681) = 61443;
  if ( *(_DWORD *)(v9 + 28) >= 0xB003u
    && !(unsigned __int8)ExQueryFastCacheDevLicense()
    && !DeviceExtension[1154]
    && !DeviceExtension[480] )
  {
    v37 = *((_DWORD *)DeviceExtension + 281);
    if ( v37 == 4098 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Amd__private_reporting,
        0x12C31E0u,
        v35,
        v36,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1);
      v37 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v37 == 4318 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Nvidia__private_reporting,
        0x12C31ECu,
        v35,
        v36,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1);
      v37 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v37 == 32902 )
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_reporting,
        0x12C31D3u,
        v35,
        v36,
        (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
        1);
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v38 = DpiFdoInitializeFdo(SourceDevice);
      started = (struct _DEVICE_OBJECT *)v38;
      if ( v38 >= 0 )
      {
        v117 = 1;
        goto LABEL_72;
      }
      goto LABEL_211;
    }
    if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)SourceDevice->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_72:
  KeWaitForSingleObject((PVOID)(v9 + 72), Executive, 0, 0, 0LL);
  v39 = 1;
  if ( !v6
    || !*((_DWORD *)v6 + 126)
    || (v105 = DpiLdaLinkDeviceToChain(SourceDevice, 0LL), LODWORD(started) = v105, v105 >= 0) )
  {
    v40 = *(char ***)(v9 + 64);
    if ( *v40 != (char *)(v9 + 56) )
      goto LABEL_302;
    *(_QWORD *)DeviceExtension = v9 + 56;
    *((_QWORD *)DeviceExtension + 1) = v40;
    *v40 = DeviceExtension;
    *(_QWORD *)(v9 + 64) = DeviceExtension;
    ++*(_DWORD *)(v9 + 128);
    v132 = 1;
    if ( *((_QWORD *)DeviceExtension + 21) )
    {
LABEL_79:
      KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
      if ( !v6 )
        goto LABEL_87;
      if ( !*((_QWORD *)v6 + 182) )
      {
        v43 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
        *((_QWORD *)v6 + 182) = v43;
        if ( !v43 )
          goto LABEL_288;
        v43[2] = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 182));
      }
      if ( *((_QWORD *)v6 + 183) )
      {
LABEL_86:
        *((_DWORD *)v6 + 368) = 0;
        memset(v6 + 1480, 0, 0x400uLL);
LABEL_87:
        KeReleaseMutex((PRKMUTEX)(v9 + 72), 0);
        *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
        v39 = 0;
        if ( v6 )
        {
          *((_QWORD *)v6 + 17) = DpiFdoDispatchPower;
          if ( v6[1152] )
          {
            *(_BYTE *)(*((_QWORD *)v6 + 21) + 108LL) = 1;
            AcquireMiniportListMutex();
            if ( qword_1C0130740 && qword_1C0130740 != qword_1C0130748 )
              WdLogSingleEntry2(2LL, SourceDevice, (int)started);
            qword_1C0130740 = (__int64)SourceDevice;
            v69 = *((_QWORD *)v6 + 6);
            v145 = 0LL;
            started = (struct _DEVICE_OBJECT *)(int)DpiDxgkDdiExchangePreStartInfo(v9, v69, &v145);
            _InterlockedExchange64(&qword_1C01304D8, 0LL);
            KeReleaseMutex(Mutex, 0);
            if ( (int)started < 0 )
            {
              WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1144), started);
              goto LABEL_100;
            }
            if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
            {
              v70 = (v145 & 0x200000000LL) != 0;
              v6[2741] = BYTE4(v145) & 1;
              v6[2742] = v70;
            }
          }
        }
        if ( v118 && v126 )
        {
          qword_1C0130748 = (__int64)SourceDevice;
          if ( !qword_1C0130740 )
            qword_1C0130740 = (__int64)SourceDevice;
          memset(&VersionInformation[1], 0, 0x118uLL);
          VersionInformation[0] = 284;
          if ( RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0
            && (ReturnedProductType = 0,
                RtlGetProductInfo(
                  VersionInformation[1],
                  VersionInformation[2],
                  LOWORD(VersionInformation[69]),
                  HIWORD(VersionInformation[69]),
                  &ReturnedProductType))
            && ReturnedProductType == 187
            || (unsigned int)ExGetFirmwareType() == 2
            || byte_1C0130493 )
          {
            *(_WORD *)(v6 + 2741) = 257;
          }
        }
        SourceDevice->Flags |= 4u;
        SourceDevice->Flags |= 0x2000u;
        SourceDevice->Flags &= ~0x4000u;
        SourceDevice->Flags &= ~0x80u;
        WdLogSingleEntry1(4LL, SourceDevice);
LABEL_99:
        if ( !v6 )
          goto LABEL_103;
        goto LABEL_100;
      }
      v44 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 183) = v44;
      if ( v44 )
      {
        v44[2] = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 183));
        goto LABEL_86;
      }
LABEL_288:
      v106 = -1073741801LL;
      LODWORD(started) = -1073741801;
      v107 = 6LL;
      goto LABEL_289;
    }
    v41 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = v41;
    if ( v41 )
    {
      v41[26] = 1;
      *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
      v42 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      LODWORD(started) = v42;
      if ( v42 >= 0 )
      {
        v120 = 1;
        goto LABEL_79;
      }
      v87 = v42;
      goto LABEL_215;
    }
    goto LABEL_220;
  }
  v106 = v105;
  v107 = 2LL;
LABEL_289:
  WdLogSingleEntry1(v107, v106);
LABEL_100:
  if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
    DxgkLogInternalTriageEvent(
      *((_QWORD *)v6 + 487),
      131077,
      -1,
      (__int64)L"Adapter AddDevice has completed with status %1",
      (int)started,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_103:
  v45 = (int)started;
  LOBYTE(v17) = v117;
  v46 = v127;
  v47 = v127;
  v116 = v39;
  v48 = v134;
  if ( (int)started < 0 )
  {
    v121 = 1;
    if ( v132 == 1 )
    {
      v108 = v141;
      v72 = (struct _KMUTANT *)(v141 + 72);
      KeWaitForSingleObject(v141 + 72, Executive, 0, 0, 0LL);
      v109 = *(_QWORD **)DeviceExtension;
      if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
      {
        v110 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
        if ( *v110 == DeviceExtension )
        {
          *v110 = v109;
          v109[1] = v110;
          --*((_DWORD *)v108 + 32);
          if ( v6 && *((_DWORD *)v6 + 126) )
            DpiLdaUnLinkDeviceFromChain(SourceDevice);
          KeReleaseMutex(v72, 0);
          LODWORD(started) = v45;
          LOBYTE(v17) = v117;
          v9 = (__int64)v141;
          LOBYTE(v134) = v48;
          v7 = v116;
          v121 = 1;
          v127 = v47;
LABEL_158:
          if ( v7 == 1 )
          {
            KeReleaseMutex(v72, 0);
            LOBYTE(v17) = v117;
          }
          if ( SourceDevice )
          {
            if ( (_BYTE)v17 == 1 )
              DpiFdoResetFdo();
            if ( v6 )
            {
              v73 = (_DWORD *)*((_QWORD *)v6 + 182);
              if ( v73 && v73[2] == 1 )
              {
                ExFreePoolWithTag(v73, 0);
                *((_QWORD *)v6 + 182) = 0LL;
              }
              v74 = (_DWORD *)*((_QWORD *)v6 + 183);
              if ( v74 && v74[2] == 1 )
              {
                ExFreePoolWithTag(v74, 0);
                *((_QWORD *)v6 + 183) = 0LL;
              }
              if ( (_BYTE)v134 == 1 )
                DpiAcpiUnregisterAcpiCallbacks(SourceDevice);
              v75 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 73);
              if ( v75 )
              {
                v75(*((_QWORD *)v6 + 71));
                memset(v6 + 560, 0, 0x40uLL);
              }
              v76 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 81);
              if ( v76 )
              {
                v76(*((_QWORD *)v6 + 79));
                *((_OWORD *)v6 + 39) = 0LL;
                *((_OWORD *)v6 + 40) = 0LL;
                *((_OWORD *)v6 + 41) = 0LL;
              }
              v77 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 87);
              if ( v77 )
              {
                v77(*((_QWORD *)v6 + 85));
                memset(v6 + 672, 0, 0xB8uLL);
              }
              v78 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 110);
              if ( v78 )
              {
                v78(*((_QWORD *)v6 + 108));
                memset(v6 + 856, 0, 0x58uLL);
              }
              RtlFreeUnicodeString((PUNICODE_STRING)v6 + 32);
              RtlFreeUnicodeString((PUNICODE_STRING)v6 + 33);
              v79 = (void *)*((_QWORD *)v6 + 139);
              if ( v79 )
              {
                ExFreePoolWithTag(v79, 0);
                *((_QWORD *)v6 + 139) = 0LL;
              }
            }
            if ( DeviceExtension )
            {
              v80 = *((_QWORD *)DeviceExtension + 21);
              if ( v80 )
              {
                if ( v120 == 1 )
                {
                  ExDeleteResourceLite((PERESOURCE)v80);
                  v80 = *((_QWORD *)DeviceExtension + 21);
                }
                if ( *(_DWORD *)(v80 + 104) == 1 )
                {
                  ExFreePoolWithTag((PVOID)v80, 0);
                  *((_QWORD *)DeviceExtension + 21) = 0LL;
                }
              }
              v81 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
              if ( v81 )
                IoDetachDevice(v81);
            }
            IoDeleteDevice(SourceDevice);
            SourceDevice = 0LL;
          }
          if ( v121 == 1 )
          {
            DpiDxgkDdiRemoveDevice(v9, v140);
            v82 = v119;
          }
          else
          {
            v82 = v119;
            if ( !v119 )
              goto LABEL_316;
            if ( !*(_QWORD *)(v9 + 1344)
              || (DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL, v17), (v112 = DiagnosticInfoArgs) == 0) )
            {
LABEL_314:
              if ( (_DWORD)started != -1071774664 )
                DxgCreateLiveDumpWithWdLogs(403LL, 2049LL);
              goto LABEL_316;
            }
            v113 = *(_DWORD *)(DiagnosticInfoArgs + 216);
            v114 = TargetDevice;
            *(_QWORD *)DiagnosticInfoArgs = v140;
            if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v9 + 1344))(v114, DiagnosticInfoArgs) >= 0 )
            {
              if ( *(_DWORD *)(v112 + 220) > v113 )
                *(_DWORD *)(v112 + 220) = 0;
              DxgCreateLiveDumpWithDriverBlob(
                v114,
                0x1B0u,
                *(int *)(v112 + 8),
                (int)started,
                0LL,
                0LL,
                (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v112);
              v82 = 0;
            }
            DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v112);
          }
          if ( v82 )
            goto LABEL_314;
LABEL_316:
          v46 = v127;
          goto LABEL_104;
        }
      }
LABEL_302:
      __fastfail(3u);
    }
    v9 = (__int64)v141;
    v7 = v116;
LABEL_157:
    v72 = (struct _KMUTANT *)(v9 + 72);
    goto LABEL_158;
  }
LABEL_104:
  memset(v163, 0, sizeof(v163));
  v166 = 0;
  v49 = DxgkDiagCalcDuration1us(&v156);
  v162[0] = 6;
  v162[1] = 64;
  v165 = 0;
  v164 = 0LL;
  memset(v163, 0, sizeof(v163));
  v167 = 34;
  v168 = v46;
  v169 = v49;
  v170 = (int)started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v162, 0x100000000LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    *(_DWORD *)Exclusive = (_DWORD)started;
    McTemplateK0ppq_EtwWriteTransfer(v50, &EventExitDpiAddDevice, v51, DriverObject, TargetDevice, *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
