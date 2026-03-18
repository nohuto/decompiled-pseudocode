/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1C02EC214
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C0392C44 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___ @ 0x1C00146E8 (DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001E3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C004CA90 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C004CB18 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9130 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B9AE4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_ba9a8767fe334596bf562779960bba36_::operator() @ 0x1C02EBA1C (_lambda_ba9a8767fe334596bf562779960bba36_--operator().c)
 *     _lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator() @ 0x1C02EBDCC (_lambda_da24f1cfb4b7f8e158997fb0a51b3ded_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02EBF24 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C033D404 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C033D5C4 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C034800C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0349734 (DxgkWaitForPnPTransitionDone.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C038BE24 (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C03B1260 (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C03B13F0 (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, unsigned int a2, unsigned int *a3, int *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // esi
  const wchar_t *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LUID *v20; // rdx
  struct _LUID *v21; // rdx
  struct _LUID v22; // rcx
  const wchar_t *v23; // r9
  int v24; // r9d
  void *v25; // rbx
  int v26; // eax
  unsigned __int64 v27; // rbx
  const wchar_t *v28; // r9
  _DWORD *v29; // r8
  unsigned int v30; // ebx
  int v31; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rcx
  unsigned int v37; // r15d
  __int64 v38; // rbx
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  struct DXGGLOBAL *v45; // rax
  int v46; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  struct DXGGLOBAL *v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  DXGSESSIONMGR *v52; // rsi
  unsigned int v53; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ebx
  __int64 v59; // r9
  __int64 v60; // rax
  struct _PORT_MESSAGE *v61; // rsi
  int v62; // eax
  int v63; // ebx
  int v64; // eax
  ULONG MessageId; // eax
  char v66; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v67; // [rsp+58h] [rbp-A8h] BYREF
  char v68; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID *v69[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-88h] BYREF
  DXGSESSIONDATA *v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v77; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v78[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct _LUID *v79; // [rsp+C0h] [rbp-40h]
  char v80; // [rsp+C8h] [rbp-38h]
  union _LARGE_INTEGER v81; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v82; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v83; // [rsp+E0h] [rbp-20h] BYREF
  int v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h] BYREF
  int v86; // [rsp+F8h] [rbp-8h]
  unsigned int v87; // [rsp+FCh] [rbp-4h]
  __int64 *v88[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v89[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v90; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v91; // [rsp+130h] [rbp+30h]
  DXGSESSIONDATA **v92; // [rsp+138h] [rbp+38h]
  int *v93[4]; // [rsp+140h] [rbp+40h] BYREF
  char v94; // [rsp+160h] [rbp+60h]
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+68h] BYREF
  char v96; // [rsp+198h] [rbp+98h]
  struct _PORT_MESSAGE v97[2]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = a2;
  v74 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  v96 = 0;
  v76 = CurrentProcessSessionId;
  *((_QWORD *)&v90 + 1) = &v74;
  v91 = &v76;
  v92 = &v71;
  v71 = 0LL;
  *(_QWORD *)&v90 = a4;
  DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded_((__int64)v93, &v90);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v11 = (unsigned int)v4;
    v12 = -1073741789;
    WdLogSingleEntry2(2LL, (unsigned int)v11, -1073741789LL);
    v13 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION, returning 0x%I64x.";
    v14 = -1073741789LL;
LABEL_5:
    v16 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v11, v14, v16, 0LL, 0LL);
    *a4 = v12;
    goto LABEL_86;
  }
  v67 = a3;
  v15 = *a3;
  if ( (unsigned int)v15 >= 0x10 )
  {
    v14 = -1073741811LL;
    WdLogSingleEntry2(2LL, (unsigned int)v15, -1073741811LL);
    v13 = L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.";
    v12 = -1073741811;
    v11 = (unsigned int)*v67;
    goto LABEL_5;
  }
  v11 = v4;
  if ( v4 < 68 * v15 + 4 )
  {
    v12 = -1073741789;
    WdLogSingleEntry3(2LL, v11, *a3, -1073741789LL);
    v13 = L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.";
    v14 = (unsigned int)*v67;
    v16 = -1073741789LL;
    goto LABEL_8;
  }
  v69[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v69, (unsigned int)v7, v9, v10);
  if ( v69[0] )
  {
    v74 = *(_QWORD *)&v69[0][50].HighPart;
    v75 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v69[0], v20, 0LL, &v75);
    v76 = v75;
    v79 = v69[0];
    v80 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    v21 = v69[0];
    if ( v69[0][25].LowPart == 1 && !BYTE1(v69[0][338].LowPart) )
    {
      v22 = v69[0][349];
      if ( !*(_QWORD *)&v22 || (v69[0][54].HighPart & 0x100) == 0 )
      {
        WdLogSingleEntry2(2LL, v69[0], -1073741811LL);
        v23 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      if ( *v67 > *(_DWORD *)(*(_QWORD *)&v22 + 96LL) )
      {
        WdLogSingleEntry2(2LL, v69[0], -1073741811LL);
        v23 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
LABEL_79:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, (__int64)v69[0], -1073741811LL, 0LL, 0LL, 0LL);
        *a4 = -1073741811;
        goto LABEL_82;
      }
      v70 = 0;
      if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v69[0], v69[0], &v70, 0LL) )
      {
        WdLogSingleEntry2((unsigned int)(v24 + 2), v69[0], -1073741811LL);
        v23 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      v25 = (void *)v69[0][27];
      ObfReferenceObject(v25);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
      v26 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v70, 2LL);
      *a4 = v26;
      if ( v26 < 0 )
      {
        ObfDereferenceObject(v25);
        v27 = v70;
        WdLogSingleEntry2(2LL, v70, *a4);
        v28 = L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).";
LABEL_20:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, *a4, 0LL, 0LL, 0LL);
        goto LABEL_82;
      }
      *a4 = DpiFdoWaitConnectionChangeComplete(v25);
      ObfDereferenceObject(v25);
      if ( *a4 < 0 )
      {
        WdLogSingleEntry3(2LL, v69[0], *a4, -1071775725LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x"
                    "%I64x, returning 0x%I64x.",
          (__int64)v69[0],
          *a4,
          -1071775725LL,
          0LL,
          0LL);
LABEL_81:
        *a4 = -1071775725;
LABEL_82:
        if ( v80 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
        goto LABEL_85;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
      v21 = v69[0];
      if ( v69[0][25].LowPart == 1 && !BYTE1(v69[0][338].LowPart) )
      {
        v29 = v67;
        v88[0] = (__int64 *)v69;
        v30 = 0;
        v66 = 0;
        v88[1] = (__int64 *)&v66;
        if ( *v67 )
        {
          while ( 1 )
          {
            v31 = lambda_ba9a8767fe334596bf562779960bba36_::operator()(v88, v30, &v29[17 * v30 + 1]);
            *a4 = v31;
            if ( v31 < 0 )
              break;
            v29 = v67;
            if ( ++v30 >= *v67 )
            {
              if ( !v66 )
              {
                v21 = v69[0];
                goto LABEL_77;
              }
              Global = DXGGLOBAL_GetGlobal();
              REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 304864), 0LL);
              v36 = v67;
              v37 = 0;
              if ( *v67 )
              {
                while ( 1 )
                {
                  v38 = 17LL * v37;
                  v39 = MonitorSetScaleFactorOverride(v69[0], (unsigned int)v36[v38 + 3], (unsigned int)v36[v38 + 12]);
                  *a4 = v39;
                  if ( v39 < 0 )
                    break;
                  v40 = MonitorSetPhysicalSizeOverride(
                          v69[0],
                          (unsigned int)v67[v38 + 3],
                          (unsigned int)v67[v38 + 13],
                          (unsigned int)v67[v38 + 14]);
                  *a4 = v40;
                  if ( v40 < 0 )
                  {
                    WdLogSingleEntry3(2LL, (unsigned int)v67[17 * v37 + 3], v37, v40);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                      (unsigned int)v67[17 * v37 + 3],
                      v37,
                      *a4,
                      0LL,
                      0LL);
                    goto LABEL_82;
                  }
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_VAIL_Monitor_Projection__private_reporting,
                    0x146C1D8u,
                    v41,
                    v42,
                    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
                    1);
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
                    0x146C4AAu,
                    v43,
                    v44,
                    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
                    0);
                  v36 = v67;
                  if ( v67[v38 + 15] || v67[v38 + 16] || v67[v38 + 17] )
                  {
                    v85 = *(_QWORD *)&v67[v38 + 1];
                    v86 = v67[v38 + 3];
                    v83 = *(_QWORD *)&v67[v38 + 15];
                    v84 = v67[v38 + 17];
                    v87 = v37;
                    v45 = DXGGLOBAL_GetGlobal();
                    v46 = REMOTEMONITORMAPPING::AddMapping(
                            (struct DXGGLOBAL *)((char *)v45 + 304864),
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v83,
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v85);
                    *a4 = v46;
                    if ( v46 < 0 )
                    {
                      WdLogSingleEntry3(2LL, (unsigned int)v67[17 * v37 + 3], v37, v46);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                        (unsigned int)v67[17 * v37 + 3],
                        v37,
                        *a4,
                        0LL,
                        0LL);
                      goto LABEL_82;
                    }
                    v36 = v67;
                  }
                  if ( ++v37 >= *v36 )
                    goto LABEL_39;
                }
                WdLogSingleEntry3(2LL, (unsigned int)v67[v38 + 3], v37, v39);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                  (unsigned int)v67[17 * v37 + 3],
                  v37,
                  *a4,
                  0LL,
                  0LL);
              }
              else
              {
LABEL_39:
                CurrentProcess = PsGetCurrentProcess(v36, v33, v34, v35);
                ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
                v27 = v70;
                if ( ProcessSessionId != v70 )
                {
                  Object = 0LL;
                  v49 = DXGGLOBAL_GetGlobal();
                  v50 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                          *((DXGSESSIONMGR **)v49 + 122),
                          v27,
                          (struct _KPROCESS **)&Object);
                  *a4 = v50;
                  if ( v50 < 0 )
                  {
                    WdLogSingleEntry2(2LL, (unsigned int)v27, v50);
                    v28 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
                    goto LABEL_20;
                  }
                  CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
                  ObfDereferenceObject(Object);
                }
                v52 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
                if ( v52 )
                {
                  v53 = PsGetCurrentProcessSessionId(v51);
                  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v52, v53);
                }
                else
                {
                  SessionDataForSpecifiedSession = 0LL;
                }
                v71 = SessionDataForSpecifiedSession;
                if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18976)
                  || !*((_BYTE *)SessionDataForSpecifiedSession + 18496) )
                {
                  *a4 = -1071775725;
                  WdLogSingleEntry2(2LL, v27, -1071775725LL);
                  v28 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
                  goto LABEL_20;
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v69[0][349] + 656LL)) )
                {
                  LOBYTE(v55) = 1;
                  if ( (unsigned __int8)WdIsDebuggerPresent(v55) )
                  {
                    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
                    __debugbreak();
                  }
                  v72 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v27, 0, 0, 0, 0LL);
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v69[0][349] + 656LL)) )
                {
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_EnableRuntimeDebugBreakForIdd__private_reporting,
                    0x167168Fu,
                    v56,
                    v57,
                    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
                    0);
                  v72 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v27, 0, 0, 0, 0LL);
                }
                memset(v97, 0, 0x48uLL);
                v58 = 216 * *v67 + 80;
                v60 = operator new[](216LL * (unsigned int)*v67 + 96, 0x4B677844u, 256LL, v59);
                if ( v60 )
                {
                  v77 = (ReferenceCounted *)v60;
                  *(_QWORD *)v60 = &ReferenceCounted::`vftable';
                  v61 = (struct _PORT_MESSAGE *)(v60 + 16);
                  *(_DWORD *)(v60 + 8) = 1;
                  *(_QWORD *)v60 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
                  v68 = 0;
                  v89[0] = &v67;
                  v89[1] = &v68;
                  v62 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
                          (_WORD *)(v60 + 16),
                          (__int64)v89,
                          (unsigned __int16)v58 - 80);
                  *a4 = v62;
                  if ( v62 >= 0 )
                  {
                    v63 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v71, (volatile signed __int32 **)&v77);
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
                    v82 = 72LL;
                    v81.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
                    *a4 = DxgkSendDisplayBrokerMessage(0x120000u, v61, 0LL, v97, &v82, 0LL, &v81);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
                    if ( v69[0][25].LowPart != 1 || BYTE1(v69[0][338].LowPart) )
                    {
                      WdLogSingleEntry2(3LL, v69[0], -1071775725LL);
                      *a4 = -1071775725;
                    }
                    else
                    {
                      v64 = *a4;
                      if ( *a4 == -1073741772 )
                      {
                        WdLogSingleEntry1(3LL, *(unsigned int *)v71);
                        *a4 = 0;
                      }
                      else if ( v64 == 192 )
                      {
                        *a4 = -1073741749;
                        WdLogSingleEntry2(3LL, *(unsigned int *)v71, -1073741749LL);
                      }
                      else if ( v64 >= 0 )
                      {
                        MessageId = v97[1].MessageId;
                        if ( (v97[1].MessageId & 0x80000000) == 0 )
                        {
                          DXGSESSIONDATA::SetDisplayConfigDone(v71, v63);
                          MessageId = v97[1].MessageId;
                        }
                        *a4 = MessageId;
                      }
                      else
                      {
                        WdLogSingleEntry2(2LL, *(unsigned int *)v71, *a4);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                          *(unsigned int *)v71,
                          *a4,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v62);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to initialize display broker message, (Status = 0x%I64x).",
                      *a4,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v77, 0LL);
                }
                else
                {
                  WdLogSingleEntry1(6LL, 1130LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262145,
                    -1,
                    (__int64)L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
                    1130LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  *a4 = -1073741801;
                }
              }
              goto LABEL_82;
            }
          }
        }
        else
        {
LABEL_77:
          *a4 = -1073741811;
          WdLogSingleEntry2(2LL, v21, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
            (__int64)v69[0],
            *a4,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_82;
      }
    }
    WdLogSingleEntry2(3LL, v21, -1071775725LL);
    goto LABEL_81;
  }
  WdLogSingleEntry2(3LL, v7, -1073741811LL);
  *a4 = -1073741811;
LABEL_85:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v69, 0LL);
LABEL_86:
  if ( v94 )
    lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator()(v93, v17, v18, v19);
  if ( v96 )
    KeUnstackDetachProcess(&ApcState);
}
