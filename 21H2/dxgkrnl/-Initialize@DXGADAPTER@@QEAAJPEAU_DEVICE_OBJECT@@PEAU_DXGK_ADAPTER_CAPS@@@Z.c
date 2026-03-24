/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183448 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00068E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007C88 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00099E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B71C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0021C20 (--0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C0021C9C (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C0021CE0 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C0024A48 (Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C0024AAC (Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0112254 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C012A308 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017BCA8 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C01837D8 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C01842D4 (DpiReadPnpRegistryValue.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0185F78 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C0186018 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01862B0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0186364 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C018670C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C0186C74 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0186CE8 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C0187C7C (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C0187CC0 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0187DA0 (DpiGetAdapterInfo.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C018942C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019B53C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C019E0F0 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019FE44 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C020B874 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020D86C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0210044 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  char v6; // r13
  __int64 v7; // rax
  struct _ERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct _ERESOURCE *v27; // rax
  NTSTATUS v28; // eax
  int v29; // ebx
  _BYTE *DeviceExtension; // rax
  int v31; // eax
  const struct _GUID *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int16 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int AdapterInfo; // eax
  __int64 v41; // r14
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r15d
  unsigned __int8 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int PnpRegistryValue; // eax
  __int64 v63; // r8
  int v64; // ecx
  char v65; // al
  int v66; // eax
  _DWORD *v67; // r14
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v75; // r12
  __int64 v76; // rax
  bool IsBddFallbackDriver; // cf
  SIZE_T v78; // rax
  char *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // r8
  unsigned int v89; // eax
  __int64 v90; // r9
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // eax
  __int64 DisplayCore; // rdi
  unsigned int v100; // edx
  int v101; // eax
  SIZE_T v102; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v107; // r14
  __int64 v108; // rax
  __int64 v109; // rdx
  DXGADAPTER *v110; // rcx
  __int64 v111; // rax
  unsigned int v112; // eax
  bool v113; // zf
  unsigned int v114; // r13d
  int v115; // eax
  __int64 v116; // rdx
  char v117; // al
  __int64 v118; // rcx
  int v119; // eax
  int v120; // ecx
  char v121; // dl
  char v122; // dl
  char v123; // dl
  bool IsComputeOnlyAdapter; // al
  __int64 v125; // rdx
  unsigned int v126; // r9d
  __int64 v127; // r10
  char v128; // r8
  char v129; // r8
  __int64 v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v134; // rax
  struct DXGGLOBAL *v135; // rax
  char v136; // r9
  char v137; // r8
  __int64 v138; // rcx
  __int64 v139; // rcx
  unsigned int v140; // edi
  DXGGLOBAL *v141; // rax
  int v142; // eax
  __int64 v143; // rdx
  _DWORD *v144; // rcx
  __int64 v145; // rax
  __int64 *v146; // r14
  int RenderCore; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rax
  char v155; // dl
  char v156; // cl
  __int64 v157; // rdx
  DXGADAPTER *v158; // rcx
  int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // rdx
  int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  DXGGLOBAL *v169; // rax
  int v170; // eax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  int v176; // eax
  MOCKDRIVERSTATE *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  MOCKDRIVERSTATE *v180; // rax
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rbx
  struct DXGGLOBAL *v187; // rax
  __int64 v188; // rbx
  int v189; // eax
  struct DXGGLOBAL *v190; // rax
  __int64 v191; // rdx
  DXGGLOBAL *v192; // rax
  void *v193; // [rsp+28h] [rbp-B1h]
  unsigned int v194; // [rsp+30h] [rbp-A9h] BYREF
  int v195; // [rsp+34h] [rbp-A5h] BYREF
  int v196; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v197; // [rsp+40h] [rbp-99h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v198; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v199[4]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v200[16]; // [rsp+88h] [rbp-51h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v201; // [rsp+98h] [rbp-41h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v202; // [rsp+C8h] [rbp-11h] BYREF
  unsigned int v204; // [rsp+158h] [rbp+7Fh] BYREF

  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, DeviceObject);
    *(_QWORD *)(v7 + 24) = 6474LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v8 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 21) = v8;
  if ( !v8 )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v14 = ExInitializeResourceLite(v8);
  v18 = v14;
  if ( v14 < 0 )
    goto LABEL_8;
  *((_QWORD *)this + 27) = DeviceObject;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 28) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v21 = DXGGLOBAL::AcquireAdapterOrdinal(*((struct _RTL_BITMAP **)this + 2));
  *((_DWORD *)this + 58) = v21;
  if ( v21 == -1 )
    return 3221225495LL;
  LODWORD(v18) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4316));
  if ( (int)v18 < 0 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = 6533LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)v18;
  }
  v27 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 33) = v27;
  if ( !v27 )
    goto LABEL_5;
  v28 = ExInitializeResourceLite(v27);
  v18 = v28;
  if ( v28 < 0 )
  {
LABEL_8:
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v18;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v29 = 0;
  *((_QWORD *)this + 5) = -1LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v196 = 0;
  if ( DeviceExtension[481] )
  {
    v31 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v196);
    v18 = v31;
    if ( v31 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v36 + 24) = v18;
      *(_QWORD *)(v36 + 32) = 6580LL;
LABEL_19:
      WdLogEvent5_WdError(v36);
      return (unsigned int)v18;
    }
    v29 = v196;
  }
  else
  {
    AdapterInfo = DpiGetAdapterInfo(DeviceObject, (char *)this + 1392, (char *)this + 272, (char *)this + 1880);
    v41 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v42 + 24) = this;
      *(_QWORD *)(v42 + 32) = v41;
      WdLogEvent5_WdWarning(v42);
      return (unsigned int)v41;
    }
  }
  v37 = *((_DWORD *)this + 87);
  if ( (v37 & 0x200) != 0 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v33, (__int64)v32) + 304320) = 1;
    v37 = *((_DWORD *)this + 87);
  }
  if ( (v37 & 8) != 0 && (v37 & 0x10) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v33, v32);
    *(_QWORD *)(v38 + 24) = 6610LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !*((_QWORD *)this + 45) )
  {
    v39 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v39 + 24) = 6617LL;
