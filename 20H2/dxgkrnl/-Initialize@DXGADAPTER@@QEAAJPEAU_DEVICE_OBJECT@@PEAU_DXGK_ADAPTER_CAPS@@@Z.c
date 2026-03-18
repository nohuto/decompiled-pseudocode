/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00079D8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B3CC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019694 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0021358 (--0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C00213F4 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C0021438 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C010FA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0125AD8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C0177AEC (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     DpiGetAdapterInfo @ 0x1C0177B64 (DpiGetAdapterInfo.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C01791EC (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C01792CC (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0179D94 (DpiReadPnpRegistryValue.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C017AE70 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C017AF10 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C017B1A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017B25C (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017B604 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C017BB6C (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C017BBE0 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017CB74 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019379C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0195C40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0195DE0 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0197CD4 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C020A990 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C020F164 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _ERESOURCE *v21; // rax
  NTSTATUS v22; // eax
  int v23; // ebx
  _BYTE *DeviceExtension; // rax
  int AdapterInfo; // eax
  const struct _GUID *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  int v31; // eax
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r15d
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int PnpRegistryValue; // eax
  __int64 v48; // r8
  int v49; // ecx
  char v50; // al
  _DWORD *v51; // r12
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v59; // r14
  __int64 v60; // rax
  __int64 v61; // r13
  bool IsBddFallbackDriver; // cf
  SIZE_T v63; // rax
  char *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned __int64 v72; // r8
  char v73; // al
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  char v77; // al
  char v78; // dl
  char v79; // dl
  char v80; // dl
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // r10d
  char v85; // r9
  char v86; // r9
  char v87; // r8
  char v88; // r8
  char v89; // r9
  char v90; // r8
  __int64 v91; // rcx
  unsigned int v92; // edi
  DXGGLOBAL *v93; // rax
  int v94; // eax
  __int64 v95; // rdi
  __int64 v96; // rdx
  _DWORD *v97; // rcx
  __int64 result; // rax
  __int64 *v99; // r14
  int RenderCore; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 *v103; // rbx
  int DisplayCore; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  char v108; // dl
  char v109; // cl
  __int64 v110; // rdx
  DXGADAPTER *v111; // rcx
  unsigned __int8 v112; // r8
  unsigned int v113; // eax
  __int64 v114; // r9
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rdx
  int v121; // eax
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  MOCKDRIVERSTATE *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  MOCKDRIVERSTATE *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rbx
  struct DXGGLOBAL *v134; // rax
  DXGGLOBAL *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  DXGGLOBAL *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rbx
  int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // eax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  _QWORD *v157; // rax
  __int64 v158; // rcx
  int v159; // eax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  int v163; // eax
  unsigned int v164; // edx
  int v165; // eax
  SIZE_T v166; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rdx
  DXGADAPTER *v174; // rcx
  __int64 v175; // rax
  unsigned int v176; // eax
  __int64 v177; // rcx
  unsigned int v178; // eax
  __int64 v179; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v181; // rax
  struct DXGGLOBAL *v182; // rax
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  int v189; // eax
  int v190; // eax
  struct DXGGLOBAL *v191; // rax
  __int64 v192; // rdx
  int v193; // [rsp+30h] [rbp-D0h]
  unsigned int v194; // [rsp+40h] [rbp-C0h] BYREF
  int v195; // [rsp+44h] [rbp-BCh] BYREF
  int v196; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v197; // [rsp+4Ch] [rbp-B4h]
  __int64 v198; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v199; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v200[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v201[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v202; // [rsp+A8h] [rbp-58h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v203; // [rsp+D8h] [rbp-28h] BYREF
  char v204; // [rsp+150h] [rbp+50h]
  unsigned int v206; // [rsp+168h] [rbp+68h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v146 = WdLogNewEntry5_WdAssertion(this, DeviceObject);
    *(_QWORD *)(v146 + 24) = 6474LL;
    WdLogEvent5_WdAssertion(v146);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v6 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 21) = v6;
  if ( !v6 )
    goto LABEL_195;
  v10 = ExInitializeResourceLite(v6);
  v14 = v10;
  if ( v10 < 0 )
  {
LABEL_198:
    v149 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v149 + 24) = this;
    *(_QWORD *)(v149 + 32) = v14;
    WdLogEvent5_WdWarning(v149);
    return (unsigned int)v14;
  }
  *((_QWORD *)this + 27) = DeviceObject;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 28) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v16 = DXGGLOBAL::AcquireAdapterOrdinal(*((struct _RTL_BITMAP **)this + 2));
  *((_DWORD *)this + 58) = v16;
  if ( v16 == -1 )
    return 3221225495LL;
  LODWORD(v14) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4316));
  if ( (int)v14 < 0 )
  {
    v151 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v151 + 24) = 6533LL;
LABEL_204:
    WdLogEvent5_WdLowResource(v151);
    return (unsigned int)v14;
  }
  v21 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 33) = v21;
  if ( !v21 )
  {
LABEL_195:
    v147 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v147 + 24) = this;
    *(_QWORD *)(v147 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v147);
    return 3221225495LL;
  }
  v22 = ExInitializeResourceLite(v21);
  v14 = v22;
  if ( v22 < 0 )
    goto LABEL_198;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v23 = 0;
  *((_QWORD *)this + 5) = -1LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v196 = 0;
  if ( DeviceExtension[481] )
  {
    v152 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v196);
    v14 = v152;
    if ( v152 < 0 )
    {
      v150 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v150 + 24) = v14;
      *(_QWORD *)(v150 + 32) = 6580LL;
LABEL_200:
      WdLogEvent5_WdError(v150);
      return (unsigned int)v14;
    }
    v23 = v196;
  }
  else
  {
    AdapterInfo = DpiGetAdapterInfo(
                    (__int64)DeviceObject,
                    (_DWORD *)this + 348,
                    (_QWORD *)this + 34,
                    (DXGADAPTER *)((char *)this + 1880));
    v30 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v153 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v153 + 24) = this;
      *(_QWORD *)(v153 + 32) = v30;
      WdLogEvent5_WdWarning(v153);
      return (unsigned int)v30;
    }
  }
  v31 = *((_DWORD *)this + 87);
  if ( (v31 & 0x200) != 0 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v27, (__int64)v26) + 304320) = 1;
    v31 = *((_DWORD *)this + 87);
  }
  if ( (v31 & 8) != 0 && (v31 & 0x10) != 0 )
  {
    v155 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v155 + 24) = 6610LL;
    WdLogEvent5_WdAssertion(v155);
  }
  if ( !*((_QWORD *)this + 45) )
  {
    v156 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v156 + 24) = 6617LL;
    goto LABEL_213;
  }
  if ( !*((_QWORD *)this + 62) )
    *((_QWORD *)this + 62) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 123) )
    *((_QWORD *)this + 123) = W32kStub_GreSfmOpenTokenEvent;
  v32 = DXGADAPTER::CallDriverQueryInterface((PDEVICE_OBJECT *)this, v26, v28, v29, (char *)this + 1688);
  v37 = v32;
  if ( v32 >= 0 )
  {
    if ( *((_WORD *)this + 845) >= 4u )
      goto LABEL_23;
  }
  else
  {
    v38 = WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = v37;
  }
  memset((char *)this + 1688, 0, 0xB8uLL);
