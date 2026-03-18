/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D56C0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019438 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C0019528 (DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A1CC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0042DD0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C0042E58 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0130A5C (DxgkWaitForPnPTransitionDone.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01696F0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020B840 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C025A61C (_lambda_1ecc0e3e99406e51155bf30eed62debb_--operator().c)
 *     _lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator() @ 0x1C025A790 (_lambda_1f8a3375a223ce0e5161cba7601a4e42_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C025ABF0 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029EA54 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C3928 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02CC8E4 (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02F49CC (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02F4C4C (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, __int64 a2, DWORD *a3, int *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // r14
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  struct _LUID *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _LUID *v20; // rdx
  __int64 v21; // r8
  __int64 LowPart; // rcx
  struct _LUID v23; // rcx
  void *v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  struct _LUID *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  DWORD *v33; // rdx
  DWORD v34; // edi
  int v35; // eax
  unsigned int v36; // r14d
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  struct DXGGLOBAL *Global; // rax
  int v44; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  struct DXGGLOBAL *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  DXGSESSIONMGR *v55; // rsi
  unsigned int v56; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v58; // rcx
  size_t v59; // rdi
  char *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char *v65; // rsi
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // edi
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  ULONG MessageId; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // [rsp+30h] [rbp-D0h]
  int v83; // [rsp+30h] [rbp-D0h]
  char v84; // [rsp+40h] [rbp-C0h] BYREF
  DWORD *v85; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID *v86[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v87; // [rsp+60h] [rbp-A0h] BYREF
  char v88; // [rsp+64h] [rbp-9Ch] BYREF
  DXGSESSIONDATA *v89; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v91; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v93[2]; // [rsp+88h] [rbp-78h] BYREF
  ReferenceCounted *v94; // [rsp+98h] [rbp-68h] BYREF
  char v95[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _LUID *v96; // [rsp+A8h] [rbp-58h]
  char v97; // [rsp+B0h] [rbp-50h]
  union _LARGE_INTEGER v98; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v99; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-38h] BYREF
  DWORD v101; // [rsp+D0h] [rbp-30h]
  __int64 v102; // [rsp+D8h] [rbp-28h] BYREF
  DWORD v103; // [rsp+E0h] [rbp-20h]
  __int64 *v104[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v105[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v106; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v107; // [rsp+120h] [rbp+20h]
  DXGSESSIONDATA **v108; // [rsp+128h] [rbp+28h]
  int *v109[4]; // [rsp+130h] [rbp+30h] BYREF
  char v110; // [rsp+150h] [rbp+50h]
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+58h] BYREF
  char v112; // [rsp+188h] [rbp+88h]
  struct _PORT_MESSAGE v113[2]; // [rsp+190h] [rbp+90h] BYREF

  v4 = (unsigned int)a2;
  v91 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  v112 = 0;
  v93[0] = CurrentProcessSessionId;
  *((_QWORD *)&v106 + 1) = &v91;
  v107 = v93;
  v108 = &v89;
  v89 = 0LL;
  *(_QWORD *)&v106 = a4;
  DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_((__int64)v109, &v106);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v11[3] = v4;
    v12 = -1073741789;
    v11[4] = -1073741789LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    goto LABEL_8;
  }
  v85 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = *v85;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    v12 = -1073741811;
LABEL_8:
    *a4 = v12;
    goto LABEL_81;
  }
  v16 = 68 * v13 + 4;
  if ( v4 < v16 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v16, v9);
    v11[3] = v4;
    v12 = -1073741789;
    v11[4] = *v85;
    v11[5] = -1073741789LL;
    goto LABEL_7;
  }
  v86[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v86, (unsigned int)v7);
  if ( v86[0] )
  {
    v91 = *(_QWORD *)&v86[0][39].HighPart;
    v92 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v86[0], v17, 0LL, &v92);
    v93[0] = v92;
    v96 = v86[0];
    v97 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    LowPart = v86[0][25].LowPart;
    if ( (_DWORD)LowPart != 1 )
      goto LABEL_76;
    v20 = v86[0];
    if ( BYTE1(v86[0][326].LowPart) )
      goto LABEL_76;
    v23 = v86[0][337];
    if ( !*(_QWORD *)&v23
      || (v86[0][43].HighPart & 0x100) == 0
      || (v23 = (struct _LUID)*(unsigned int *)(*(_QWORD *)&v23 + 80LL), *v85 > v23.LowPart)
      || (v87 = 0, !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v86[0], v86[0], &v87, 0LL)) )
    {
      v80 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(v23, v20);
      *(struct _LUID **)(v80 + 24) = v86[0];
      *(_QWORD *)(v80 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v80);
      *a4 = -1073741811;
      goto LABEL_78;
    }
    v24 = (void *)v86[0][27];
    ObfReferenceObject(v24);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    v25 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v87, 2);
    *a4 = v25;
    if ( v25 < 0 )
    {
      ObfDereferenceObject(v24);
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v29 = (struct _LUID *)v87;
      goto LABEL_19;
    }
    *a4 = DpiFdoWaitConnectionChangeComplete(v24);
    ObfDereferenceObject(v24);
    if ( *a4 < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      *(struct _LUID **)(v32 + 24) = v86[0];
      *(_QWORD *)(v32 + 32) = *a4;
      *(_QWORD *)(v32 + 40) = -1071775725LL;
      WdLogEvent5_WdError(v32);
LABEL_77:
      *a4 = -1071775725;
LABEL_78:
      if ( v97 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
      goto LABEL_80;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    LowPart = v86[0][25].LowPart;
    if ( (_DWORD)LowPart != 1 || BYTE1(v86[0][326].LowPart) )
    {
LABEL_76:
      v81 = WdLogNewEntry5_WdWarning(LowPart, v20, v21);
      *(struct _LUID **)(v81 + 24) = v86[0];
      *(_QWORD *)(v81 + 32) = -1071775725LL;
      WdLogEvent5_WdWarning(v81);
      goto LABEL_77;
    }
    v33 = v85;
    v104[0] = (__int64 *)v86;
    v34 = 0;
    v84 = 0;
    v104[1] = (__int64 *)&v84;
    if ( !*v85 )
    {
LABEL_74:
      *a4 = -1073741811;
      v28 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v33);
      v29 = v86[0];
LABEL_19:
      v28[3] = v29;
LABEL_20:
      v28[4] = *a4;
      goto LABEL_21;
    }
    do
    {
      v35 = lambda_1ecc0e3e99406e51155bf30eed62debb_::operator()(v104, v34, &v33[17 * v34 + 1]);
      *a4 = v35;
      if ( v35 < 0 )
        goto LABEL_78;
      v33 = v85;
      ++v34;
    }
    while ( v34 < *v85 );
    if ( !v84 )
      goto LABEL_74;
    v36 = 0;
    if ( *v85 )
    {
      while ( 1 )
      {
        v37 = 17LL * v36;
        v38 = MonitorSetScaleFactorOverride(v86[0], v33[v37 + 3], v33[v37 + 12]);
        *a4 = v38;
        if ( v38 < 0 )
          break;
        v41 = MonitorSetPhysicalSizeOverride(v86[0], v85[v37 + 3], v85[v37 + 13], v85[v37 + 14]);
        *a4 = v41;
        if ( v41 < 0 )
          goto LABEL_42;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_VAIL_Monitor_Projection__private_reporting,
          0x146C1D8u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
          1,
          v82);
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
          0x146C4AAu,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
          0,
          v83);
        v33 = v85;
        if ( v85[v37 + 15] || v85[v37 + 16] || v85[v37 + 17] )
        {
          v100 = *(_QWORD *)&v85[v37 + 1];
          v101 = v85[v37 + 3];
          v102 = *(_QWORD *)&v85[v37 + 15];
          v103 = v85[v37 + 17];
          Global = DXGGLOBAL::GetGlobal(LowPart, (__int64)v85);
          v44 = REMOTEMONITORMAPPING::AddMapping(
                  (struct DXGGLOBAL *)((char *)Global + 304616),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v102,
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v100);
          *a4 = v44;
          if ( v44 < 0 )
          {
LABEL_42:
            v28 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v42);
            v54 = v85[17 * v36 + 3];
            goto LABEL_44;
          }
          v33 = v85;
        }
        if ( ++v36 >= *v33 )
          goto LABEL_39;
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v54 = v85[v37 + 3];
LABEL_44:
      v28[3] = v54;
      v28[4] = v36;
      v28[5] = *a4;
LABEL_21:
      WdLogEvent5_WdError(v28);
      goto LABEL_78;
    }
LABEL_39:
    CurrentProcess = PsGetCurrentProcess(LowPart, v33);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v49 = v87;
    if ( ProcessSessionId != v87 )
    {
      Object = 0LL;
      v50 = DXGGLOBAL::GetGlobal(v48, v47);
      v51 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v50 + 102),
              v49,
              (struct _KPROCESS **)&Object);
      *a4 = v51;
      if ( v51 < 0 )
      {
LABEL_41:
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
        v28[3] = v49;
        goto LABEL_20;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v55 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v48, v47) + 102);
    if ( v55 )
    {
      v56 = PsGetCurrentProcessSessionId(v53, v52);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v55, v56);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v89 = SessionDataForSpecifiedSession;
    if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18944) || !*((_BYTE *)SessionDataForSpecifiedSession + 18488) )
    {
      *a4 = -1071775725;
      goto LABEL_41;
    }
    if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v86[0][337] + 560LL)) )
    {
      LOBYTE(v58) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v58) )
      {
        DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
        __debugbreak();
      }
      v93[1] = 0LL;
      DxgkLogCodePointPacketForSession(0x72u, v49, 0, 0, 0, 0LL);
    }
    memset(v113, 0, 0x48uLL);
    v59 = 200LL * *v85 + 80;
    v60 = (char *)operator new[](200LL * *v85 + 96, 0x4B677844u, PagedPool);
    v65 = v60;
    if ( !v60 )
    {
      v66 = WdLogNewEntry5_WdLowResource(v62, v61, v63, v64);
      *(_QWORD *)(v66 + 24) = 1066LL;
      WdLogEvent5_WdLowResource(v66);
      *a4 = -1073741801;
      goto LABEL_78;
    }
    memset(v60, 0, v59);
    v94 = (ReferenceCounted *)v65;
    *(_QWORD *)v65 = &ReferenceCounted::`vftable';
    *((_DWORD *)v65 + 2) = 1;
    *(_QWORD *)v65 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
    v105[0] = &v85;
    v105[1] = &v88;
    v67 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
            (_WORD *)v65 + 8,
            (__int64)v105,
            (unsigned __int16)v59 - 80);
    *a4 = v67;
    if ( v67 >= 0 )
    {
      v71 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v89, (__int64 *)&v94);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
      v99 = 72LL;
      v98.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
      *a4 = DxgkSendDisplayBrokerMessage(1179648LL, (struct _PORT_MESSAGE *)(v65 + 16), 0LL, v113, &v99, 0LL, &v98);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
      v74 = v86[0][25].LowPart;
      if ( (_DWORD)v74 != 1 || BYTE1(v86[0][326].LowPart) )
      {
        v79 = WdLogNewEntry5_WdWarning(v74, v72, v73);
        *(struct _LUID **)(v79 + 24) = v86[0];
        *(_QWORD *)(v79 + 32) = -1071775725LL;
        WdLogEvent5_WdWarning(v79);
        *a4 = -1071775725;
        goto LABEL_72;
      }
      v75 = *a4;
      if ( *a4 == -1073741772 )
      {
        v76 = WdLogNewEntry5_WdWarning(v74, v72, v73);
        *(_QWORD *)(v76 + 24) = *(unsigned int *)v89;
        WdLogEvent5_WdWarning(v76);
        *a4 = 0;
        goto LABEL_72;
      }
      if ( v75 == 192 )
      {
        *a4 = -1073741749;
        v77 = WdLogNewEntry5_WdWarning(v74, v72, v73);
        *(_QWORD *)(v77 + 24) = *(unsigned int *)v89;
        *(_QWORD *)(v77 + 32) = *a4;
        WdLogEvent5_WdWarning(v77);
        goto LABEL_72;
      }
      if ( v75 >= 0 )
      {
        MessageId = v113[1].MessageId;
        if ( (v113[1].MessageId & 0x80000000) == 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(v89, v71);
          MessageId = v113[1].MessageId;
        }
        *a4 = MessageId;
        goto LABEL_72;
      }
      v70 = WdLogNewEntry5_WdError(v74, v72);
      *(_QWORD *)(v70 + 24) = *(unsigned int *)v89;
      *(_QWORD *)(v70 + 32) = *a4;
    }
    else
    {
      v70 = WdLogNewEntry5_WdError(v69, v68);
      *(_QWORD *)(v70 + 24) = *a4;
    }
    WdLogEvent5_WdError(v70);
LABEL_72:
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v94, 0LL);
    goto LABEL_78;
  }
  v19 = WdLogNewEntry5_WdWarning(0LL, v17, v18);
  *(_QWORD *)(v19 + 24) = v7;
  *(_QWORD *)(v19 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v19);
  *a4 = -1073741811;
LABEL_80:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v86, 0LL);
LABEL_81:
  if ( v110 )
    lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator()(v109, v15);
  if ( v112 )
    KeUnstackDetachProcess(&ApcState);
}
