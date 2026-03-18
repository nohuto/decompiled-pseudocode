/*
 * XREFs of DpiAddDevice @ 0x1C0172ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001FDE4 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C0021AE4 (DpiGetDeviceRegistryPaths.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?Feature_Servicing_HLBDD_27913584__private_IsEnabled@@YAHXZ @ 0x1C0025FBC (-Feature_Servicing_HLBDD_27913584__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C0050680 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0057824 (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpEvalAcpiMethod @ 0x1C0153370 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C0166864 (DpiFdoDetectPostDevice.c)
 *     DpiGetDevicePropertyString @ 0x1C017207C (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeFdo @ 0x1C0174F5C (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C0175B20 (DpiQueryBusInterface.c)
 *     DpiReadPnpRegistryValue @ 0x1C017A084 (DpiReadPnpRegistryValue.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0186B7C (DpiDxgkDdiAddDevice.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0187574 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetAgpStatus @ 0x1C0187BC4 (DpiGetAgpStatus.c)
 *     DpiGetVgaStatus @ 0x1C0187EA0 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0188EF4 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C021CB68 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021CC58 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021CFC0 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C02C3A44 (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C02C7344 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D1CB8 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02D3410 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02D3C00 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02D41A0 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3)
{
  char *DeviceExtension; // rbx
  char *v6; // r14
  _DWORD *DriverObjectExtension; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 started; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  ULONG v21; // edi
  int v22; // r12d
  __int64 v23; // rax
  char v24; // r15
  struct _KMUTANT *v25; // rdi
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  void (__fastcall *v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rax
  void (__fastcall *v31)(_QWORD); // rax
  void *v32; // rcx
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *v34; // rcx
  bool v35; // r15
  int DevicePropertyString; // eax
  void *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  int RegistryValues; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  NTSTATUS v46; // eax
  char v47; // al
  struct _DEVICE_OBJECT *v48; // r12
  PDEVICE_OBJECT v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  bool v53; // zf
  int DeviceRegistryPaths; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // r12
  int v59; // eax
  int v60; // ecx
  NTSTATUS DeviceProperty; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rsi
  __int64 v66; // rax
  _DWORD *v67; // rdi
  NTSTATUS v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rsi
  __int64 v73; // rax
  struct _DEVICE_OBJECT *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v81; // al
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  struct _DEVICE_OBJECT *v85; // r12
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  PVOID PoolWithTag; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rax
  unsigned __int16 *v94; // rcx
  int v95; // edx
  int v96; // edi
  char v97; // al
  int AgpStatus; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  char v107; // al
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  struct _DEVICE_OBJECT *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  char v126; // al
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  char *v130; // rdi
  unsigned int v131; // edx
  __int16 v132; // r10
  const wchar_t **v133; // r9
  char *v134; // rax
  signed __int64 v135; // rcx
  __int16 v136; // r10
  const wchar_t **v137; // r9
  const wchar_t *v138; // rax
  char *v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  _DWORD *v143; // rdx
  unsigned __int64 v144; // r8
  __int64 v145; // rcx
  int v146; // eax
  int v147; // eax
  int v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  char **v152; // rcx
  _DWORD *v153; // rax
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // rax
  NTSTATUS v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  _DWORD *v163; // rax
  _DWORD *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rax
  _QWORD *v172; // rax
  _QWORD *v173; // rcx
  PVOID *v174; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v176; // rdi
  unsigned int v177; // ebx
  struct _DEVICE_OBJECT *v178; // r14
  int v179; // eax
  __int64 v180; // rcx
  __int64 v181; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  int v184; // [rsp+30h] [rbp-D0h]
  char v185; // [rsp+41h] [rbp-BFh]
  bool v186; // [rsp+43h] [rbp-BDh]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+48h] [rbp-B8h] BYREF
  char v188; // [rsp+50h] [rbp-B0h]
  char v189; // [rsp+51h] [rbp-AFh]
  char v190; // [rsp+52h] [rbp-AEh]
  char v191; // [rsp+53h] [rbp-ADh]
  char v192; // [rsp+54h] [rbp-ACh]
  char v193; // [rsp+55h] [rbp-ABh]
  char v194; // [rsp+56h] [rbp-AAh] BYREF
  char v195; // [rsp+57h] [rbp-A9h]
  char v196; // [rsp+58h] [rbp-A8h]
  char v197; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v199; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  unsigned int v201; // [rsp+70h] [rbp-90h] BYREF
  int v202; // [rsp+74h] [rbp-8Ch]
  int v203; // [rsp+78h] [rbp-88h] BYREF
  ULONG ReturnedProductType; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v205; // [rsp+80h] [rbp-80h] BYREF
  void *Source1; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v208; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  int v210; // [rsp+A8h] [rbp-58h]
  int v211; // [rsp+ACh] [rbp-54h]
  const wchar_t *v212; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v213[2]; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING String1; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v215; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v216; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v217; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v218; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v219; // [rsp+110h] [rbp+10h] BYREF
  __int64 v220; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v221[14]; // [rsp+130h] [rbp+30h] BYREF
  int v222[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v223; // [rsp+1B0h] [rbp+B0h]
  __int64 v224; // [rsp+1B8h] [rbp+B8h] BYREF
  int v225; // [rsp+1C0h] [rbp+C0h]
  _DWORD v226[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v227[24]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v228; // [rsp+1F0h] [rbp+F0h]
  int v229; // [rsp+1F8h] [rbp+F8h]
  int v230; // [rsp+1FCh] [rbp+FCh]
  int v231; // [rsp+200h] [rbp+100h]
  int v232; // [rsp+204h] [rbp+104h]
  int v233; // [rsp+208h] [rbp+108h]
  int v234; // [rsp+20Ch] [rbp+10Ch]
  _DWORD VersionInformation[72]; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v236[2]; // [rsp+330h] [rbp+230h]
  const wchar_t *v237; // [rsp+338h] [rbp+238h] BYREF
  int v238; // [rsp+340h] [rbp+240h]
  const wchar_t *v239; // [rsp+348h] [rbp+248h]
  int v240; // [rsp+350h] [rbp+250h]
  const wchar_t *v241; // [rsp+358h] [rbp+258h]
  int v242; // [rsp+360h] [rbp+260h]
  const wchar_t *v243; // [rsp+368h] [rbp+268h]
  int v244; // [rsp+370h] [rbp+270h]
  const wchar_t *v245; // [rsp+378h] [rbp+278h]
  __int128 v246; // [rsp+380h] [rbp+280h] BYREF
  __int128 v247; // [rsp+390h] [rbp+290h]
  int v248; // [rsp+3A0h] [rbp+2A0h]
  __int128 v249; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v250; // [rsp+3B8h] [rbp+2B8h]
  wchar_t v251; // [rsp+3C0h] [rbp+2C0h]
  _OWORD v252[2]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v253; // [rsp+3E8h] [rbp+2E8h]
  wchar_t v254; // [rsp+3F0h] [rbp+2F0h]
  _OWORD v255[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  wchar_t v256; // [rsp+418h] [rbp+318h]
  _OWORD v257[2]; // [rsp+420h] [rbp+320h] BYREF
  __int64 v258; // [rsp+440h] [rbp+340h]
  int v259; // [rsp+448h] [rbp+348h]
  _OWORD v260[2]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v261; // [rsp+470h] [rbp+370h]
  _OWORD v262[4]; // [rsp+480h] [rbp+380h] BYREF
  int v263; // [rsp+4C0h] [rbp+3C0h]

  v224 = 0LL;
  v225 = 0;
  DeviceExtension = 0LL;
  v249 = *(_OWORD *)L"\\Driver\\VGPU";
  v251 = aDriverVgpu[12];
  v6 = 0LL;
  v250 = *(_QWORD *)L"VGPU";
  v218.Buffer = (wchar_t *)&v249;
  v255[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v256 = aDriverWddmwarp[16];
  v215.Buffer = (wchar_t *)v255;
  String1.Buffer = (wchar_t *)v260;
  v260[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v254 = aDriverBasicdis[20];
  v261 = *(_QWORD *)L"der";
  v219.Buffer = (wchar_t *)v252;
  v252[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v259 = *(_DWORD *)L"r";
  v255[1] = *(_OWORD *)L"WddmWarp";
  TargetDevice = DeviceObject;
  DriverObject = ClientIdentificationAddress;
  v253 = *(_QWORD *)L"play";
  v205 = 0LL;
  v260[1] = *(_OWORD *)L"BasicRender";
  v197 = 0;
  DeviceObjecta = 0LL;
  v257[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  ResultLength = 0;
  v252[1] = *(_OWORD *)L"BasicDisplay";
  v186 = 1;
  LOBYTE(v202) = 0;
  v258 = *(_QWORD *)L"ender";
  v262[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v195 = 0;
  v196 = 0;
  v185 = 0;
  v191 = 0;
  v189 = 0;
  v192 = 0;
  v194 = 0;
  v190 = 0;
  v193 = 0;
  v188 = 0;
  v199 = 3;
  *(_QWORD *)&v218.Length = 1703960LL;
  *(_QWORD *)&v215.Length = 2228256LL;
  *(_QWORD *)&String1.Length = 2621478LL;
  *(_QWORD *)&v219.Length = 2752552LL;
  v257[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v216.Length = 2883626LL;
  v216.Buffer = (wchar_t *)v257;
  v262[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v263 = *(_DWORD *)L"r";
  v262[3] = *(_OWORD *)L"celerator";
  v262[2] = *(_OWORD *)L"omputeAccelerator";
  *(_QWORD *)&v217.Length = 4456514LL;
  v217.Buffer = (wchar_t *)v262;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(64LL, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, DeviceObject, 0);
  v220 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v10 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    v172 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v172[3] = 275LL;
    v172[4] = 21LL;
    v172[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v172);
    goto LABEL_270;
  }
  v11 = DpiDxgkDdiAddDevice(DriverObjectExtension, DeviceObject, &v205);
  started = v11;
  if ( v11 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    v16 = *(_QWORD *)(v10 + 144);
LABEL_9:
    *(_QWORD *)(v15 + 24) = v16;
    *(_QWORD *)(v15 + 32) = started;
LABEL_10:
    WdLogEvent5_WdError(v15);
LABEL_270:
    v58 = 0;
    v24 = 0;
    goto LABEL_271;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v197 = 1;
  if ( !RtlCompareUnicodeString(&String1, p_DriverName, 1u) )
  {
    v19 = 1LL;
    v20 = 1;
    v185 = 1;
    v189 = 1;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v215, p_DriverName, 1u) )
  {
    v189 = 1;
LABEL_15:
    v20 = 0;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v216, p_DriverName, 1u) || !RtlCompareUnicodeString(&v217, p_DriverName, 1u) )
  {
    v188 = 1;
    goto LABEL_15;
  }
  if ( !RtlCompareUnicodeString(&v218, p_DriverName, 1u) )
  {
    v192 = 1;
    goto LABEL_15;
  }
  if ( RtlCompareUnicodeString(&v219, p_DriverName, 1u) )
  {
    v193 = byte_1C00AFA1F;
    v190 = *(_BYTE *)(v10 + 134);
    v201 = 0;
    memset(v221, 0, sizeof(v221));
    v41 = *(_QWORD *)(v10 + 48);
    v221[2] = L"Start";
    LODWORD(v221[1]) = 292;
    v221[3] = &v201;
    LODWORD(v221[4]) = 67108868;
    LODWORD(v221[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v41, v221, 0LL, 0LL);
    started = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_63;
    if ( v201 == 3 )
      goto LABEL_15;
    v43 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v43 + 24) = v201;
    WdLogEvent5_WdError(v43);
    LODWORD(started) = -1073741637;
LABEL_75:
    v24 = 0;
    goto LABEL_20;
  }
  Source1 = 0LL;
  v191 = 1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           DeviceObject,
                           DevicePropertyHardwareID,
                           PagedPool,
                           &Source1,
                           &ResultLength);
  started = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_63;
  v37 = Source1;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v185 = 1;
    if ( byte_1C00AFA12 )
    {
      LODWORD(started) = -1073741637;
      v186 = (unsigned int)Feature_Servicing_HLBDD_27913584__private_IsEnabled() == 0;
      v40 = WdLogNewEntry5_WdEvent(v39, v38);
      *(_QWORD *)(v40 + 24) = 0LL;
      WdLogEvent5_WdEvent(v40);
    }
  }
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( (int)started < 0 )
    goto LABEL_75;
  v20 = v185;
LABEL_16:
  if ( v205 )
  {
    v21 = 5944;
    v199 = 0;
    v22 = 2;
    if ( *(_QWORD *)(v10 + 616) )
    {
      if ( v20 )
      {
        LODWORD(started) = -1073741637;
        v23 = WdLogNewEntry5_WdError(0LL, v18);
        *(_QWORD *)(v23 + 24) = *(_QWORD *)(v10 + 616);
        *(_QWORD *)(v23 + 32) = -1073741637LL;
        goto LABEL_19;
      }
      v44 = DpiDxgkDdiLinkDevice(v10, (__int64)TargetDevice, v205, (int *)&v224);
      started = v44;
      if ( v44 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(0LL, v45);
        v16 = *(_QWORD *)(v10 + 616);
        goto LABEL_9;
      }
      if ( HIDWORD(v224) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        v23 = WdLogNewEntry5_WdError(0LL, v45);
        *(_QWORD *)(v23 + 24) = -1073741756LL;
        goto LABEL_19;
      }
      if ( HIDWORD(v224) && !(_BYTE)v225 )
      {
        v21 = 2744;
        v199 = 1;
        v22 = 3;
      }
    }
  }
  else
  {
    v199 = 2;
    v21 = 496;
    v22 = 4;
    if ( v20 )
    {
      LODWORD(started) = -1073741637;
      v23 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v23 + 24) = -1073741637LL;
LABEL_19:
      WdLogEvent5_WdError(v23);
      v24 = 0;
      goto LABEL_20;
    }
  }
  v46 = IoCreateDevice(DriverObject, v21, 0LL, 0x23u, v190 == 0 ? 0x100 : 0, 0, &DeviceObjecta);
  started = v46;
  if ( v46 < 0 )
  {
LABEL_63:
    v15 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v15 + 24) = started;
    goto LABEL_10;
  }
  v199 |= (unsigned int)DeviceObjecta & 0xFFFF00;
  DeviceExtension = (char *)DeviceObjecta->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = v22;
  *((_QWORD *)DeviceExtension + 3) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 4) = DeviceObjecta;
  *((_QWORD *)DeviceExtension + 5) = v10;
  *((_QWORD *)DeviceExtension + 6) = v205;
  DeviceExtension[480] = v185;
  v47 = v188;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v47;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v48 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v49 = IoAttachDeviceToDeviceStack(DeviceObjecta, v48);
  *((_QWORD *)DeviceExtension + 20) = v49;
  if ( !v49 )
  {
    LODWORD(started) = -1073741810;
    v52 = WdLogNewEntry5_WdError(v51, v50);
    *(_QWORD *)(v52 + 24) = -1073741810LL;
    WdLogEvent5_WdError(v52);
    v24 = 0;
    goto LABEL_20;
  }
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  v53 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  if ( !v53 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
  {
    v24 = 1;
    goto LABEL_228;
  }
  v6 = DeviceExtension;
  DeviceExtension[2693] = v189;
  DeviceExtension[1154] = v191;
  DeviceExtension[1158] = v190;
  DeviceExtension[2694] = v192;
  DeviceExtension[2695] = v193;
  *((_DWORD *)DeviceExtension + 680) = 0;
  *((_QWORD *)DeviceExtension + 36) = &DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C00AFA11 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v224;
  *((_DWORD *)DeviceExtension + 127) = v225;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObjecta, (__int64)v48, v10);
  started = DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
    goto LABEL_95;
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v10 + 232) )
    {
      v59 = DpiAcpiRegisterAcpiCallbacks(DeviceObjecta);
      v60 = (unsigned __int8)v202;
      if ( v59 >= 0 )
        v60 = 1;
      v202 = v60;
    }
    DeviceExtension[1156] = 1;
  }
  DeviceProperty = IoGetDeviceProperty(v48, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
  v65 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v66 = WdLogNewEntry5_WdWarning(v63, v62, v64);
    *(_QWORD *)(v66 + 24) = v65;
    WdLogEvent5_WdWarning(v66);
    *((_DWORD *)DeviceExtension + 286) = -1;
  }
  v67 = DeviceExtension + 1148;
  v68 = IoGetDeviceProperty(v48, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
  v72 = v68;
  if ( v68 < 0 || *v67 == -1 )
  {
    v73 = WdLogNewEntry5_WdWarning(v70, v69, v71);
    *(_QWORD *)(v73 + 24) = v72;
    WdLogEvent5_WdWarning(v73);
    *v67 = -1;
  }
  v74 = TargetDevice;
  LODWORD(started) = IoGetDeviceProperty(
                       TargetDevice,
                       DevicePropertyBusTypeGuid,
                       0x10u,
                       DeviceExtension + 544,
                       &ResultLength);
  if ( (int)started < 0 || ResultLength < 0x10 )
  {
    v77 = WdLogNewEntry5_WdEvent(v76, v75);
    *(_QWORD *)(v77 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v77);
    *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
  }
  if ( !v185 )
  {
    v78 = DpiFdoDetectPostDevice((__int64)DeviceObjecta, &v194);
    started = v78;
    if ( v78 < 0 )
    {
LABEL_95:
      v57 = WdLogNewEntry5_WdError(v56, v55);
      *(_QWORD *)(v57 + 24) = started;
      WdLogEvent5_WdError(v57);
      v24 = 0;
      v58 = 0;
      goto LABEL_271;
    }
    if ( v194 )
    {
      v79 = WdLogNewEntry5_WdEvent(v56, v55);
      *(_QWORD *)(v79 + 24) = DeviceObjecta;
      WdLogEvent5_WdEvent(v79);
      *((_WORD *)DeviceExtension + 576) = 257;
      byte_1C00AFD80 = 1;
      if ( byte_1C00AFA11 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v74);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v74 = TargetDevice;
      }
    }
  }
  v203 = 0;
  v81 = (int)DpiReadPnpRegistryValue(DeviceObjecta, L"SoftGPUAdapter", &v203, 4LL) >= 0 && v203;
  DeviceExtension[2692] = v81;
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
  {
    v84 = WdLogNewEntry5_WdEvent(v83, v82);
    *(_QWORD *)(v84 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v84);
    v85 = TargetDevice;
    v24 = 1;
    DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
    if ( !*((_QWORD *)DeviceExtension + 77) )
    {
      LODWORD(started) = -1073741127;
      v88 = WdLogNewEntry5_WdError(v87, v86);
      *(_QWORD *)(v88 + 24) = -1073741127LL;
      WdLogEvent5_WdError(v88);
LABEL_123:
      v24 = 0;
      goto LABEL_20;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 139) = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(started) = -1073741801;
      v93 = WdLogNewEntry5_WdLowResource(v91, v90, 0LL, v92);
      *(_QWORD *)(v93 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v93);
      goto LABEL_123;
    }
    (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
      *((_QWORD *)DeviceExtension + 71),
      0LL,
      PoolWithTag,
      0LL,
      256);
    v94 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
    *((_DWORD *)DeviceExtension + 280) = 1;
    v95 = *v94;
    *((_DWORD *)DeviceExtension + 281) = v95;
    v96 = v94[1];
    *((_DWORD *)DeviceExtension + 282) = v96;
    *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v94 + 8);
    if ( (v94[7] & 0x7F) == 0 )
    {
      *((_DWORD *)DeviceExtension + 283) = v94[22];
      *((_DWORD *)DeviceExtension + 284) = v94[23];
    }
    if ( v95 != 22611 || (v97 = 1, v96 != 4097) )
      v97 = 0;
    DeviceExtension[2696] = v97;
    DpiQueryBusInterface(v85, (__int64)(DeviceExtension + 624));
    DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
    AgpStatus = DpiGetAgpStatus(DeviceObjecta);
    v102 = AgpStatus;
    if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
    {
      v103 = WdLogNewEntry5_WdWarning(v100, v99, v101);
      *(_QWORD *)(v103 + 24) = v102;
      WdLogEvent5_WdWarning(v103);
    }
    LODWORD(started) = DpiGetVgaStatus(DeviceObjecta);
    v107 = DeviceExtension[1152];
    if ( (int)started < 0 )
    {
      if ( v107 )
      {
        v109 = WdLogNewEntry5_WdWarning(v105, v104, v106);
        *(_QWORD *)(v109 + 24) = DeviceObjecta;
        WdLogEvent5_WdWarning(v109);
      }
    }
    else if ( v107
           || !byte_1C00AFD80
           && (v108 = WdLogNewEntry5_WdWarning(v105, v104, v106),
               *(_QWORD *)(v108 + 24) = DeviceObjecta,
               WdLogEvent5_WdWarning(v108),
               DeviceExtension[1152] = 1,
               byte_1C00AFD81 = 1,
               DeviceExtension[1152]) )
    {
      if ( byte_1C00AFA16 )
        DeviceExtension[1155] = 1;
    }
    goto LABEL_199;
  }
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
  {
    v223 = 0LL;
    v112 = WdLogNewEntry5_WdEvent(v111, v110);
    *(_QWORD *)(v112 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v112);
    if ( !DeviceExtension[1156] )
    {
LABEL_144:
      LODWORD(started) = -1073741637;
      v113 = WdLogNewEntry5_WdError(v105, v104);
      *(_QWORD *)(v113 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v113);
      v24 = 0;
      goto LABEL_20;
    }
    *((_DWORD *)DeviceExtension + 280) = 2;
    v248 = 0;
    BYTE1(v222[2]) = 0;
    HIWORD(v222[2]) = 0;
    strcpy((char *)v222, "AeiC_HID");
    v222[3] = 0;
    v246 = 0LL;
    v247 = 0LL;
    v114 = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v222, 0x18u, &v246, 0x24u);
    v117 = v114;
    if ( v114 >= 0 )
    {
      *(_QWORD *)(DeviceExtension + 1124) = v247;
    }
    else
    {
      v118 = WdLogNewEntry5_WdError(v116, v115);
      *(_QWORD *)(v118 + 24) = v117;
      WdLogEvent5_WdError(v118);
    }
    v248 = 0;
    strcpy((char *)v222, "AeiC_SUB");
    BYTE1(v222[2]) = 0;
    HIWORD(v222[2]) = 0;
    v222[3] = 0;
    v246 = 0LL;
    v247 = 0LL;
    if ( (int)DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v222, 0x18u, &v246, 0x24u) >= 0 )
    {
      *(_QWORD *)(DeviceExtension + 1132) = v247;
    }
    else
    {
      v121 = WdLogNewEntry5_WdEvent(v120, v119);
      *(_QWORD *)(v121 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v121);
    }
    v248 = 0;
    strcpy((char *)v222, "AeiC_HRV");
    BYTE1(v222[2]) = 0;
    HIWORD(v222[2]) = 0;
    v222[3] = 0;
    v246 = 0LL;
    v247 = 0LL;
    LODWORD(started) = DpEvalAcpiMethod((__int64)DeviceObjecta, 0xFFFFFFFFLL, v222, 0x18u, &v246, 0x24u);
    if ( (int)started >= 0 )
    {
      *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v247;
    }
    else
    {
      v122 = WdLogNewEntry5_WdEvent(v105, v104);
      *(_QWORD *)(v122 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v122);
      LODWORD(started) = 0;
    }
    if ( DeviceExtension[1152] )
    {
      v123 = IoGetAttachedDeviceReference(TargetDevice);
      started = (int)DpiSetDeviceUsageType(v123);
      ObfDereferenceObject(v123);
      if ( (int)started < 0 )
      {
        v124 = WdLogNewEntry5_WdError(v105, v104);
        *(_QWORD *)(v124 + 24) = started;
        WdLogEvent5_WdError(v124);
        LODWORD(started) = 0;
      }
    }
  }
  else
  {
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      v125 = WdLogNewEntry5_WdEvent(v105, v104);
      *(_QWORD *)(v125 + 24) = DeviceObjecta;
      WdLogEvent5_WdEvent(v125);
      v24 = 1;
      if ( DeviceExtension[2694] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
        *((_DWORD *)DeviceExtension + 285) = 1;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
      goto LABEL_199;
    }
    if ( DeviceExtension[1158] )
    {
      *((_DWORD *)DeviceExtension + 281) = 5140;
      *((_QWORD *)DeviceExtension + 141) = 139LL;
      *((_QWORD *)DeviceExtension + 142) = 0LL;
      *((_DWORD *)DeviceExtension + 280) = 0;
    }
    else if ( DeviceExtension[480] )
    {
      *((_DWORD *)DeviceExtension + 280) = 3;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      if ( !DeviceExtension[1154] )
      {
        v24 = 1;
        if ( DeviceExtension[2693] )
          *((_DWORD *)DeviceExtension + 282) = 140;
        goto LABEL_199;
      }
      *((_DWORD *)DeviceExtension + 282) = 141;
    }
    else
    {
      v126 = DeviceExtension[2695];
      if ( !v126 && !g_OSTestSigningEnabled )
        goto LABEL_144;
      v53 = g_OSTestSigningEnabled == 0;
      *((_DWORD *)DeviceExtension + 280) = 3;
      if ( !v53 && !v126 )
      {
        P = 0LL;
        v127 = DpiGetDevicePropertyString(v74, DevicePropertyCompatibleIDs, PagedPool, &P, &ResultLength);
        started = v127;
        if ( v127 >= 0 && (v130 = (char *)P) != 0LL )
        {
          v131 = 0;
          if ( DeviceExtension[2692] )
          {
            *((_DWORD *)DeviceExtension + 281) = 5140;
            v132 = *(_WORD *)v130;
            v133 = &v237;
            v237 = L"SoftGPU_Full_D3D12";
            v239 = L"SoftGPU_Full_D3D9L";
            v241 = L"SoftGPU_Rod";
            v243 = L"SoftGPU_Dod";
            v245 = L"SoftGPU_MCDM";
            v236[0] = 135;
            v238 = 128;
            v240 = 136;
            v242 = 137;
            v244 = 134;
            while ( 1 )
            {
              v134 = (char *)*v133;
              if ( v132 )
                break;
LABEL_181:
              if ( !*(_WORD *)v134 )
                goto LABEL_184;
              ++v131;
              v133 += 2;
              if ( v131 >= 5 )
                goto LABEL_183;
            }
            v135 = v130 - v134;
            while ( *(_WORD *)v134 )
            {
              if ( *(_WORD *)&v134[v135] == *(_WORD *)v134 )
              {
                v134 += 2;
                if ( *(_WORD *)&v134[v135] )
                  continue;
              }
              goto LABEL_181;
            }
LABEL_184:
            *((_DWORD *)DeviceExtension + 282) = v236[4 * v131];
          }
          else
          {
            v136 = *(_WORD *)P;
            v212 = L"MCDMTestDevice";
            v137 = &v212;
            v210 = 5140;
            v211 = 256;
            v213[0] = 2697;
            while ( 1 )
            {
              v138 = *v137;
              if ( v136 )
                break;
LABEL_191:
              if ( !*v138 )
                goto LABEL_194;
              ++v131;
              v137 += 3;
              if ( v131 )
                goto LABEL_195;
            }
            v139 = (char *)((_BYTE *)P - (_BYTE *)v138);
            while ( *v138 )
            {
              if ( *(_WORD *)&v139[(_QWORD)v138] == *v138 )
              {
                if ( *(_WORD *)&v139[(_QWORD)++v138] )
                  continue;
              }
              goto LABEL_191;
            }
LABEL_194:
            *((_DWORD *)DeviceExtension + 281) = *(&v210 + 6 * (int)v131);
            *((_DWORD *)DeviceExtension + 282) = *(&v211 + 6 * (int)v131);
            DeviceExtension[v213[6 * v131]] = 1;
LABEL_195:
            if ( !*((_DWORD *)DeviceExtension + 282) )
            {
              ExFreePoolWithTag(v130, 0);
              goto LABEL_144;
            }
          }
LABEL_183:
          ExFreePoolWithTag(v130, 0);
        }
        else
        {
          v140 = WdLogNewEntry5_WdError(v129, v128);
          *(_QWORD *)(v140 + 24) = started;
          WdLogEvent5_WdError(v140);
        }
      }
    }
  }
  v24 = 1;
LABEL_199:
  if ( !DeviceExtension[1152] && !DeviceExtension[480] && DeviceExtension[1154] )
  {
    v141 = WdLogNewEntry5_WdEvent(v105, v104);
    *(_QWORD *)(v141 + 24) = DeviceObjecta;
    WdLogEvent5_WdEvent(v141);
    LODWORD(started) = -1071774664;
LABEL_203:
    v24 = 0;
    goto LABEL_20;
  }
  if ( DeviceExtension[2692] && DeviceExtension[2693] )
  {
    LODWORD(started) = -1073741811;
    v142 = WdLogNewEntry5_WdError(v105, v104);
    *(_QWORD *)(v142 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v142);
    goto LABEL_203;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
  v143 = DeviceExtension + 1312;
  *((_WORD *)DeviceExtension + 648) = 64;
  v144 = 7LL;
  if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
  {
    *v143 = 1;
    v144 = 6LL;
    v143 = DeviceExtension + 1316;
  }
  memset64(v143, 0x100000001uLL, v144 >> 1);
  if ( (v144 & 1) != 0 )
    v143[v144 - 1] = 1;
  KeInitializeDpc((PRKDPC)(DeviceExtension + 1384), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObjecta);
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
  *((_DWORD *)DeviceExtension + 681) = 49156;
  if ( *(_DWORD *)(v10 + 28) >= 0xB003u
    && !(unsigned __int8)ExQueryFastCacheDevLicense(v145)
    && !DeviceExtension[1154]
    && !DeviceExtension[480] )
  {
    v146 = *((_DWORD *)DeviceExtension + 281);
    if ( v146 == 4098 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Amd__private_reporting,
        0x12C31E0u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v184);
      v146 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v146 == 4318 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Nvidia__private_reporting,
        0x12C31ECu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v184);
      v146 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v146 == 32902 )
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_reporting,
        0x12C31D3u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v184);
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v147 = DpiFdoInitializeFdo(DeviceObjecta);
      started = v147;
      if ( v147 < 0 )
        goto LABEL_95;
      v195 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)DeviceObjecta->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_228:
  KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 126) )
    {
      v148 = DpiLdaLinkDeviceToChain(DeviceObjecta);
      started = v148;
      if ( v148 < 0 )
      {
        v151 = WdLogNewEntry5_WdError(v150, v149);
        *(_QWORD *)(v151 + 24) = started;
        WdLogEvent5_WdError(v151);
        v58 = 0;
        goto LABEL_271;
      }
    }
  }
  v152 = *(char ***)(v10 + 64);
  if ( *v152 != (char *)(v10 + 56) )
    goto LABEL_279;
  *(_QWORD *)DeviceExtension = v10 + 56;
  *((_QWORD *)DeviceExtension + 1) = v152;
  *v152 = DeviceExtension;
  *(_QWORD *)(v10 + 64) = DeviceExtension;
  ++*(_DWORD *)(v10 + 128);
  v58 = 1;
  if ( !*((_QWORD *)DeviceExtension + 21) )
  {
    v153 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    v157 = 0LL;
    *((_QWORD *)DeviceExtension + 21) = v153;
    if ( !v153 )
    {
LABEL_235:
      LODWORD(started) = -1073741801;
      v158 = WdLogNewEntry5_WdLowResource(v157, v154, v155, v156);
      *(_QWORD *)(v158 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v158);
      goto LABEL_273;
    }
    v153[26] = 1;
    *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
    v159 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    started = v159;
    if ( v159 < 0 )
    {
      v162 = WdLogNewEntry5_WdError(v161, v160);
      *(_QWORD *)(v162 + 24) = started;
LABEL_238:
      WdLogEvent5_WdError(v162);
      goto LABEL_271;
    }
    v196 = 1;
  }
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
  if ( v6 )
  {
    if ( !*((_QWORD *)v6 + 182) )
    {
      v163 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 182) = v163;
      if ( !v163 )
        goto LABEL_235;
      v163[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 182));
    }
    if ( !*((_QWORD *)v6 + 183) )
    {
      v164 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 183) = v164;
      if ( !v164 )
        goto LABEL_235;
      v164[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 183));
    }
    *((_DWORD *)v6 + 368) = 0;
    memset(v6 + 1480, 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
  *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
  v24 = 0;
  if ( v6 )
  {
    *((_QWORD *)v6 + 17) = DpiFdoDispatchPower;
    if ( v6[1152] )
    {
      *(_BYTE *)(*((_QWORD *)v6 + 21) + 108LL) = 1;
      AcquireMiniportListMutex();
      if ( qword_1C00AFCB8 && qword_1C00AFCB8 != qword_1C00AFCC0 )
      {
        v169 = WdLogNewEntry5_WdError(v168, v167);
        *(_QWORD *)(v169 + 24) = DeviceObjecta;
        *(_QWORD *)(v169 + 32) = (int)started;
        WdLogEvent5_WdError(v169);
      }
      qword_1C00AFCB8 = (__int64)DeviceObjecta;
      v170 = *((_QWORD *)v6 + 6);
      v208 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(v10, v170, &v208);
      _InterlockedExchange64(&qword_1C00AFA50, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (int)started < 0 )
      {
        v162 = WdLogNewEntry5_WdError(v166, v165);
        *(_QWORD *)(v162 + 24) = *(_QWORD *)(v10 + 1144);
        *(_QWORD *)(v162 + 32) = started;
        goto LABEL_238;
      }
      if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
      {
        v165 = 1LL;
        v166 = HIDWORD(v208) >> 1;
        LOBYTE(v166) = (v208 & 0x200000000LL) != 0;
        v6[2741] = BYTE4(v208) & 1;
        v6[2742] = v166;
      }
    }
  }
  if ( v185 && v191 )
  {
    qword_1C00AFCC0 = (__int64)DeviceObjecta;
    if ( !qword_1C00AFCB8 )
      qword_1C00AFCB8 = (__int64)DeviceObjecta;
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
      || byte_1C00AFA13 )
    {
      *(_WORD *)(v6 + 2741) = 257;
    }
  }
  DeviceObjecta->Flags |= 4u;
  DeviceObjecta->Flags |= 0x2000u;
  DeviceObjecta->Flags &= ~0x4000u;
  DeviceObjecta->Flags &= ~0x80u;
  v171 = WdLogNewEntry5_WdEvent(v166, v165);
  *(_QWORD *)(v171 + 24) = DeviceObjecta;
  WdLogEvent5_WdEvent(v171);
LABEL_271:
  if ( (int)started >= 0 )
    goto LABEL_291;
  if ( v58 == 1 )
  {
LABEL_273:
    v25 = (struct _KMUTANT *)(v10 + 72);
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v173 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v174 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v174 == DeviceExtension )
      {
        *v174 = v173;
        v173[1] = v174;
        --*(_DWORD *)(v10 + 128);
        if ( v6 && *((_DWORD *)v6 + 126) )
          DpiLdaUnLinkDeviceFromChain(DeviceObjecta);
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        goto LABEL_21;
      }
    }
LABEL_279:
    __fastfail(3u);
  }
LABEL_20:
  v25 = (struct _KMUTANT *)(v10 + 72);
LABEL_21:
  if ( v24 == 1 )
    KeReleaseMutex(v25, 0);
  if ( DeviceObjecta )
  {
    if ( v195 == 1 )
      DpiFdoResetFdo(DeviceObjecta);
    if ( v6 )
    {
      v26 = (_DWORD *)*((_QWORD *)v6 + 182);
      if ( v26 && v26[2] == 1 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v6 + 182) = 0LL;
      }
      v27 = (_DWORD *)*((_QWORD *)v6 + 183);
      if ( v27 && v27[2] == 1 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v6 + 183) = 0LL;
      }
      if ( (_BYTE)v202 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObjecta);
      v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 73);
      if ( v28 )
      {
        v28(*((_QWORD *)v6 + 71));
        memset(v6 + 560, 0, 0x40uLL);
      }
      v29 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 81);
      if ( v29 )
      {
        v29(*((_QWORD *)v6 + 79));
        *((_OWORD *)v6 + 39) = 0LL;
        *((_OWORD *)v6 + 40) = 0LL;
        *((_OWORD *)v6 + 41) = 0LL;
      }
      v30 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 87);
      if ( v30 )
      {
        v30(*((_QWORD *)v6 + 85));
        memset(v6 + 672, 0, 0xB8uLL);
      }
      v31 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 110);
      if ( v31 )
      {
        v31(*((_QWORD *)v6 + 108));
        memset(v6 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 33);
      v32 = (void *)*((_QWORD *)v6 + 139);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *((_QWORD *)v6 + 139) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v33 = *((_QWORD *)DeviceExtension + 21);
      if ( v33 )
      {
        if ( v196 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v33);
          v33 = *((_QWORD *)DeviceExtension + 21);
        }
        if ( *(_DWORD *)(v33 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v34 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v34 )
        IoDetachDevice(v34);
    }
    IoDeleteDevice(DeviceObjecta);
    DeviceObjecta = 0LL;
  }
  if ( v197 == 1 )
  {
    DpiDxgkDdiRemoveDevice(v10, v205);
    v35 = v186;
  }
  else
  {
    v35 = v186;
    if ( !v186 )
      goto LABEL_291;
    if ( *(_QWORD *)(v10 + 1344) )
    {
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL);
      v176 = DiagnosticInfoArgs;
      if ( DiagnosticInfoArgs )
      {
        v177 = *(_DWORD *)(DiagnosticInfoArgs + 216);
        v178 = TargetDevice;
        *(_QWORD *)DiagnosticInfoArgs = v205;
        if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v10 + 1344))(v178, DiagnosticInfoArgs) >= 0 )
        {
          if ( *(_DWORD *)(v176 + 220) > v177 )
            *(_DWORD *)(v176 + 220) = 0;
          DxgCreateLiveDumpWithDriverBlob(
            v178,
            0x1B0u,
            *(int *)(v176 + 8),
            (int)started,
            0LL,
            0LL,
            (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v176);
          v35 = 0;
        }
        DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v176);
      }
    }
  }
  if ( v35 && (_DWORD)started != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL, 0);
LABEL_291:
  memset(v227, 0, sizeof(v227));
  v230 = 0;
  v179 = DxgkDiagCalcDuration1us(&v220);
  v226[0] = 6;
  v232 = v199;
  v226[1] = 64;
  v229 = 0;
  v228 = 0LL;
  memset(v227, 0, sizeof(v227));
  v231 = 34;
  v233 = v179;
  v234 = started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v226, 0x100000000LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    *(_DWORD *)Exclusive = started;
    McTemplateK0ppq_EtwWriteTransfer(
      v180,
      &EventExitDpiAddDevice,
      v181,
      DriverObject,
      TargetDevice,
      *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