LABEL_23:
  v39 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v40 = *(_DWORD *)(*(_QWORD *)(v39 + 40) + 28LL);
  *((_DWORD *)this + 468) = v40;
  if ( v40 >= 0x7000 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v112 = 0;
LABEL_122:
    DXGADAPTER::SetModeBehavior(this, v33, v112);
    goto LABEL_26;
  }
  if ( v40 >= 0x6002 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v112 = 1;
    goto LABEL_122;
  }
LABEL_26:
  if ( v40 - 20480 <= 5 )
  {
    v157 = (_QWORD *)WdLogNewEntry5_WdError(v39, v33);
    v157[3] = 6692LL;
    goto LABEL_219;
  }
  *(_QWORD *)&v199.Type = 1LL;
  *(_QWORD *)&v199.InputDataSize = 0LL;
  v199.pOutputData = (char *)this + 1992;
  *(_OWORD *)&v199.OutputDataSize = 0LL;
  v199.pInputData = 0LL;
  v199.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v40, v33);
  if ( !v199.OutputDataSize )
    return 3221225485LL;
  v42 = DXGADAPTER::DdiQueryAdapterInfo(this, &v199, v41);
  v30 = v42;
  if ( v42 < 0 )
  {
    v154 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v154 + 24) = v30;
    WdLogEvent5_WdError(v154);
    return (unsigned int)v30;
  }
  v45 = *((unsigned int *)this + 582);
  if ( (int)v45 > 9472 && *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
  {
    v157 = (_QWORD *)WdLogNewEntry5_WdError(v45, v43);
    v158 = *((int *)this + 582);
LABEL_222:
    v157[3] = v158;
    goto LABEL_219;
  }
  if ( (int)v45 < 4864 )
  {
    if ( *((_QWORD *)this + 92) )
    {
      *((_DWORD *)this + 649) = 1300;
    }
    else if ( (_DWORD)v45 == 4608 )
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
    *((_DWORD *)this + 649) = DxgkConvertWddmVersionToD3DKMTDriverVersion(v45);
  }
  v46 = *((_QWORD *)this + 27);
  v195 = 0;
  PnpRegistryValue = DpiReadPnpRegistryValue(v46, L"ACGSupported", (char *)&v195, 4u, 2u);
  v49 = v195;
  if ( PnpRegistryValue < 0 )
    v49 = 0;
  v195 = v49;
  if ( v49 || (v50 = 0, *((int *)this + 649) >= 2200) )
    v50 = 1;
  *((_BYTE *)this + 212) = v50;
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
  else if ( g_bCreateParavirtualizedGpu )
  {
    if ( v40 >= 0x5023 )
    {
      v159 = *((_DWORD *)this + 87);
      if ( (v159 & 4) == 0 && (v159 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 515) |= 0x400u;
    }
  }
  v51 = (_DWORD *)((char *)this + 2576);
  *((_DWORD *)this + 644) = 0;
  if ( v40 >= 0x5010 && !*((_BYTE *)this + 209) )
  {
    *(_QWORD *)&v203.Type = 16LL;
    *(_QWORD *)&v203.InputDataSize = 0LL;
    *(_QWORD *)&v203.Flags.0 = 0LL;
    HIDWORD(v203.hKmdProcessHandle) = 0;
    v203.pInputData = 0LL;
    v203.pOutputData = (char *)this + 2576;
    v203.OutputDataSize = 4;
    v52 = DXGADAPTER::DdiQueryAdapterInfo(this, &v203, v48);
    if ( v52 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v54, v53, v55, v56) + 24) = v52;
      *v51 = 0;
      if ( *((int *)this + 582) >= 8704 )
        *v51 |= 2u;
    }
    v57 = *((unsigned int *)this + 582);
    if ( (int)v57 < 9472 )
    {
      *v51 &= 0xFFFFFFF3;
      LODWORD(v58) = *v51;
    }
    else
    {
      v58 = (unsigned int)*v51;
      if ( (*(_BYTE *)v51 & 0xC) == 0xC )
      {
        v157 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v157[3] = this;
        v157[4] = 6853LL;
        goto LABEL_219;
      }
    }
    if ( (int)v57 < 9984 )
      *v51 = v58 & 0xFFFFFFEF;
  }
  v197 = *((_DWORD *)this + 70);
  v59 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)v197;
  v60 = 360LL * v197;
  v61 = v197;
  if ( !is_mul_ok(v197, 0x168uLL) )
    v60 = -1LL;
  IsBddFallbackDriver = __CFADD__(v60, 8LL);
  v63 = v60 + 8;
  if ( IsBddFallbackDriver )
    v63 = -1LL;
  v64 = (char *)operator new[](v63, 0x4B677844u, (POOL_TYPE)512);
  if ( v64 )
  {
    v69 = v64 + 8;
    *(_QWORD *)v64 = v59;
    `vector constructor iterator'(
      v64 + 8,
      360LL,
      (unsigned int)v59,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v69 = 0LL;
  }
  *((_QWORD *)this + 323) = v69;
  if ( !v69 )
  {
    v160 = WdLogNewEntry5_WdLowResource(v66, v65, v67, v68);
    *(_QWORD *)(v160 + 24) = 6870LL;
    WdLogEvent5_WdLowResource(v160);
    return 3221225495LL;
  }
  memset(v69, 0, 360 * v61);
  v204 = 0;
  if ( *((int *)this + 582) >= 0x2000 && v40 >= 0x5005 )
  {
    *((_DWORD *)this + 648) = 0;
    v113 = 0;
    v206 = 0;
    if ( (_DWORD)v59 )
    {
      v114 = *((_QWORD *)this + 323);
      v72 = 0LL;
      do
      {
        *(_QWORD *)&v202.Type = 15LL;
        v202.pInputData = &v206;
        *(_QWORD *)&v202.InputDataSize = 4LL;
        *(_QWORD *)&v202.Flags.0 = 0LL;
        HIDWORD(v202.hKmdProcessHandle) = 0;
        v202.pOutputData = (void *)(v114 + 360LL * (unsigned int)v72);
        if ( v40 < 0xC003 )
          v202.OutputDataSize = v40 < 0x6000 ? 20 : 24;
        else
          v202.OutputDataSize = 32;
        v115 = DXGADAPTER::DdiQueryAdapterInfo(this, &v202, v72);
        v118 = v115;
        if ( v115 < 0 )
        {
          v119 = WdLogNewEntry5_WdEvent(v117, v116);
          *(_QWORD *)(v119 + 24) = v118;
          WdLogEvent5_WdEvent(v119);
          v204 = 1;
          goto LABEL_140;
        }
        if ( v40 >= 0xC003 )
        {
          v161 = *((_QWORD *)this + 323);
          v162 = 360LL * v206;
          if ( (*(_DWORD *)(v162 + v161 + 16) & 0x20) != 0 )
          {
            if ( *(_DWORD *)(v162 + v161 + 24) >= (unsigned int)*(unsigned __int16 *)(v162 + v161) )
            {
              v157 = (_QWORD *)WdLogNewEntry5_WdError(v162, v161);
              v157[3] = this;
              v157[4] = *(unsigned int *)(360LL * v206 + *((_QWORD *)this + 323) + 24);
              v157[5] = *(unsigned __int16 *)(360LL * v206 + *((_QWORD *)this + 323));
              goto LABEL_219;
            }
            if ( (*((_DWORD *)this + 515) & 0x2000) == 0 )
            {
              v157 = (_QWORD *)WdLogNewEntry5_WdError(v162, v161);
              v157[3] = this;
              v157[4] = 6936LL;
              goto LABEL_219;
            }
          }
        }
        v114 = *((_QWORD *)this + 323);
        v71 = 360LL * v206;
        v70 = *(unsigned __int16 *)(v71 + v114);
        v113 = v70 + *((_DWORD *)this + 648);
        v72 = ++v206;
        *((_DWORD *)this + 648) = v113;
      }
      while ( (unsigned int)v72 < (unsigned int)v59 );
    }
    if ( *((int *)this + 649) <= 2400 && v113 > 0x40 )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
      v157[3] = this;
      v157[4] = 64LL;
      v157[5] = *((unsigned int *)this + 648);
LABEL_219:
      WdLogEvent5_WdError(v157);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)this + 514) & 1) == 0 )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
      v157[3] = this;
      v157[4] = 6958LL;
      goto LABEL_219;
    }
LABEL_140:
    if ( (*((_DWORD *)this + 515) & 0x800) == 0 )
    {
LABEL_141:
      v73 = v204;
      goto LABEL_56;
    }
    v194 = 0;
    if ( (_DWORD)v59 )
    {
      while ( 1 )
      {
        v198 = 0LL;
        v199.pInputData = &v194;
        v199.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v199.pOutputData = &v198;
        v199.InputDataSize = 4;
        v199.OutputDataSize = 8;
        v163 = DXGADAPTER::DdiQueryAdapterInfo(this, &v199, v72);
        v95 = v163;
        if ( v163 < 0 )
          break;
        if ( (v198 & 0xFFF) != 0 )
        {
          v157 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
          v158 = v198;
          goto LABEL_222;
        }
        *(_QWORD *)(360LL * v194 + *((_QWORD *)this + 323) + 56) = v198;
        v164 = v194;
        v72 = *(_QWORD *)(360LL * v194 + *((_QWORD *)this + 323) + 56);
        if ( v72 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v194, v72);
          if ( (int)result < 0 )
            return result;
          v164 = v194;
        }
        v194 = v164 + 1;
        if ( v164 + 1 >= (unsigned int)v59 )
          goto LABEL_259;
      }
    }
    else
    {
LABEL_259:
      v199.InputDataSize = 0;
      v199.pInputData = 0LL;
      v199.pOutputData = v200;
      v199.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
      *(_OWORD *)v200 = 0LL;
      v199.OutputDataSize = 16;
      v165 = DXGADAPTER::DdiQueryAdapterInfo(this, &v199, v72);
      v95 = v165;
      if ( v165 >= 0 )
      {
        if ( v200[0] )
        {
          v166 = 16LL * v200[0];
          if ( !is_mul_ok(v200[0], 0x10uLL) )
            v166 = -1LL;
          v167 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new[](v166, 0x4B677844u, PagedPool);
          v59 = v167;
          if ( !v167 )
          {
            v171 = WdLogNewEntry5_WdError(v169, v168);
            *(_QWORD *)(v171 + 24) = v200[0];
LABEL_268:
            WdLogEvent5_WdError(v171);
            return (unsigned int)v95;
          }
          *(_QWORD *)&v200[2] = v167;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v199, v170) < 0 )
          {
            v175 = WdLogNewEntry5_WdAssertion(v174, v173);
            *(_QWORD *)(v175 + 24) = 7027LL;
            WdLogEvent5_WdAssertion(v175);
          }
          LODWORD(v95) = DXGADAPTER::ValidateHardwareReservedRanges(v174, v59, v200[0]);
          if ( (int)v95 < 0 )
          {
            operator delete[](v59);
            return (unsigned int)v95;
          }
          v176 = v200[0];
          *((_QWORD *)this + 547) = v59;
          LODWORD(v59) = v61;
          *((_DWORD *)this + 1093) = v176;
        }
        goto LABEL_141;
      }
    }
LABEL_266:
    v171 = WdLogNewEntry5_WdError(v71, v70);
    *(_QWORD *)(v171 + 24) = v95;
    goto LABEL_268;
  }
  v73 = 1;
LABEL_56:
  if ( v73 && (_DWORD)v59 )
  {
    v70 = 0LL;
    do
    {
      *(_WORD *)(v70 + *((_QWORD *)this + 323)) = *((_WORD *)this + 1034);
      v70 += 360LL;
      *(_DWORD *)(*((_QWORD *)this + 323) + v70 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v70 - 344) ^ (*((_DWORD *)this + 515) >> 7)) & 1;
      *(_DWORD *)(*((_QWORD *)this + 323) + v70 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v70 - 344) ^ (*((_DWORD *)this + 515) >> 5)) & 2;
      *(_WORD *)(*((_QWORD *)this + 323) + v70 - 358) = *((_WORD *)this + 1032);
      v71 = *((_QWORD *)this + 323);
      *(_QWORD *)(v71 + v70 - 352) = *((_QWORD *)this + 27);
      --v61;
    }
    while ( v61 );
  }
  if ( *((int *)this + 649) >= 2400 )
  {
    if ( *((_DWORD *)this + 642) >= 0x20u )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
      v157[3] = 7065LL;
      goto LABEL_219;
    }
    *((_BYTE *)this + 2650) = *((_BYTE *)this + 2568) & 1;
  }
  v74 = *((_DWORD *)this + 642);
  if ( (v74 & 0x10) != 0 && !*((_QWORD *)this + 167) )
  {
    v157 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
    v157[3] = 7076LL;
    goto LABEL_219;
  }
  if ( *((_BYTE *)this + 2796) )
    *((_DWORD *)this + 642) = v74 & 0xFFFFFFEF;
  if ( v40 < 0x3001 )
  {
    *((_DWORD *)this + 582) = 4096;
  }
  else
  {
    v75 = *((_DWORD *)this + 582);
    if ( v75 != 4608
      && v75 != 4864
      && v75 != 9984
      && v75 != 4096
      && v75 != 0x2000
      && v75 != 8448
      && v75 != 8704
      && v75 != 8960
      && v75 != 9216
      && v75 != 9472
      && v75 != 9728 )
    {
      v156 = WdLogNewEntry5_WdError(v71, v70);
      *(_QWORD *)(v156 + 24) = *((int *)this + 582);
      goto LABEL_213;
    }
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v71, v70) + 760) || (v77 = 1, (*((_DWORD *)this + 87) & 8) != 0) )
    v77 = 0;
  *((_BYTE *)this + 2608) = v77;
  if ( v77 )
  {
    v177 = *((unsigned int *)this + 582);
    if ( (int)v177 < 4608
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
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v177, v76);
      v157[3] = 7155LL;
      goto LABEL_219;
    }
    if ( (int)v177 < 4864
      && ((*((_DWORD *)this + 513) & 0x10) != 0
       || (*((_DWORD *)this + 515) & 0x10) != 0
       || *((_BYTE *)this + 2535)
       || *((_DWORD *)this + 634)) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v177, v76);
      v157[3] = 7170LL;
      goto LABEL_219;
    }
    if ( (int)v177 < 0x2000 && *((_BYTE *)this + 2540) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v177, v76);
      v157[3] = 7198LL;
      goto LABEL_219;
    }
  }
  if ( v40 < 0x4000 )
  {
    *((_DWORD *)this + 515) &= ~0x10u;
    *((_BYTE *)this + 2535) = 0;
  }
  if ( v40 < 0x5011
    && (*((_DWORD *)this + 87) & 1) != 0
    && (*((_DWORD *)this + 515) & 0x10) != 0
    && (*((_DWORD *)this + 87) & 0x1000) != 0 )
  {
    *((_BYTE *)this + 2540) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2528))) & 4;
  v78 = *(_BYTE *)a3 & 0xF7 | (*((_BYTE *)this + 2534) != 0 ? 8 : 0);
  *(_BYTE *)a3 = v78;
  v79 = (v78 ^ (32 * (*((_DWORD *)this + 515) >> 4))) & 0x20 ^ v78;
  *(_BYTE *)a3 = v79;
  v80 = (v79 ^ (*((_BYTE *)this + 2535) << 6)) & 0x40 ^ v79;
  *(_BYTE *)a3 = v80;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 507);
  *(_BYTE *)a3 = v80 & 0x7F | (*(_BYTE *)v51 << 7);
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2540)) & 1;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 582);
  LOBYTE(v81) = DXGADAPTER::IsComputeOnlyAdapter(this);
  v86 = v85 & 0xEF;
  *(_BYTE *)a3 = v86;
  v87 = v82 ^ (v82 ^ (32 * v81)) & 0x20;
  *((_BYTE *)a3 + 1) = v87;
  if ( v40 >= 0x5021 )
  {
    v86 |= 16 * (*((_BYTE *)this + 2560) & 1);
    *(_BYTE *)a3 = v86;
  }
  if ( !*((_BYTE *)this + 209) )
  {
    LOBYTE(v82) = v86 & 0x40;
    if ( (v86 & 0x40) != 0 )
    {
      if ( v40 < 0x5005 && (*((_DWORD *)this + 362) || *((_DWORD *)this + 363)) )
      {
        v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
        v158 = *((_QWORD *)this + 27);
        goto LABEL_222;
      }
      v87 ^= (v87 ^ (2 * *((_BYTE *)this + 2563))) & 2;
      *((_BYTE *)a3 + 1) = v87;
    }
    v88 = v87 & 1;
    v83 = 0LL;
    if ( !(_BYTE)v82 )
    {
      LOBYTE(v81) = v88 ^ 1;
      v83 = v81;
    }
    if ( !(_BYTE)v83 && (v86 & 0x20) == 0 )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = *((_QWORD *)this + 27);
      v157[4] = 7277LL;
      goto LABEL_219;
    }
    if ( v88 )
    {
      if ( (_BYTE)v82 )
      {
        v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
        v157[3] = *((_QWORD *)this + 27);
        v157[4] = 7284LL;
        goto LABEL_219;
      }
      if ( !*((_DWORD *)this + 363) )
      {
        v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
        v157[3] = *((_QWORD *)this + 27);
        v157[4] = 7292LL;
        goto LABEL_219;
      }
    }
    if ( *((_BYTE *)this + 2530) && (!*((_QWORD *)this + 89) || !*((_QWORD *)this + 90) || !*((_QWORD *)this + 91)) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7306LL;
      goto LABEL_219;
    }
    if ( (*((_DWORD *)this + 511) & 4) != 0 && !*((_QWORD *)this + 88) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7313LL;
      goto LABEL_219;
    }
    if ( *((_BYTE *)this + 2533) && (!*((_QWORD *)this + 93) || !*((_QWORD *)this + 94)) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7321LL;
      goto LABEL_219;
    }
    if ( v40 < 0x300C && *((_QWORD *)this + 93) && *((_QWORD *)this + 94) )
      *((_BYTE *)this + 2533) = 1;
  }
  *((_WORD *)this + 1305) = 0;
  *((_BYTE *)this + 2612) = 0;
  if ( *((_BYTE *)this + 2532) )
  {
    if ( v40 < 0x300B )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7343LL;
      goto LABEL_219;
    }
    if ( v40 >= v84 )
    {
      if ( v40 == v84 )
      {
        *((_BYTE *)this + 2611) = 1;
      }
      else
      {
        v178 = *((_DWORD *)this + 634);
        if ( !v178 )
        {
          v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
          v157[3] = 7356LL;
          goto LABEL_219;
        }
        if ( v178 <= 8 )
        {
          if ( v40 > 0x5000 )
            *((_BYTE *)this + 2612) = 1;
        }
        else
        {
          v83 = *((unsigned int *)this + 582);
          if ( (int)v83 < 8704 )
          {
            if ( (int)v83 < 0x2000 || v178 != 10 )
            {
              v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
              v157[3] = 7379LL;
              goto LABEL_219;
            }
            *((_DWORD *)this + 634) = 8;
          }
          else if ( v178 > 0xA )
          {
            v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
            v157[3] = 7366LL;
            goto LABEL_219;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2610) = 1;
    }
    v179 = *((_QWORD *)this + 97);
    if ( !v179 && !*((_QWORD *)this + 113) && !*((_QWORD *)this + 117) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7395LL;
      goto LABEL_219;
    }
    if ( v40 > 0x4002 && !*((_QWORD *)this + 101) && !*((_QWORD *)this + 112) && !*((_QWORD *)this + 116) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7407LL;
      goto LABEL_219;
    }
    if ( !*((_BYTE *)this + 2531) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v157[3] = 7417LL;
      goto LABEL_219;
    }
    if ( v179 )
    {
      Global = DXGGLOBAL::GetGlobal(v83, v82);
      DXGGLOBAL::RecordFeatureUsage(Global, 1LL, 1LL);
    }
    if ( *((_QWORD *)this + 113) )
    {
      v181 = DXGGLOBAL::GetGlobal(v83, v82);
      DXGGLOBAL::RecordFeatureUsage(v181, 2LL, 1LL);
    }
    if ( *((_QWORD *)this + 117) )
    {
      v182 = DXGGLOBAL::GetGlobal(v83, v82);
      DXGGLOBAL::RecordFeatureUsage(v182, 3LL, 1LL);
    }
  }
  v89 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 2648) = 0;
  if ( v89 )
    goto LABEL_95;
  v90 = 0;
  if ( v40 >= 0x700A && *((int *)this + 582) >= 8704 && (!*((_QWORD *)this + 71) || *((_QWORD *)this + 137)) )
  {
    *((_BYTE *)this + 2648) = 1;
    v90 = 1;
  }
  if ( *((int *)this + 582) < 8960 )
  {
LABEL_95:
    *((_DWORD *)this + 510) &= 0xFFFFFFE3;
  }
  else
  {
    v144 = (*((_DWORD *)this + 510) >> 3) & 1;
    v82 = (*((_DWORD *)this + 510) >> 2) & 1;
    if ( (unsigned int)v82 < (unsigned int)v144
      || (unsigned int)v144 < ((*((_DWORD *)this + 510) >> 4) & 1u)
      || !v90 && (_DWORD)v82 )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v144, v82);
      v157[3] = *((_QWORD *)this + 27);
      v157[4] = -1073741811LL;
      goto LABEL_219;
    }
  }
  v91 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v91 + 40) + 133LL) && !v89 )
  {
    v92 = *((_DWORD *)this + 582) >= 0x2000;
    v93 = DXGGLOBAL::GetGlobal(v91, v82);
    v94 = DXGGLOBAL::DeferredInitialize(v93, v92);
    v95 = v94;
    if ( v94 < 0 )
      goto LABEL_266;
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, a3);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 325) ^= (v23 ^ **((_DWORD **)this + 325)) & 0x10000;
    v97 = (_DWORD *)*((_QWORD *)this + 325);
    *v97 ^= ((unsigned __int16)v23 ^ (unsigned __int16)*v97) & 0x8000;
  }
  if ( *((int *)this + 582) < 9216 )
    goto LABEL_102;
  v145 = *((_QWORD *)this + 159);
  if ( !*((_QWORD *)this + 158) )
  {
    if ( !v145 )
    {
LABEL_102:
      *((_QWORD *)this + 158) = W32kStub_UserRemoveWindowedSwapChain;
      *((_QWORD *)this + 159) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_103;
    }
LABEL_366:
    v157 = (_QWORD *)WdLogNewEntry5_WdError(v97, v96);
    v157[3] = 7537LL;
    goto LABEL_219;
  }
  if ( !v145 )
    goto LABEL_366;
LABEL_103:
  result = DXGADAPTER::CheckMcdmDdiOverall(this, v96);
  if ( (int)result < 0 )
    return result;
  DXGADAPTER::InitializeDriverDiagnosticReporting(this);
  v99 = (__int64 *)((char *)this + 2704);
  RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 338);
  v14 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *v99 )
    {
      v183 = WdLogNewEntry5_WdAssertion(v102, v101);
      *(_QWORD *)(v183 + 24) = 7560LL;
      WdLogEvent5_WdAssertion(v183);
    }
    v150 = WdLogNewEntry5_WdError(v102, v101);
    *(_QWORD *)(v150 + 24) = this;
    *(_QWORD *)(v150 + 32) = v14;
    goto LABEL_200;
  }
  v103 = (__int64 *)((char *)this + 2696);
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 337);
  v95 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *v103 )
    {
      v172 = WdLogNewEntry5_WdAssertion(v106, v105);
      *(_QWORD *)(v172 + 24) = 7582LL;
      WdLogEvent5_WdAssertion(v172);
    }
    v171 = WdLogNewEntry5_WdError(v106, v105);
    *(_QWORD *)(v171 + 24) = this;
    *(_QWORD *)(v171 + 32) = v95;
    goto LABEL_268;
  }
  if ( *v99 )
  {
    v107 = *((_QWORD *)this + 337);
    goto LABEL_108;
  }
  v107 = *v103;
  if ( !*v103 )
  {
    v156 = WdLogNewEntry5_WdError(v106, v105);
    *(_QWORD *)(v156 + 24) = this;
    *(_QWORD *)(v156 + 32) = -1073741735LL;
LABEL_213:
    WdLogEvent5_WdError(v156);
    return 3221225561LL;
  }
LABEL_108:
  v108 = *(_BYTE *)a3 & 0xFE | (v107 != 0);
  *(_BYTE *)a3 = v108;
  v109 = v108 & 0xFD | (*v99 != 0 ? 2 : 0);
  *(_BYTE *)a3 = v109;
  if ( (v109 & 1) != 0 )
    *((_BYTE *)a3 + 1) = *((_BYTE *)a3 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
  else
    *((_BYTE *)a3 + 1) &= ~4u;
  if ( !*v99 )
    *((_DWORD *)this + 511) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this) )
  {
    v143 = *((_DWORD *)this + 87);
    if ( (v143 & 4) == 0
      && (v143 & 8) == 0
      && v110
      && v40 >= 0x5008
      && (!*((_QWORD *)this + 102) || !*((_QWORD *)this + 114)) )
    {
      v157 = (_QWORD *)WdLogNewEntry5_WdError(v111, v110);
      v157[3] = 7638LL;
      goto LABEL_219;
    }
  }
  if ( *((_BYTE *)this + 2608)
    && DXGADAPTER::IsFullWDDMAdapter(v111)
    && *((int *)this + 582) >= 4608
    && !*((_BYTE *)this + 2531) )
  {
    v157 = (_QWORD *)WdLogNewEntry5_WdError(v184, v110);
    v157[3] = 7653LL;
    goto LABEL_219;
  }
  if ( ((*((_BYTE *)this + 209) == 0) & *((_BYTE *)this + 2531)) != 0
    && (!v110
     || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v110 + 640) + 8LL) + 712LL))(*(_QWORD *)(v110 + 648))) )
  {
    *(_WORD *)((char *)this + 2531) = 0;
  }
  if ( *((_BYTE *)this + 209) )
    *((_QWORD *)this + 102) = 0LL;
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
  v121 = *((_DWORD *)this + 87);
  *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
  if ( (v121 & 0x10) != 0 && !*v103 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v201, v120);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v201);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v137, v136) + 103) )
    {
      v185 = WdLogNewEntry5_WdError(v139, v138);
      *(_QWORD *)(v185 + 24) = this;
      *(_QWORD *)(v185 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v185);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 4) = -1LL;
      v140 = DXGGLOBAL::GetGlobal(v139, v138);
      DXGGLOBAL::SetWarpAdapter(v140, this);
    }
    if ( v201[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v201, v141);
  }
  if ( *((_BYTE *)this + 209) )
  {
LABEL_384:
    if ( (int)v95 < 0 )
      goto LABEL_153;
    goto LABEL_152;
  }
  v122 = DXGADAPTER::InitializePowerManagement(this);
  v95 = v122;
  if ( v122 < 0 )
  {
    v186 = WdLogNewEntry5_WdError(v124, v123);
    *(_QWORD *)(v186 + 24) = this;
    *(_QWORD *)(v186 + 32) = v95;
    WdLogEvent5_WdError(v186);
    goto LABEL_384;
  }
LABEL_152:
  if ( *((_BYTE *)this + 2608) )
  {
    if ( *((int *)this + 582) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
    {
      v189 = *((_DWORD *)this + 87);
      if ( (v189 & 4) == 0 && (v189 & 0x20) == 0 && (*((_DWORD *)this + 513) & 0x10) == 0 )
      {
        v157 = (_QWORD *)WdLogNewEntry5_WdError(v188, v187);
        v157[3] = 7734LL;
        goto LABEL_219;
      }
    }
  }
LABEL_153:
  if ( (*((_DWORD *)this + 87) & 0x10) != 0 )
    *((_BYTE *)this + 2651) = 1;
  if ( v40 >= 0xA008 )
  {
    *((_BYTE *)this + 2651) = 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_NonDXArgonGpuSupport__private_reporting,
      0x1429797u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
      0,
      v193);
  }
  v125 = (MOCKDRIVERSTATE *)operator new[](0xAB0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v125 )
    v128 = MOCKDRIVERSTATE::MOCKDRIVERSTATE(v125, this);
  else
    v128 = 0LL;
  *((_QWORD *)this + 561) = v128;
  if ( !v128 )
  {
    v148 = WdLogNewEntry5_WdError(v127, v126);
    *(_QWORD *)(v148 + 24) = 7772LL;
    WdLogEvent5_WdError(v148);
    return 3221225495LL;
  }
  if ( *((int *)this + 649) >= 2600 && (*((_DWORD *)this + 642) & 8) != 0 )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_SupportComputeOnlyAdapters__private_reporting,
      0x124B067u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v193);
  LODWORD(v14) = DXGADAPTER::InitializeVSyncPhaseState(this);
  if ( (int)v14 < 0 )
  {
    v151 = WdLogNewEntry5_WdLowResource(v130, v129, v131, v132);
    *(_QWORD *)(v151 + 24) = 7790LL;
    goto LABEL_204;
  }
  v133 = *v99;
  if ( *v99 && !*((_BYTE *)this + 209) )
  {
    v134 = DXGGLOBAL::GetGlobal(v130, v129);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v133 + 616) + 8LL) + 912LL))(
      *(_QWORD *)(v133 + 624),
      (__int64)v134 + 1216);
  }
  if ( (*((_DWORD *)this + 87) & 1) != 0 )
  {
    v142 = *(_QWORD *)((char *)this + 316);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v130, v129) + 107) = v142;
  }
  if ( (int)v95 < 0 )
    return (unsigned int)v95;
  if ( v197 <= 1 )
    goto LABEL_169;
  v190 = *((_DWORD *)this + 81);
  if ( v190 == 4318 )
  {
    v191 = DXGGLOBAL::GetGlobal(v130, v129);
    v192 = 7LL;
LABEL_397:
    DXGGLOBAL::RecordFeatureUsage(v191, v192, 1LL);
    goto LABEL_169;
  }
  if ( v190 == 4098 )
  {
    v191 = DXGGLOBAL::GetGlobal(v130, v129);
    v192 = 8LL;
    goto LABEL_397;
  }
LABEL_169:
  v135 = DXGGLOBAL::GetGlobal(v130, v129);
  DXGGLOBAL::RecordFeatureUsageWddmVersion(v135, this);
  return (unsigned int)v95;
}
