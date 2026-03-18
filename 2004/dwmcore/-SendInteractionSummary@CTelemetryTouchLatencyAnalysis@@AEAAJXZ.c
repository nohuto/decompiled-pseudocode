/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180161C78
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180155244 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015E5A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180013AD0 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180013B38 (-IsVailContainer@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18015E4E8 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015ED0C (-ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015ED98 (-ExtractAppInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractContainerBoundaryInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015EE24 (-ExtractContainerBoundaryInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV1.c)
 *     ?ExtractContainerKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015EEB0 (-ExtractContainerKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@.c)
 *     ?ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015EF3C (-ExtractDwmPresentLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015EFC8 (-ExtractDwmRenderLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractHostBoundaryCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015F054 (-ExtractHostBoundaryCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_K.c)
 *     ?ExtractHostDwmWaitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015F0E0 (-ExtractHostDwmWaitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractHostInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015F16C (-ExtractHostInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015F1F8 (-ExtractKernelInputLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z @ 0x18015F284 (-ExtractOsLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJQEBV12@_KQEAI1@Z.c)
 *     ?InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@_KAEBVCLatencyInfo@3@QEBI33333333332333333333333M@Z @ 0x1801608A8 (-InteractionSummary@InteractionTraceProvider@@SAXAEBUInteractionSummaryInfo@CTelemetryTouchLaten.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  float v5; // xmm6_4
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  int OsLatencyArray; // eax
  __int64 v9; // rcx
  int KernelInputLatencyArray; // eax
  __int64 v11; // rcx
  int AppInputLatencyArray; // eax
  __int64 v13; // rcx
  int AppCommitLatencyArray; // eax
  __int64 v15; // rcx
  int HostBoundaryCommitLatencyArray; // eax
  __int64 v17; // rcx
  int HostDwmWaitLatencyArray; // eax
  __int64 v19; // rcx
  int DwmRenderLatencyArray; // eax
  __int64 v21; // rcx
  int DwmPresentLatencyArray; // eax
  __int64 v23; // rcx
  int HostInputLatencyArray; // eax
  __int64 v25; // rcx
  int ContainerBoundaryInputLatencyArray; // eax
  __int64 v27; // rcx
  int ContainerKernelInputLatencyArray; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  unsigned int v54; // edx
  unsigned __int64 v55; // r11
  unsigned int *v56; // r8
  __int64 v57; // r10
  _QWORD *v58; // r9
  unsigned __int64 v59; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+E8h] [rbp-80h] BYREF
  _OWORD v62[2]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v63; // [rsp+110h] [rbp-58h]
  int v64; // [rsp+118h] [rbp-50h]
  _BYTE v65[48]; // [rsp+120h] [rbp-48h] BYREF
  _BYTE v66[48]; // [rsp+150h] [rbp-18h] BYREF
  unsigned int v67[4]; // [rsp+180h] [rbp+18h] BYREF
  int v68; // [rsp+190h] [rbp+28h]
  unsigned int v69[4]; // [rsp+198h] [rbp+30h] BYREF
  int v70; // [rsp+1A8h] [rbp+40h]
  unsigned int v71[4]; // [rsp+1B0h] [rbp+48h] BYREF
  int v72; // [rsp+1C0h] [rbp+58h]
  unsigned int v73[4]; // [rsp+1C8h] [rbp+60h] BYREF
  int v74; // [rsp+1D8h] [rbp+70h]
  unsigned int v75[4]; // [rsp+1E0h] [rbp+78h] BYREF
  int v76; // [rsp+1F0h] [rbp+88h]
  unsigned int v77[4]; // [rsp+1F8h] [rbp+90h] BYREF
  int v78; // [rsp+208h] [rbp+A0h]
  unsigned int v79[4]; // [rsp+210h] [rbp+A8h] BYREF
  int v80; // [rsp+220h] [rbp+B8h]
  unsigned int v81[4]; // [rsp+228h] [rbp+C0h] BYREF
  int v82; // [rsp+238h] [rbp+D0h]
  unsigned int v83[4]; // [rsp+240h] [rbp+D8h] BYREF
  int v84; // [rsp+250h] [rbp+E8h]
  unsigned int v85[4]; // [rsp+258h] [rbp+F0h] BYREF
  int v86; // [rsp+268h] [rbp+100h]
  unsigned int v87[4]; // [rsp+270h] [rbp+108h] BYREF
  int v88; // [rsp+280h] [rbp+118h]
  unsigned int v89[4]; // [rsp+288h] [rbp+120h] BYREF
  int v90; // [rsp+298h] [rbp+130h]
  unsigned int v91[4]; // [rsp+2A0h] [rbp+138h] BYREF
  int v92; // [rsp+2B0h] [rbp+148h]
  unsigned int v93[4]; // [rsp+2B8h] [rbp+150h] BYREF
  int v94; // [rsp+2C8h] [rbp+160h]
  unsigned int v95[4]; // [rsp+2D0h] [rbp+168h] BYREF
  int v96; // [rsp+2E0h] [rbp+178h]
  unsigned int v97[4]; // [rsp+2E8h] [rbp+180h] BYREF
  int v98; // [rsp+2F8h] [rbp+190h]
  unsigned int v99[4]; // [rsp+300h] [rbp+198h] BYREF
  int v100; // [rsp+310h] [rbp+1A8h]
  unsigned int v101[4]; // [rsp+318h] [rbp+1B0h] BYREF
  int v102; // [rsp+328h] [rbp+1C0h]
  unsigned int v103[4]; // [rsp+330h] [rbp+1C8h] BYREF
  int v104; // [rsp+340h] [rbp+1D8h]
  unsigned int v105[4]; // [rsp+348h] [rbp+1E0h] BYREF
  int v106; // [rsp+358h] [rbp+1F0h]
  unsigned int v107[4]; // [rsp+360h] [rbp+1F8h] BYREF
  int v108; // [rsp+370h] [rbp+208h]
  unsigned int v109[4]; // [rsp+378h] [rbp+210h] BYREF
  int v110; // [rsp+388h] [rbp+220h]
  unsigned int v111[4]; // [rsp+390h] [rbp+228h] BYREF
  int v112; // [rsp+3A0h] [rbp+238h]

  v2 = 0;
  if ( *((_BYTE *)this + 4216) )
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(
      (_DWORD *)this + 1105,
      (__int64)v65,
      *((unsigned __int8 *)this + 4216));
    v3 = *((_DWORD *)this + 1056);
    if ( v3 )
      v4 = v3 - *((unsigned __int8 *)this + 4216);
    else
      v4 = 0;
    v63 = 0LL;
    v5 = 0.0;
    v64 = 0;
    memset(v62, 0, sizeof(v62));
    if ( v4 )
    {
      v6 = (_DWORD *)CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/((_DWORD *)this + 1190, (__int64)v66, v4);
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v62, v6);
      v3 = *((_DWORD *)this + 1056);
    }
    if ( v3 )
      v5 = (float)(int)(*((_DWORD *)this + 1274) / v3);
    v7 = *((unsigned __int8 *)this + 4216);
    v112 = 0;
    v110 = 0;
    v108 = 0;
    *(_OWORD *)v111 = 0LL;
    v106 = 0;
    *(_OWORD *)v109 = 0LL;
    v104 = 0;
    *(_OWORD *)v107 = 0LL;
    v102 = 0;
    *(_OWORD *)v105 = 0LL;
    v100 = 0;
    *(_OWORD *)v103 = 0LL;
    v98 = 0;
    *(_OWORD *)v101 = 0LL;
    v96 = 0;
    *(_OWORD *)v99 = 0LL;
    v94 = 0;
    *(_OWORD *)v97 = 0LL;
    v92 = 0;
    *(_OWORD *)v95 = 0LL;
    *(_OWORD *)v93 = 0LL;
    *(_OWORD *)v91 = 0LL;
    OsLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
                       (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                       v7,
                       v111);
    v2 = OsLatencyArray;
    if ( OsLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, OsLatencyArray, 0x964u, 0LL);
      return v2;
    }
    KernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
                                (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                                *((unsigned __int8 *)this + 4216),
                                v109);
    v2 = KernelInputLatencyArray;
    if ( KernelInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, KernelInputLatencyArray, 0x96Au, 0LL);
      return v2;
    }
    AppInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
                             (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                             *((unsigned __int8 *)this + 4216),
                             v107);
    v2 = AppInputLatencyArray;
    if ( AppInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, AppInputLatencyArray, 0x970u, 0LL);
      return v2;
    }
    AppCommitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                              *((unsigned __int8 *)this + 4216),
                              v105);
    v2 = AppCommitLatencyArray;
    if ( AppCommitLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, AppCommitLatencyArray, 0x976u, 0LL);
      return v2;
    }
    HostBoundaryCommitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostBoundaryCommitLatencyArray(
                                       (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                                       *((unsigned __int8 *)this + 4216),
                                       v93);
    v2 = HostBoundaryCommitLatencyArray;
    if ( HostBoundaryCommitLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, HostBoundaryCommitLatencyArray, 0x97Cu, 0LL);
      return v2;
    }
    HostDwmWaitLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostDwmWaitLatencyArray(
                                (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                                *((unsigned __int8 *)this + 4216),
                                v91);
    v2 = HostDwmWaitLatencyArray;
    if ( HostDwmWaitLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, HostDwmWaitLatencyArray, 0x982u, 0LL);
      return v2;
    }
    DwmRenderLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                              *((unsigned __int8 *)this + 4216),
                              v103);
    v2 = DwmRenderLatencyArray;
    if ( DwmRenderLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, DwmRenderLatencyArray, 0x988u, 0LL);
      return v2;
    }
    DwmPresentLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
                               (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                               *((unsigned __int8 *)this + 4216),
                               v101);
    v2 = DwmPresentLatencyArray;
    if ( DwmPresentLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DwmPresentLatencyArray, 0x98Eu, 0LL);
      return v2;
    }
    if ( !IsVailContainer() )
      goto LABEL_24;
    HostInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostInputLatencyArray(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                              *((unsigned __int8 *)this + 4216),
                              v99);
    v2 = HostInputLatencyArray;
    if ( HostInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, HostInputLatencyArray, 0x996u, 0LL);
      return v2;
    }
    ContainerBoundaryInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerBoundaryInputLatencyArray(
                                           (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                                           *((unsigned __int8 *)this + 4216),
                                           v97);
    v2 = ContainerBoundaryInputLatencyArray;
    if ( ContainerBoundaryInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, ContainerBoundaryInputLatencyArray, 0x99Cu, 0LL);
      return v2;
    }
    ContainerKernelInputLatencyArray = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerKernelInputLatencyArray(
                                         (CTelemetryTouchLatencyAnalysis *)((char *)this + 4464),
                                         *((unsigned __int8 *)this + 4216),
                                         v95);
    v2 = ContainerKernelInputLatencyArray;
    if ( ContainerKernelInputLatencyArray < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, ContainerKernelInputLatencyArray, 0x9A2u, 0LL);
    }
    else
    {
LABEL_24:
      v30 = *((unsigned __int8 *)this + 4216);
      v90 = 0;
      v88 = 0;
      v86 = 0;
      *(_OWORD *)v89 = 0LL;
      v84 = 0;
      *(_OWORD *)v87 = 0LL;
      v82 = 0;
      *(_OWORD *)v85 = 0LL;
      v80 = 0;
      *(_OWORD *)v83 = 0LL;
      v78 = 0;
      *(_OWORD *)v81 = 0LL;
      v76 = 0;
      *(_OWORD *)v79 = 0LL;
      v74 = 0;
      *(_OWORD *)v77 = 0LL;
      v72 = 0;
      *(_OWORD *)v75 = 0LL;
      v70 = 0;
      *(_OWORD *)v73 = 0LL;
      *(_OWORD *)v71 = 0LL;
      *(_OWORD *)v69 = 0LL;
      v31 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractOsLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              v30,
              v89);
      v2 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x9B7u, 0LL);
        return v2;
      }
      v33 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractKernelInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v87);
      v2 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x9BDu, 0LL);
        return v2;
      }
      v35 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v85);
      v2 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x9C3u, 0LL);
        return v2;
      }
      v37 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v83);
      v2 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x9C9u, 0LL);
        return v2;
      }
      v39 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostBoundaryCommitLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v71);
      v2 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x9CFu, 0LL);
        return v2;
      }
      v41 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostDwmWaitLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v69);
      v2 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x9D5u, 0LL);
        return v2;
      }
      v43 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmRenderLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v81);
      v2 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x9DBu, 0LL);
        return v2;
      }
      v45 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractDwmPresentLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v79);
      v2 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x9E1u, 0LL);
        return v2;
      }
      if ( !IsVailContainer() )
        goto LABEL_39;
      v47 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractHostInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v77);
      v2 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x9E9u, 0LL);
        return v2;
      }
      v49 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerBoundaryInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v75);
      v2 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x9EFu, 0LL);
        return v2;
      }
      v51 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractContainerKernelInputLatencyArray(
              (CTelemetryTouchLatencyAnalysis *)((char *)this + 4804),
              *((unsigned __int8 *)this + 4216),
              v73);
      v2 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x9F5u, 0LL);
      }
      else
      {
LABEL_39:
        QueryPerformanceCounter(&PerformanceCount);
        *(_OWORD *)v67 = 0LL;
        v53 = qword_180345400 / 0x3E8uLL;
        v54 = *((unsigned __int8 *)this + 4216);
        v55 = (PerformanceCount.QuadPart - *((_QWORD *)this + 526)) / (qword_180345400 / 0x3E8uLL);
        v68 = 0;
        if ( (_BYTE)v54 )
        {
          v56 = v67;
          v57 = v54;
          v58 = (_QWORD *)((char *)this + 4336);
          do
          {
            v59 = PerformanceCount.QuadPart - *v58++;
            *v56++ = v59 / v53;
            --v57;
          }
          while ( v57 );
        }
        InteractionTraceProvider::InteractionSummary(
          (CTelemetryTouchLatencyAnalysis *)((char *)this + 4088),
          (unsigned int)v55,
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v65,
          v111,
          v109,
          v107,
          v105,
          v103,
          v101,
          v99,
          v97,
          v95,
          v93,
          v91,
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v62,
          v89,
          v87,
          v85,
          v83,
          v81,
          v79,
          v77,
          v75,
          v73,
          v71,
          v69,
          v67,
          v5);
      }
    }
  }
  return v2;
}
