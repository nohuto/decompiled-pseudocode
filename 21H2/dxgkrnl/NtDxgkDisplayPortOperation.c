/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x1C004E190
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1C008224C (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1C02C7760 (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1C02C7A14 (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1C02C7CC8 (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1C02C9AB4 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1C02CAAAC (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  _OWORD *v7; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // r15
  __int64 LowPart; // rsi
  __int64 HighPart; // r14
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r14
  int v16; // r13d
  _DWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  char *v21; // r12
  ULONG64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int DPCaps; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // r8d
  unsigned int v42; // eax
  size_t v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r15
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53[8]; // [rsp+60h] [rbp-138h] BYREF
  int v54; // [rsp+68h] [rbp-130h] BYREF
  __int64 v55; // [rsp+70h] [rbp-128h]
  char v56; // [rsp+78h] [rbp-120h]
  __int64 v57; // [rsp+80h] [rbp-118h] BYREF
  struct DXGADAPTER *v58[2]; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v59; // [rsp+98h] [rbp-100h]
  struct _LUID v60[2]; // [rsp+A0h] [rbp-F8h] BYREF
  int v61; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-E0h]
  size_t Size; // [rsp+C0h] [rbp-D8h]
  _DWORD *v64; // [rsp+C8h] [rbp-D0h]
  _BYTE v65[144]; // [rsp+D0h] [rbp-C8h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DP_AUX_V2__private_reporting,
    0x140F676u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 2213);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2213);
  v53[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v53) < 0 || !v53[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v53) < 0 || !v53[0]) )
  {
    goto LABEL_106;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v60[0].LowPart = *v7;
  v58[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v58, &v60[1]);
  v9 = v58[0];
  if ( !v58[0] )
  {
    LowPart = v60[1].LowPart;
    HighPart = v60[1].HighPart;
    WdLogSingleEntry3(2LL, v60[1].HighPart, v60[1].LowPart, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0LL,
        0,
        -1,
        L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
        HighPart,
        LowPart,
        -1073741811LL,
        0LL,
        0LL);
    goto LABEL_102;
  }
  v15 = (unsigned int)v60[0].HighPart;
  v16 = v60[0].HighPart - 16;
  if ( (unsigned int)(v60[0].HighPart - 17) > 0xFFF )
  {
    WdLogSingleEntry2(3LL, (int)v60[0].LowPart, (unsigned int)v60[0].HighPart);
    goto LABEL_102;
  }
  Size = v16;
  v17 = (_DWORD *)operator new[](v16, 0x4B677844u, 256LL, v8);
  P = v17;
  v64 = v17;
  if ( !v17 )
  {
    DXGADAPTER_REFERENCE::Assign(v58, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v54);
    return 3221225495LL;
  }
  v21 = (char *)(a1 + 16);
  v22 = (ULONG64)&v21[v16];
  if ( v22 < (unsigned __int64)v21 || v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, v21, v16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v9, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v60[1].HighPart, v60[1].LowPart);
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
    ExFreePoolWithTag(v17, 0);
LABEL_102:
    DXGADAPTER_REFERENCE::Assign(v58, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v54);
    }
    return 3221225485LL;
  }
  v24 = *((_QWORD *)v9 + 349);
  if ( !v24 )
  {
    v44 = v60[1].LowPart;
    v45 = v60[1].HighPart;
    WdLogSingleEntry3(2LL, v60[1].HighPart, v60[1].LowPart, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v47,
        v46,
        v48,
        0LL,
        0,
        -1,
        L"Non-display adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
        v45,
        v44,
        -1073741811LL,
        0LL,
        0LL);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v9 + 181) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v24);
    v25[3] = v60[1].HighPart;
    v25[4] = v60[1].LowPart;
    v26 = -1073741637;
    v25[5] = -1073741637LL;
    goto LABEL_30;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v57, *(_QWORD *)(v24 + 104));
  v30 = (int)v60[0].LowPart;
  switch ( v60[0].LowPart )
  {
    case 1u:
      if ( (unsigned int)v15 < 0x18 )
      {
        v31 = v15;
        v32 = 1LL;
        goto LABEL_44;
      }
      DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v9 + 349), (struct _DXGKARG_QUERYDPCAPS *)v17);
      goto LABEL_94;
    case 2u:
      if ( (unsigned int)v15 < 0x2C )
      {
        v31 = v15;
        v32 = 2LL;
        goto LABEL_44;
      }
      DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v9 + 349), (struct _DXGKARG_GETDPADDRESS *)v17);
      goto LABEL_94;
    case 3u:
      if ( (unsigned int)v15 < 0x38 || (*v17 & 1) != 0 )
      {
        v31 = v15;
        v32 = 3LL;
        goto LABEL_44;
      }
      if ( *((_BYTE *)v17 + 12) > 0x10u )
        goto LABEL_40;
      DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(
                 *((ADAPTER_DISPLAY **)v9 + 349),
                 (struct _DXGKARG_DPAUXIOTRANSMISSION *)v17);
      goto LABEL_94;
    case 4u:
      if ( (unsigned int)v15 < 0x3C )
      {
        v31 = v15;
        goto LABEL_64;
      }
      v38 = v17[4];
      if ( v38 + 40 > v16 )
      {
        v31 = v38;
        goto LABEL_64;
      }
      v39 = (unsigned int)v17[6];
      if ( (unsigned int)v39 > v38 )
      {
LABEL_68:
        v31 = v39;
        goto LABEL_64;
      }
      v40 = v17[5];
      if ( v40 > v38 )
      {
        v31 = v40;
        goto LABEL_64;
      }
      v41 = *v17;
      if ( (*v17 & 3) != 0 && ((v41 & 1) == 0 || (_DWORD)v39) )
      {
        if ( (v41 & 2) == 0 )
          goto LABEL_78;
        if ( v40 )
        {
          v39 = (unsigned int)v17[2];
          if ( (_DWORD)v39 != 110 )
            goto LABEL_68;
LABEL_78:
          v42 = (v41 >> 3) & 7;
          if ( ((v41 & 4) == 0 || v42 == 1) && v42 <= 4 )
          {
            DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
                       *((ADAPTER_DISPLAY **)v9 + 349),
                       (struct _DXGKARG_DPI2CIOTRANSMISSION *)v17);
LABEL_94:
            v26 = DPCaps;
            v59 = DPCaps;
            v43 = Size;
            if ( (unsigned __int64)&v21[Size] > MmUserProbeAddress || &v21[Size] <= v21 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v21, v17, v43);
            goto LABEL_53;
          }
          v31 = (*v17 >> 3) & 7;
LABEL_64:
          v32 = 4LL;
          goto LABEL_44;
        }
      }
      v30 = 4LL;
      goto LABEL_39;
  }
  if ( v60[0].LowPart != 5 )
  {
LABEL_39:
    WdLogSingleEntry1(3LL, v30);
LABEL_40:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v57 + 40));
    goto LABEL_26;
  }
  if ( (unsigned int)v15 < 0x3C )
  {
    v31 = v15;
LABEL_43:
    v32 = 5LL;
LABEL_44:
    WdLogSingleEntry2(3LL, v32, v31);
    goto LABEL_40;
  }
  v33 = v17[2];
  if ( v33 + 28 > v16 )
  {
    v31 = v33;
    goto LABEL_43;
  }
  v34 = (unsigned int)v17[3];
  if ( (unsigned int)v34 > v33 )
  {
    v31 = (unsigned int)v34;
    goto LABEL_43;
  }
  v35 = v17[4];
  if ( v35 > v33 )
  {
    v31 = v35;
    goto LABEL_43;
  }
  v61 = 127;
  v36 = SidebandMessageParser(v17 + 7, v34, v29, &v61);
  v26 = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry2(3LL, 5LL, v36);
LABEL_53:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v57 + 40));
LABEL_30:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
    ExFreePoolWithTag(v17, 0);
    DXGADAPTER_REFERENCE::Assign(v58, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v54);
    return v26;
  }
  if ( v61 >= 0 && (v61 <= 1 || v61 == 18 || v61 == 32 || v61 == 34 || v61 == 56) )
  {
    DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(
               *((ADAPTER_DISPLAY **)v9 + 349),
               (struct _DXGKARG_DPSBMTRANSMISSION *)v17);
    goto LABEL_94;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v57 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
  ExFreePoolWithTag(v17, 0);
  DXGADAPTER_REFERENCE::Assign(v58, 0LL);
LABEL_106:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v54);
  return 3221225506LL;
}