LABEL_28:
    WdLogEvent5_WdError(v39);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 62) )
    *((_QWORD *)this + 62) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 123) )
    *((_QWORD *)this + 123) = W32kStub_GreSfmOpenTokenEvent;
  v43 = DXGADAPTER::CallDriverQueryInterface(this, v32, v34, v35, (char *)this + 1688, v193);
  v48 = v43;
  if ( v43 < 0 )
  {
    v49 = WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = v48;
LABEL_39:
    memset((char *)this + 1688, 0, 0xB8uLL);
    goto LABEL_40;
  }
  if ( *((_WORD *)this + 845) < 4u )
    goto LABEL_39;
LABEL_40:
  v50 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v51 = *(_DWORD *)(*(_QWORD *)(v50 + 40) + 28LL);
  *((_DWORD *)this + 468) = v51;
  if ( v51 >= 0x7000 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v52 = 0;
LABEL_48:
    DXGADAPTER::SetModeBehavior(this, v44, v52);
    goto LABEL_49;
  }
  if ( v51 >= 0x6002 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v52 = 1;
    goto LABEL_48;
  }
LABEL_49:
  if ( v51 - 20480 <= 5 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v50, v44);
    v53[3] = 6692LL;
LABEL_51:
    WdLogEvent5_WdError(v53);
    return 3221225485LL;
  }
  *(_QWORD *)&v198.Type = 1LL;
  *(_QWORD *)&v198.InputDataSize = 0LL;
  v198.pOutputData = (char *)this + 1992;
  *(_OWORD *)&v198.OutputDataSize = 0LL;
  v198.pInputData = 0LL;
  v198.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v51);
  if ( !v198.OutputDataSize )
    return 3221225485LL;
  v55 = DXGADAPTER::DdiQueryAdapterInfo(this, &v198, v54);
  v41 = v55;
  if ( v55 < 0 )
  {
    v58 = WdLogNewEntry5_WdError(v57, v56);
    *(_QWORD *)(v58 + 24) = v41;
    WdLogEvent5_WdError(v58);
    return (unsigned int)v41;
  }
  v59 = *((unsigned int *)this + 582);
  if ( (int)v59 > 9472 && *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v59, v56);
    v60 = *((int *)this + 582);
