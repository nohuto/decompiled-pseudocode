/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x1C004EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     DisplayPortEscapeAuxIoTransmission @ 0x1C004EA54 (DisplayPortEscapeAuxIoTransmission.c)
 *     DisplayPortEscapeGetAddress @ 0x1C004EB44 (DisplayPortEscapeGetAddress.c)
 *     DisplayPortEscapeGetDaps @ 0x1C004EBF8 (DisplayPortEscapeGetDaps.c)
 *     DisplayPortEscapeI2cIoTransmission @ 0x1C004ECA4 (DisplayPortEscapeI2cIoTransmission.c)
 *     DisplayPortEscapeSbmTransmission @ 0x1C004EE20 (DisplayPortEscapeSbmTransmission.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1C006E5A8 (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1C021841C (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1C021867C (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1C02188DC (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1C021A2A4 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1C021BA88 (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // r13
  _QWORD *v10; // rax
  __int64 HighPart; // r15
  __int64 v12; // rcx
  size_t v13; // r12
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r12
  void *v26; // rbx
  struct DXGPROCESS *Current; // rbx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int DPCaps; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // eax
  void *v56; // rcx
  size_t v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // [rsp+30h] [rbp-158h]
  _BYTE v66[8]; // [rsp+40h] [rbp-148h] BYREF
  int v67; // [rsp+48h] [rbp-140h] BYREF
  __int64 v68; // [rsp+50h] [rbp-138h]
  char v69; // [rsp+58h] [rbp-130h]
  __int64 v70; // [rsp+60h] [rbp-128h] BYREF
  struct DXGADAPTER *v71[2]; // [rsp+68h] [rbp-120h] BYREF
  __int64 v72; // [rsp+78h] [rbp-110h]
  struct _LUID v73[2]; // [rsp+80h] [rbp-108h] BYREF
  int v74; // [rsp+90h] [rbp-F8h] BYREF
  PVOID P; // [rsp+98h] [rbp-F0h]
  void *v76; // [rsp+A0h] [rbp-E8h]
  void *v77; // [rsp+A8h] [rbp-E0h]
  size_t Size; // [rsp+B0h] [rbp-D8h]
  _DWORD *v79; // [rsp+B8h] [rbp-D0h]
  _BYTE v80[144]; // [rsp+C0h] [rbp-C8h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DP_AUX_V2__private_reporting,
    0x140F676u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v65);
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2213);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2213LL);
  v66[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v66) < 0 || !v66[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v66) < 0 || !v66[0]) )
  {
    goto LABEL_119;
  }
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v73[0].LowPart = *v5;
  v71[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v71, &v73[1]);
  v9 = v71[0];
  if ( !v71[0] )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v10[3] = v73[1].HighPart;
    v10[4] = v73[1].LowPart;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_115:
    DXGADAPTER_REFERENCE::Assign(v71, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v60);
    if ( v69 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v67);
    }
    return 3221225485LL;
  }
  HighPart = (unsigned int)v73[0].HighPart;
  v12 = (unsigned int)(v73[0].HighPart - 16);
  if ( (unsigned int)(v73[0].HighPart - 17) > 0xFFF )
  {
    v59 = WdLogNewEntry5_WdWarning(v12, v6, v8);
    *(_QWORD *)(v59 + 24) = (int)v73[0].LowPart;
    *(_QWORD *)(v59 + 32) = HighPart;
    WdLogEvent5_WdWarning(v59);
    goto LABEL_115;
  }
  v13 = (int)v12;
  Size = (int)v12;
  v14 = operator new[]((int)v12, 0x4B677844u, PagedPool);
  P = v14;
  v79 = v14;
  if ( !v14 )
  {
    DXGADAPTER_REFERENCE::Assign(v71, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v15);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v67);
    return 3221225495LL;
  }
  v77 = (void *)(a1 + 16);
  v19 = a1 + 16 + v13;
  if ( v19 < a1 + 16 || v19 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v14, (const void *)(a1 + 16), v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, v9, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80, 0LL) < 0 )
    goto LABEL_23;
  if ( !*((_QWORD *)v9 + 337) )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v58[3] = v73[1].HighPart;
    v58[4] = v73[1].LowPart;
    v58[5] = -1073741811LL;
    WdLogEvent5_WdError(v58);
    goto LABEL_24;
  }
  v25 = *((_QWORD *)v9 + 170);
  v26 = 0LL;
  v76 = 0LL;
  if ( !v25 )
  {
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v80);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v80, 3LL) < 0 )
    {
LABEL_23:
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = v73[1].HighPart;
      *(_QWORD *)(v23 + 32) = v73[1].LowPart;
      WdLogEvent5_WdWarning(v23);
LABEL_24:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80, v24);
      ExFreePoolWithTag(v14, 0);
      goto LABEL_115;
    }
    if ( *((_QWORD *)v9 + 338) )
    {
      Current = DXGPROCESS::GetCurrent();
      v72 = *((_QWORD *)v9 + 338) + 72LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v72, 0LL);
      v28 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v9 + 58));
      if ( v28 )
      {
        v26 = *(void **)(v28 + 16);
        v76 = v26;
      }
      else
      {
        v26 = 0LL;
      }
      ExReleasePushLockSharedEx(v72, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v70, *(_QWORD *)(*((_QWORD *)v9 + 337) + 88LL));
  switch ( v73[0].LowPart )
  {
    case 1u:
      if ( (unsigned int)HighPart < 0x18 )
      {
        v32 = WdLogNewEntry5_WdWarning(v73[0].LowPart - 1, v29, v30);
        *(_QWORD *)(v32 + 24) = 1LL;
        goto LABEL_43;
      }
      if ( v25 )
        DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v9 + 337), (struct _DXGKARG_QUERYDPCAPS *)v14);
      else
        DPCaps = DisplayPortEscapeGetDaps(v71, v26, (__int64)v14);
      goto LABEL_109;
    case 2u:
      if ( (unsigned int)HighPart < 0x2C )
      {
        v32 = WdLogNewEntry5_WdWarning(v73[0].LowPart - 2, v29, v30);
        *(_QWORD *)(v32 + 24) = 2LL;
        goto LABEL_43;
      }
      if ( v25 )
        DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v9 + 337), (struct _DXGKARG_GETDPADDRESS *)v14);
      else
        DPCaps = DisplayPortEscapeGetAddress(v71, v26, (__int64)v14);
      goto LABEL_109;
    case 3u:
      if ( (unsigned int)HighPart < 0x38 || (*v14 & 1) != 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v73[0].LowPart - 3, v29, v30);
        *(_QWORD *)(v32 + 24) = 3LL;
        goto LABEL_43;
      }
      if ( *((_BYTE *)v14 + 12) > 0x10u )
        goto LABEL_40;
      if ( v25 )
        DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(
                   *((ADAPTER_DISPLAY **)v9 + 337),
                   (struct _DXGKARG_DPAUXIOTRANSMISSION *)v14);
      else
        DPCaps = DisplayPortEscapeAuxIoTransmission(v71, v26, v14);
      goto LABEL_109;
  }
  v31 = v73[0].LowPart - 4;
  if ( v73[0].LowPart == 4 )
  {
    if ( (unsigned int)HighPart < 0x3C )
    {
      v32 = WdLogNewEntry5_WdWarning(v31, v29, v30);
      *(_QWORD *)(v32 + 24) = 4LL;
      goto LABEL_43;
    }
    v50 = (unsigned int)v14[4];
    v51 = (unsigned int)(HighPart - 16);
    if ( (int)v50 + 40 > (unsigned int)v51 )
    {
      v32 = WdLogNewEntry5_WdWarning(v50, v51, v30);
      *(_QWORD *)(v32 + 24) = 4LL;
      goto LABEL_52;
    }
    v52 = v14[6];
    if ( v52 > (unsigned int)v50 )
    {
      v32 = WdLogNewEntry5_WdWarning(v50, v51, v30);
      *(_QWORD *)(v32 + 24) = 4LL;
      v35 = (unsigned int)v14[6];
      goto LABEL_47;
    }
    v53 = (unsigned int)v14[5];
    if ( (unsigned int)v53 > (unsigned int)v50 )
    {
      v32 = WdLogNewEntry5_WdWarning(v50, v53, v30);
      *(_QWORD *)(v32 + 24) = 4LL;
      v35 = (unsigned int)v14[5];
      goto LABEL_47;
    }
    v54 = (unsigned int)*v14;
    if ( (v54 & 3) != 0 && ((v54 & 1) == 0 || v52) )
    {
      if ( (v54 & 2) == 0 )
      {
LABEL_85:
        v55 = ((unsigned int)v54 >> 3) & 7;
        if ( (v54 & 4) != 0 && v55 != 1 || v55 > 4 )
        {
          v32 = WdLogNewEntry5_WdWarning(v54, v53, v30);
          *(_QWORD *)(v32 + 24) = 4LL;
          v35 = (*v14 >> 3) & 7;
          goto LABEL_47;
        }
        if ( v25 )
          DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
                     *((ADAPTER_DISPLAY **)v9 + 337),
                     (struct _DXGKARG_DPI2CIOTRANSMISSION *)v14);
        else
          DPCaps = DisplayPortEscapeI2cIoTransmission(v71, v26, v14);
        goto LABEL_109;
      }
      if ( (_DWORD)v53 )
      {
        if ( v14[2] != 110 )
        {
          v32 = WdLogNewEntry5_WdWarning(v54, v53, v30);
          *(_QWORD *)(v32 + 24) = 4LL;
          goto LABEL_46;
        }
        goto LABEL_85;
      }
    }
    v32 = WdLogNewEntry5_WdWarning(v54, v53, v30);
    *(_QWORD *)(v32 + 24) = 4LL;
    goto LABEL_39;
  }
  if ( v73[0].LowPart != 5 )
  {
    v32 = WdLogNewEntry5_WdWarning(v31, v29, v30);
    *(_QWORD *)(v32 + 24) = (int)v73[0].LowPart;
LABEL_39:
    WdLogEvent5_WdWarning(v32);
LABEL_40:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v70 + 40), v29);
    goto LABEL_24;
  }
  if ( (unsigned int)HighPart < 0x3C )
  {
    v32 = WdLogNewEntry5_WdWarning(v31, v29, v30);
    *(_QWORD *)(v32 + 24) = 5LL;
LABEL_43:
    *(_QWORD *)(v32 + 32) = HighPart;
    goto LABEL_39;
  }
  v33 = (unsigned int)v14[2];
  v34 = (unsigned int)(HighPart - 16);
  if ( (int)v33 + 28 > (unsigned int)v34 )
  {
    v32 = WdLogNewEntry5_WdWarning(v33, v34, v30);
    *(_QWORD *)(v32 + 24) = 5LL;
LABEL_46:
    v35 = (unsigned int)v14[2];
LABEL_47:
    *(_QWORD *)(v32 + 32) = v35;
    goto LABEL_39;
  }
  v36 = (unsigned int)v14[3];
  if ( (unsigned int)v36 > (unsigned int)v33 )
  {
    v32 = WdLogNewEntry5_WdWarning(v33, v36, v30);
    *(_QWORD *)(v32 + 24) = 5LL;
    v35 = (unsigned int)v14[3];
    goto LABEL_47;
  }
  if ( v14[4] > (unsigned int)v33 )
  {
    v32 = WdLogNewEntry5_WdWarning(v33, v36, v30);
    *(_QWORD *)(v32 + 24) = 5LL;
LABEL_52:
    v35 = (unsigned int)v14[4];
    goto LABEL_47;
  }
  v74 = 127;
  v37 = SidebandMessageParser(v14 + 7, v36, v30, &v74);
  v41 = v37;
  if ( v37 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v42 + 24) = 5LL;
    *(_QWORD *)(v42 + 32) = v41;
    WdLogEvent5_WdWarning(v42);
LABEL_55:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v70 + 40), v43);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80, v44);
    ExFreePoolWithTag(v14, 0);
    DXGADAPTER_REFERENCE::Assign(v71, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v45);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v67);
    return (unsigned int)v41;
  }
  if ( v74 >= 0 && (v74 <= 1 || v74 == 18 || v74 == 32 || v74 == 34 || v74 == 56) )
  {
    if ( v25 )
      DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(
                 *((ADAPTER_DISPLAY **)v9 + 337),
                 (struct _DXGKARG_DPSBMTRANSMISSION *)v14);
    else
      DPCaps = DisplayPortEscapeSbmTransmission(v71, v76, v14);
LABEL_109:
    LODWORD(v41) = DPCaps;
    LODWORD(v72) = DPCaps;
    v56 = v77;
    v57 = Size;
    if ( (unsigned __int64)v77 + Size > MmUserProbeAddress || (char *)v77 + Size <= v77 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v56, v14, v57);
    goto LABEL_55;
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v70 + 40), v38);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80, v49);
  ExFreePoolWithTag(v14, 0);
  DXGADAPTER_REFERENCE::Assign(v71, 0LL);
LABEL_119:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v4);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v63, &EventProfilerExit, v64, v67);
  return 3221225506LL;
}