LABEL_59:
    v53[3] = v60;
    goto LABEL_51;
  }
  if ( (int)v59 < 4864 )
  {
    if ( *((_QWORD *)this + 92) )
    {
      *((_DWORD *)this + 649) = 1300;
    }
    else if ( (_DWORD)v59 == 4608 )
    {
      *((_DWORD *)this + 649) = 1200;
    }
    else if ( *((_QWORD *)this + 88) && (*((_DWORD *)this + 511) & 4) != 0 )
    {
      *((_DWORD *)this + 649) = 1105;
    }
    else
    {
      *((_DWORD *)this + 649) = 1000;
    }
  }
  else
  {
    *((_DWORD *)this + 649) = DxgkConvertWddmVersionToD3DKMTDriverVersion(v59);
  }
  v61 = *((_QWORD *)this + 27);
  v195 = 0;
  PnpRegistryValue = DpiReadPnpRegistryValue(v61, L"ACGSupported", (char *)&v195, 4u, 2u);
  v64 = v195;
  if ( PnpRegistryValue < 0 )
    v64 = 0;
  v195 = v64;
  if ( v64 || (v65 = 0, *((int *)this + 649) >= 2200) )
    v65 = 1;
  *((_BYTE *)this + 212) = v65;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 515) &= 0xFFFFD3FF;
    *((_DWORD *)this + 642) &= 0xFFFFFFEB;
    *((_BYTE *)this + 2532) = 0;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 511) &= ~0x100000u;
  }
  else if ( v51 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v66 = *((_DWORD *)this + 87);
      if ( (v66 & 4) == 0 && (v66 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 515) |= 0x400u;
    }
  }
  v67 = (_DWORD *)((char *)this + 2576);
  *((_DWORD *)this + 644) = 0;
  if ( v51 >= 0x5010 && !*((_BYTE *)this + 209) )
  {
    *(_QWORD *)&v202.Type = 16LL;
    *(_QWORD *)&v202.InputDataSize = 0LL;
    *(_QWORD *)&v202.Flags.0 = 0LL;
    HIDWORD(v202.hKmdProcessHandle) = 0;
    v202.pInputData = 0LL;
    v202.pOutputData = (char *)this + 2576;
    v202.OutputDataSize = 4;
    v68 = DXGADAPTER::DdiQueryAdapterInfo(this, &v202, v63);
    if ( v68 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v70, v69, v71, v72) + 24) = v68;
      *v67 = 0;
      if ( *((int *)this + 582) >= 8704 )
        *v67 |= 2u;
    }
    v73 = *((unsigned int *)this + 582);
    v74 = (unsigned int)*v67;
    if ( (int)v73 >= 9472 )
    {
      if ( (v74 & 0xC) == 0xC )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
        v53[3] = this;
        v53[4] = 6853LL;
        goto LABEL_51;
      }
    }
    else
    {
      LODWORD(v74) = v74 & 0xFFFFFFF3;
      *v67 = v74;
    }
    if ( (int)v73 < 9984 )
      *v67 = v74 & 0xFFFFFFEF;
  }
  v75 = *((unsigned int *)this + 70);
  v76 = 360 * v75;
  if ( !is_mul_ok(v75, 0x168uLL) )
    v76 = -1LL;
  IsBddFallbackDriver = __CFADD__(v76, 8LL);
  v78 = v76 + 8;
  if ( IsBddFallbackDriver )
    v78 = -1LL;
  v79 = (char *)operator new[](v78, 0x4B677844u, (POOL_TYPE)512);
  if ( v79 )
  {
    v84 = v79 + 8;
    *(_QWORD *)v79 = v75;
    `vector constructor iterator'(
      v79 + 8,
      360LL,
      (unsigned int)v75,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v84 = 0LL;
  }
  *((_QWORD *)this + 323) = v84;
  if ( !v84 )
  {
    v85 = WdLogNewEntry5_WdLowResource(v81, v80, v82, v83);
    *(_QWORD *)(v85 + 24) = 6870LL;
    WdLogEvent5_WdLowResource(v85);
    return 3221225495LL;
  }
  memset(v84, 0, 360 * v75);
  if ( *((int *)this + 582) < 0x2000 || v51 < 0x5005 )
  {
    v6 = 1;
  }
  else
  {
    v87 = 0LL;
    *((_DWORD *)this + 648) = 0;
    v89 = 0;
    v204 = 0;
    if ( (_DWORD)v75 )
    {
      v90 = *((_QWORD *)this + 323);
      v88 = 0LL;
      while ( 1 )
      {
        *(_QWORD *)&v201.Flags.0 = 0LL;
        HIDWORD(v201.hKmdProcessHandle) = 0;
        v201.pInputData = &v204;
        *(_QWORD *)&v201.Type = 15LL;
        *(_QWORD *)&v201.InputDataSize = 4LL;
        v201.pOutputData = (void *)(v90 + 360LL * (unsigned int)v88);
        v201.OutputDataSize = v51 < 0xC003 ? (v51 < 0x6000 ? 20 : 24) : 32;
        v91 = DXGADAPTER::DdiQueryAdapterInfo(this, &v201, v88);
        v94 = v91;
        if ( v91 < 0 )
          break;
        if ( v51 >= 0xC003 )
        {
          v95 = *((_QWORD *)this + 323);
          v96 = 360LL * v204;
          if ( (*(_DWORD *)(v96 + v95 + 16) & 0x20) != 0 )
          {
            if ( *(_DWORD *)(v96 + v95 + 24) >= (unsigned int)*(unsigned __int16 *)(v96 + v95) )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v96, v95);
              v53[3] = this;
              v53[4] = *(unsigned int *)(360LL * v204 + *((_QWORD *)this + 323) + 24);
              v53[5] = *(unsigned __int16 *)(360LL * v204 + *((_QWORD *)this + 323));
              goto LABEL_51;
            }
            if ( (*((_DWORD *)this + 515) & 0x2000) == 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v96, v95);
              v53[3] = this;
              v53[4] = 6936LL;
              goto LABEL_51;
            }
          }
        }
        v90 = *((_QWORD *)this + 323);
        v87 = 360LL * v204;
        v86 = *(unsigned __int16 *)(v87 + v90);
        v89 = v86 + *((_DWORD *)this + 648);
        v88 = ++v204;
        *((_DWORD *)this + 648) = v89;
        if ( (unsigned int)v88 >= (unsigned int)v75 )
          goto LABEL_135;
      }
      v97 = WdLogNewEntry5_WdEvent(v93, v92);
      *(_QWORD *)(v97 + 24) = v94;
      WdLogEvent5_WdEvent(v97);
      v6 = 1;
    }
    else
    {
LABEL_135:
      if ( *((int *)this + 649) <= 2400 && v89 > 0x40 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
        v53[3] = this;
        v53[4] = 64LL;
        v53[5] = *((unsigned int *)this + 648);
        goto LABEL_51;
      }
      if ( (*((_DWORD *)this + 514) & 1) == 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
        v53[3] = this;
        v53[4] = 6958LL;
        goto LABEL_51;
      }
    }
    if ( (*((_DWORD *)this + 515) & 0x800) != 0 )
    {
      v194 = 0;
      if ( (_DWORD)v75 )
      {
        do
        {
          v197 = 0LL;
          v198.pInputData = &v194;
          v198.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
          v198.pOutputData = &v197;
          v198.InputDataSize = 4;
          v198.OutputDataSize = 8;
          v98 = DXGADAPTER::DdiQueryAdapterInfo(this, &v198, v88);
          DisplayCore = v98;
          if ( v98 < 0 )
            goto LABEL_141;
          if ( (v197 & 0xFFF) != 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
            v60 = v197;
            goto LABEL_59;
          }
          *(_QWORD *)(360LL * v194 + *((_QWORD *)this + 323) + 56) = v197;
          v100 = v194;
          v88 = *(_QWORD *)(360LL * v194 + *((_QWORD *)this + 323) + 56);
          if ( v88 )
          {
            result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v194, v88);
            if ( (int)result < 0 )
              return result;
            v100 = v194;
          }
          v194 = v100 + 1;
        }
        while ( v100 + 1 < (unsigned int)v75 );
      }
      v198.InputDataSize = 0;
      v198.pInputData = 0LL;
      v198.pOutputData = v199;
      v198.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
      *(_OWORD *)v199 = 0LL;
      v198.OutputDataSize = 16;
      v101 = DXGADAPTER::DdiQueryAdapterInfo(this, &v198, v88);
      DisplayCore = v101;
      if ( v101 < 0 )
      {
LABEL_141:
        v108 = WdLogNewEntry5_WdError(v87, v86);
        *(_QWORD *)(v108 + 24) = DisplayCore;
        goto LABEL_142;
      }
      if ( v199[0] )
      {
        v102 = 16LL * v199[0];
        if ( !is_mul_ok(v199[0], 0x10uLL) )
          v102 = -1LL;
        v103 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new[](v102, 0x4B677844u, PagedPool);
        v107 = v103;
        if ( !v103 )
        {
          v108 = WdLogNewEntry5_WdError(v105, v104);
          *(_QWORD *)(v108 + 24) = v199[0];
LABEL_142:
          WdLogEvent5_WdError(v108);
          return (unsigned int)DisplayCore;
        }
        *(_QWORD *)&v199[2] = v103;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v198, v106) < 0 )
        {
          v111 = WdLogNewEntry5_WdAssertion(v110, v109);
          *(_QWORD *)(v111 + 24) = 7027LL;
          WdLogEvent5_WdAssertion(v111);
        }
        LODWORD(DisplayCore) = DXGADAPTER::ValidateHardwareReservedRanges(v110, v107, v199[0]);
        if ( (int)DisplayCore < 0 )
        {
          operator delete[](v107);
          return (unsigned int)DisplayCore;
        }
        v112 = v199[0];
        *((_QWORD *)this + 547) = v107;
        v67 = (_DWORD *)((char *)this + 2576);
        *((_DWORD *)this + 1093) = v112;
      }
    }
  }
  v113 = v6 == 0;
  v114 = v75;
  if ( !v113 && (_DWORD)v75 )
  {
    v86 = 0LL;
    do
    {
      *(_WORD *)(v86 + *((_QWORD *)this + 323)) = *((_WORD *)this + 1034);
      v86 += 360LL;
      *(_DWORD *)(*((_QWORD *)this + 323) + v86 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v86 - 344) ^ (*((_DWORD *)this + 515) >> 7)) & 1;
      *(_DWORD *)(*((_QWORD *)this + 323) + v86 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v86 - 344) ^ (*((_DWORD *)this + 515) >> 5)) & 2;
      *(_WORD *)(*((_QWORD *)this + 323) + v86 - 358) = *((_WORD *)this + 1032);
      v87 = *((_QWORD *)this + 323);
      *(_QWORD *)(v87 + v86 - 352) = *((_QWORD *)this + 27);
      --v75;
    }
    while ( v75 );
  }
  if ( *((int *)this + 649) >= 2400 )
  {
    if ( *((_DWORD *)this + 642) >= 0x20u )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
      v53[3] = 7065LL;
      goto LABEL_51;
    }
    *((_BYTE *)this + 2650) = *((_BYTE *)this + 2568) & 1;
  }
  v115 = *((_DWORD *)this + 642);
  if ( (v115 & 0x10) != 0 && !*((_QWORD *)this + 167) )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
    v53[3] = 7076LL;
    goto LABEL_51;
  }
  if ( *((_BYTE *)this + 2796) )
    *((_DWORD *)this + 642) = v115 & 0xFFFFFFEF;
  if ( v51 >= 0x3001 )
  {
    v119 = *((_DWORD *)this + 582);
    if ( v119 != 4096
      && v119 != 4608
      && v119 != 4864
      && v119 != 0x2000
      && v119 != 8448
      && v119 != 8704
      && v119 != 8960
      && v119 != 9216
      && v119 != 9472
      && v119 != 9728
      && v119 != 9984 )
    {
      v39 = WdLogNewEntry5_WdError(v87, v86);
      *(_QWORD *)(v39 + 24) = *((int *)this + 582);
      goto LABEL_28;
    }
  }
  else
  {
    *((_DWORD *)this + 582) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v87, v86) + 760) || (v117 = 1, (*((_DWORD *)this + 87) & 8) != 0) )
    v117 = 0;
  *((_BYTE *)this + 2608) = v117;
  if ( v117 )
  {
    v118 = *((unsigned int *)this + 582);
    if ( (int)v118 < 4608
      && (*((_DWORD *)this + 630)
       || *((_DWORD *)this + 631)
       || *((_BYTE *)this + 2528)
       || *((_BYTE *)this + 2529)
       || *((_BYTE *)this + 2530)
       || (*((_DWORD *)this + 511) & 0x10000000) != 0
       || (*((_DWORD *)this + 514) & 0x14) != 0
       || *((_BYTE *)this + 2531)
       || *((_BYTE *)this + 2533)
       || *((_BYTE *)this + 2534)) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116);
      v53[3] = 7155LL;
      goto LABEL_51;
    }
    if ( (int)v118 < 4864
      && ((*((_DWORD *)this + 513) & 0x10) != 0
       || (*((_DWORD *)this + 515) & 0x10) != 0
       || *((_BYTE *)this + 2535)
       || *((_DWORD *)this + 634)) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116);
      v53[3] = 7170LL;
      goto LABEL_51;
    }
    if ( (int)v118 < 0x2000 && *((_BYTE *)this + 2540) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116);
      v53[3] = 7198LL;
      goto LABEL_51;
    }
  }
  if ( v51 < 0x4000 )
  {
    *((_DWORD *)this + 515) &= ~0x10u;
    *((_BYTE *)this + 2535) = 0;
  }
  if ( v51 < 0x5011 )
  {
    v120 = *((_DWORD *)this + 87);
    if ( (v120 & 1) != 0 && (*((_DWORD *)this + 515) & 0x10) != 0 && (v120 & 0x1000) != 0 )
      *((_BYTE *)this + 2540) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2528))) & 4;
  v121 = *(_BYTE *)a3 & 0xF7 | (*((_BYTE *)this + 2534) != 0 ? 8 : 0);
  *(_BYTE *)a3 = v121;
  v122 = (v121 ^ (32 * (*((_DWORD *)this + 515) >> 4))) & 0x20 ^ v121;
  *(_BYTE *)a3 = v122;
  v123 = (v122 ^ (*((_BYTE *)this + 2535) << 6)) & 0x40 ^ v122;
  *(_BYTE *)a3 = v123;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 507);
  *(_BYTE *)a3 = v123 & 0x7F | (*(_BYTE *)v67 << 7);
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2540)) & 1;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 582);
  IsComputeOnlyAdapter = DXGADAPTER::IsComputeOnlyAdapter(this);
  v129 = v128 & 0xEF;
  *(_BYTE *)a3 = v129;
  LOBYTE(v130) = v125 ^ (v125 ^ (32 * IsComputeOnlyAdapter)) & 0x20;
  *((_BYTE *)a3 + 1) = v130;
  if ( v51 >= 0x5021 )
  {
    v129 |= 16 * (*((_BYTE *)this + 2560) & 1);
    *(_BYTE *)a3 = v129;
  }
  if ( *((_BYTE *)this + 209) == (_BYTE)v127 )
  {
    LOBYTE(v125) = v129 & 0x40;
    if ( (v129 & 0x40) != 0 )
    {
      if ( v51 < 0x5005 && (*((_DWORD *)this + 362) != (_DWORD)v127 || *((_DWORD *)this + 363) != (_DWORD)v127) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
        v60 = *((_QWORD *)this + 27);
        goto LABEL_59;
      }
      LOBYTE(v130) = v130 ^ (v130 ^ (2 * *((_BYTE *)this + 2563))) & 2;
      *((_BYTE *)a3 + 1) = v130;
    }
    LOBYTE(v130) = v130 & 1;
    if ( ((_BYTE)v125 || (_BYTE)v130) && (v129 & 0x20) == 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = *((_QWORD *)this + 27);
      v53[4] = 7277LL;
      goto LABEL_51;
    }
    if ( (_BYTE)v125 )
    {
      if ( (_BYTE)v130 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
        v53[3] = *((_QWORD *)this + 27);
        v53[4] = 7284LL;
        goto LABEL_51;
      }
    }
    else if ( (_BYTE)v130 && *((_DWORD *)this + 363) == (_DWORD)v127 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = *((_QWORD *)this + 27);
      v53[4] = 7292LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2530) != (_BYTE)v127
      && (*((_QWORD *)this + 89) == v127 || *((_QWORD *)this + 90) == v127 || *((_QWORD *)this + 91) == v127) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7306LL;
      goto LABEL_51;
    }
    if ( (*((_DWORD *)this + 511) & 4) != 0 && *((_QWORD *)this + 88) == v127 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7313LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2533) != (_BYTE)v127 && (*((_QWORD *)this + 93) == v127 || *((_QWORD *)this + 94) == v127) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7321LL;
      goto LABEL_51;
    }
    if ( v51 < 0x300C && *((_QWORD *)this + 93) != v127 && *((_QWORD *)this + 94) != v127 )
      *((_BYTE *)this + 2533) = 1;
  }
  *((_WORD *)this + 1305) = v127;
  *((_BYTE *)this + 2612) = v127;
  if ( *((_BYTE *)this + 2532) != (_BYTE)v127 )
  {
    if ( v51 < 0x300B )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7343LL;
      goto LABEL_51;
    }
    if ( v51 >= v126 )
    {
      if ( v51 == v126 )
      {
        *((_BYTE *)this + 2611) = 1;
      }
      else
      {
        v131 = *((_DWORD *)this + 634);
        if ( !v131 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
          v53[3] = 7356LL;
          goto LABEL_51;
        }
        if ( v131 <= 8 )
        {
          if ( v51 > 0x5000 )
            *((_BYTE *)this + 2612) = 1;
        }
        else
        {
          v130 = *((unsigned int *)this + 582);
          if ( (int)v130 < 8704 )
          {
            if ( (int)v130 < 0x2000 || v131 != 10 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
              v53[3] = 7379LL;
              goto LABEL_51;
            }
            *((_DWORD *)this + 634) = 8;
          }
          else if ( v131 > 0xA )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
            v53[3] = 7366LL;
            goto LABEL_51;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2610) = 1;
    }
    v132 = *((_QWORD *)this + 97);
    if ( !v132 && *((_QWORD *)this + 113) == v127 && *((_QWORD *)this + 117) == v127 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7395LL;
      goto LABEL_51;
    }
    if ( v51 > 0x4002
      && *((_QWORD *)this + 101) == v127
      && *((_QWORD *)this + 112) == v127
      && *((_QWORD *)this + 116) == v127 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7407LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2531) == (_BYTE)v127 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v130, v125);
      v53[3] = 7417LL;
      goto LABEL_51;
    }
    if ( v132 )
    {
      Global = DXGGLOBAL::GetGlobal(v130, v125);
      DXGGLOBAL::RecordFeatureUsage(Global, 1LL, 1LL);
      v127 = 0LL;
    }
    if ( *((_QWORD *)this + 113) != v127 )
    {
      v134 = DXGGLOBAL::GetGlobal(v130, v125);
      DXGGLOBAL::RecordFeatureUsage(v134, 2LL, 1LL);
      v127 = 0LL;
    }
    if ( *((_QWORD *)this + 117) != v127 )
    {
      v135 = DXGGLOBAL::GetGlobal(v130, v125);
      DXGGLOBAL::RecordFeatureUsage(v135, 3LL, 1LL);
      v127 = 0LL;
    }
  }
  v136 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 2648) = v127;
  if ( v136 )
    goto LABEL_292;
  v137 = v127;
  if ( v51 >= 0x700A
    && *((int *)this + 582) >= 8704
    && (*((_QWORD *)this + 71) == v127 || *((_QWORD *)this + 137) != v127) )
  {
    *((_BYTE *)this + 2648) = 1;
    v137 = 1;
  }
  if ( *((int *)this + 582) < 8960 )
  {
LABEL_292:
    *((_DWORD *)this + 510) &= 0xFFFFFFE3;
  }
  else
  {
    v138 = (*((_DWORD *)this + 510) >> 3) & 1;
    v125 = (*((_DWORD *)this + 510) >> 2) & 1;
    if ( (unsigned int)v125 < (unsigned int)v138
      || (unsigned int)v138 < ((*((_DWORD *)this + 510) >> 4) & 1u)
      || !v137 && (_DWORD)v125 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v138, v125);
      v53[3] = *((_QWORD *)this + 27);
      v53[4] = -1073741811LL;
      goto LABEL_51;
    }
  }
  v139 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( *(_BYTE *)(*(_QWORD *)(v139 + 40) + 133LL) == (_BYTE)v127 && !v136 )
  {
    v140 = v127;
    LOBYTE(v140) = *((_DWORD *)this + 582) >= 0x2000;
    v141 = DXGGLOBAL::GetGlobal(v139, v125);
    v142 = DXGGLOBAL::DeferredInitialize(v141, v140);
    LOBYTE(v127) = 0;
    DisplayCore = v142;
    if ( v142 < 0 )
      goto LABEL_141;
  }
  DXGADAPTER::Config = v127;
  DXGADAPTER::ReadConfig(this, a3);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 325) ^= (v29 ^ **((_DWORD **)this + 325)) & 0x10000;
    v144 = (_DWORD *)*((_QWORD *)this + 325);
    *v144 ^= ((unsigned __int16)v29 ^ (unsigned __int16)*v144) & 0x8000;
  }
  if ( *((int *)this + 582) < 9216 )
    goto LABEL_301;
  v145 = *((_QWORD *)this + 159);
  if ( !*((_QWORD *)this + 158) )
  {
    if ( !v145 )
    {
LABEL_301:
      *((_QWORD *)this + 158) = W32kStub_UserRemoveWindowedSwapChain;
      *((_QWORD *)this + 159) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_302;
    }
LABEL_308:
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v144, v143);
    v53[3] = 7537LL;
    goto LABEL_51;
  }
  if ( !v145 )
    goto LABEL_308;
LABEL_302:
  result = DXGADAPTER::CheckMcdmDdiOverall(this, v143);
  if ( (int)result >= 0 )
  {
    DXGADAPTER::InitializeDriverDiagnosticReporting(this);
    v146 = (__int64 *)((char *)this + 2704);
    RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 338);
    v18 = RenderCore;
    if ( RenderCore < 0 )
    {
      if ( *v146 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v149, v148);
        *(_QWORD *)(v150 + 24) = 7560LL;
        WdLogEvent5_WdAssertion(v150);
      }
      v36 = WdLogNewEntry5_WdError(v149, v148);
      *(_QWORD *)(v36 + 24) = this;
      *(_QWORD *)(v36 + 32) = v18;
      goto LABEL_19;
    }
    DisplayCore = (int)ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 337);
    v153 = *((_QWORD *)this + 337);
    if ( (int)DisplayCore < 0 )
    {
      if ( v153 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v152, v151);
        *(_QWORD *)(v154 + 24) = 7582LL;
        WdLogEvent5_WdAssertion(v154);
      }
      v108 = WdLogNewEntry5_WdError(v152, v151);
      *(_QWORD *)(v108 + 24) = this;
      *(_QWORD *)(v108 + 32) = DisplayCore;
      goto LABEL_142;
    }
    if ( !*v146 && !v153 )
    {
      v39 = WdLogNewEntry5_WdError(v152, v151);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = -1073741735LL;
      goto LABEL_28;
    }
    v155 = *(_BYTE *)a3 & 0xFE | (v153 != 0);
    *(_BYTE *)a3 = v155;
    v156 = v155 & 0xFD | (*v146 != 0 ? 2 : 0);
    *(_BYTE *)a3 = v156;
    if ( (v156 & 1) != 0 )
      *((_BYTE *)a3 + 1) = *((_BYTE *)a3 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
    else
      *((_BYTE *)a3 + 1) &= ~4u;
    if ( !*v146 )
      *((_DWORD *)this + 511) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v159 = *((_DWORD *)this + 87);
      if ( (v159 & 4) == 0
        && (v159 & 8) == 0
        && v157
        && v51 >= 0x5008
        && (!*((_QWORD *)this + 102) || !*((_QWORD *)this + 114)) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v158, v157);
        v53[3] = 7638LL;
        goto LABEL_51;
      }
    }
    if ( *((_BYTE *)this + 2608)
      && DXGADAPTER::IsFullWDDMAdapter(v158)
      && *((int *)this + 582) >= 4608
      && !*((_BYTE *)this + 2531) )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v160, v157);
      v53[3] = 7653LL;
      goto LABEL_51;
    }
    if ( ((*((_BYTE *)this + 209) == 0) & *((_BYTE *)this + 2531)) != 0
      && (!v157
       || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v157 + 640) + 8LL) + 712LL))(*(_QWORD *)(v157 + 648))) )
    {
      *(_WORD *)((char *)this + 2531) = 0;
    }
    if ( *((_BYTE *)this + 209) )
      *((_QWORD *)this + 102) = 0LL;
    IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
    v162 = *((_DWORD *)this + 87);
    *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
    if ( (v162 & 0x10) != 0 && !*((_QWORD *)this + 337) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v200, v161);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v200);
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v164, v163) + 103) )
      {
        v167 = WdLogNewEntry5_WdError(v166, v165);
        *(_QWORD *)(v167 + 24) = this;
        *(_QWORD *)(v167 + 32) = -1073741735LL;
        WdLogEvent5_WdError(v167);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        *((_QWORD *)this + 4) = -1LL;
        v169 = DXGGLOBAL::GetGlobal(v166, v165);
        DXGGLOBAL::SetWarpAdapter(v169, this);
      }
      if ( v200[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v200, v168);
    }
    if ( !*((_BYTE *)this + 209) )
    {
      v170 = DXGADAPTER::InitializePowerManagement(this);
      DisplayCore = v170;
      if ( v170 >= 0 )
      {
LABEL_350:
        if ( *((_BYTE *)this + 2608) )
        {
          if ( *((int *)this + 582) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v176 = *((_DWORD *)this + 87);
            if ( (v176 & 4) == 0 && (v176 & 0x20) == 0 && (*((_DWORD *)this + 513) & 0x10) == 0 )
            {
              v53 = (_QWORD *)WdLogNewEntry5_WdError(v175, v174);
              v53[3] = 7734LL;
              goto LABEL_51;
            }
          }
        }
LABEL_357:
        if ( (*((_DWORD *)this + 87) & 0x10) != 0 )
          *((_BYTE *)this + 2651) = 1;
        if ( v51 >= 0xA008 )
        {
          *((_BYTE *)this + 2651) = 1;
          Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage();
        }
        v177 = (MOCKDRIVERSTATE *)operator new[](0xAB0uLL, 0x4B677844u, (POOL_TYPE)512);
        if ( v177 )
          v180 = MOCKDRIVERSTATE::MOCKDRIVERSTATE(v177, this);
        else
          v180 = 0LL;
        *((_QWORD *)this + 561) = v180;
        if ( !v180 )
        {
          v181 = WdLogNewEntry5_WdError(v179, v178);
          *(_QWORD *)(v181 + 24) = 7772LL;
          WdLogEvent5_WdError(v181);
          return 3221225495LL;
        }
        if ( *((int *)this + 649) >= 2600 && (*((_DWORD *)this + 642) & 8) != 0 )
          Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage();
        LODWORD(v18) = DXGADAPTER::InitializeVSyncPhaseState(this);
        if ( (int)v18 < 0 )
        {
          v26 = WdLogNewEntry5_WdLowResource(v183, v182, v184, v185);
          *(_QWORD *)(v26 + 24) = 7790LL;
          goto LABEL_13;
        }
        v186 = *v146;
        if ( *v146 && !*((_BYTE *)this + 209) )
        {
          v187 = DXGGLOBAL::GetGlobal(v183, v182);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v186 + 616) + 8LL) + 912LL))(
            *(_QWORD *)(v186 + 624),
            (__int64)v187 + 1216);
        }
        if ( (*((_DWORD *)this + 87) & 1) != 0 )
        {
          v188 = *(_QWORD *)((char *)this + 316);
          *((_QWORD *)DXGGLOBAL::GetGlobal(v183, v182) + 107) = v188;
        }
        if ( (int)DisplayCore < 0 )
          return (unsigned int)DisplayCore;
        if ( v114 <= 1 )
          goto LABEL_383;
        v189 = *((_DWORD *)this + 81);
        if ( v189 == 4318 )
        {
          v190 = DXGGLOBAL::GetGlobal(v183, v182);
          v191 = 7LL;
        }
        else
        {
          if ( v189 != 4098 )
          {
LABEL_383:
            v192 = DXGGLOBAL::GetGlobal(v183, v182);
            DXGGLOBAL::RecordFeatureUsageWddmVersion(v192, this);
            return (unsigned int)DisplayCore;
          }
          v190 = DXGGLOBAL::GetGlobal(v183, v182);
          v191 = 8LL;
        }
        DXGGLOBAL::RecordFeatureUsage(v190, v191, 1LL);
        goto LABEL_383;
      }
      v173 = WdLogNewEntry5_WdError(v172, v171);
      *(_QWORD *)(v173 + 24) = this;
      *(_QWORD *)(v173 + 32) = DisplayCore;
      WdLogEvent5_WdError(v173);
    }
    if ( (int)DisplayCore < 0 )
      goto LABEL_357;
    goto LABEL_350;
  }
  return result;
}
