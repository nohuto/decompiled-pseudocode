/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1628
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800A2734 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x180041E34 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingP.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F504 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800A0B54 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800A0BFC (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800A0D18 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A0F40 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?reserve@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1800A2A70 (-reserve@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z @ 0x1800A2AAC (-reserve@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800A2AF4 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvi.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800A6860 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800A68D8 (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800A895C (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800A8F90 (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800A9104 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x1800A9490 (-CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800A9598 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800A95B4 (-IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800A95F0 (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 *     ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800A9884 (-IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800A9A48 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1800A9AB4 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        bool *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  const GUID *v9; // rax
  __int32 v10; // ecx
  char v11; // al
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // r12
  __int64 v16; // r14
  double v17; // xmm7_8
  _DWORD *v18; // r8
  struct Windows::UI::Color *v19; // rcx
  struct Windows::UI::Color *v20; // rdx
  int v21; // esi
  double v22; // xmm6_8
  bool v23; // dl
  int v24; // eax
  _BYTE *v25; // r14
  _BYTE *v26; // r12
  int v27; // ecx
  __int64 v28; // rsi
  __int64 v29; // r15
  struct Windows::UI::Color *v30; // r8
  unsigned int v31; // eax
  char *v32; // r15
  __int64 v33; // r12
  int updated; // eax
  unsigned int v35; // esi
  int v36; // eax
  unsigned int v37; // esi
  size_t v38; // r12
  void *v39; // rax
  void *v40; // rsi
  const struct std::nothrow_t *v41; // rdx
  size_t v42; // rax
  HidLampMultiUpdateReportBuilder *v43; // rdi
  HidLampRangeUpdateReportBuilder *v44; // rbx
  struct LampUpdateState *v45; // rdx
  unsigned int v46; // ecx
  int v47; // eax
  const struct std::nothrow_t *v48; // rdx
  unsigned int v49; // eax
  int v50; // r8d
  size_t i; // rax
  int v52; // r10d
  unsigned int v53; // r10d
  int v54; // eax
  const struct std::nothrow_t *v55; // rdx
  int v56; // eax
  unsigned int v57; // r12d
  const struct std::nothrow_t *v58; // rdx
  int v59; // eax
  unsigned int v60; // esi
  unsigned int v61; // [rsp+34h] [rbp-134h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-130h] BYREF
  unsigned int v63; // [rsp+3Ch] [rbp-12Ch] BYREF
  unsigned int v64; // [rsp+40h] [rbp-128h] BYREF
  HidLampMultiUpdateReportBuilder *v65; // [rsp+48h] [rbp-120h] BYREF
  HidLampRangeUpdateReportBuilder *v66; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-110h] BYREF
  struct Windows::UI::Color *v68[2]; // [rsp+60h] [rbp-108h] BYREF
  struct Windows::UI::Color *v69; // [rsp+70h] [rbp-F8h]
  const wchar_t *v70; // [rsp+78h] [rbp-F0h] BYREF
  struct LampAttributes *v71; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp-E0h] BYREF
  bool *v73; // [rsp+90h] [rbp-D8h]
  int v74[2]; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v75; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE *v76; // [rsp+B0h] [rbp-B8h]
  int v77; // [rsp+B8h] [rbp-B0h] BYREF
  char v78; // [rsp+BCh] [rbp-ACh]
  GUID v79; // [rsp+C0h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+D0h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+E0h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v73 = a3;
  *a3 = 0;
  v77 = 0;
  v78 = 0;
  _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(&v77);
  v8 = dword_1802063F0;
  if ( (unsigned int)dword_1802063F0 > 5 )
  {
    v9 = (const GUID *)_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId((__int64)&v77);
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1802063F0,
      (unsigned __int8 *)dword_1801CAF37,
      &v79,
      v9,
      2u,
      &v81);
    v8 = dword_1802063F0;
  }
  if ( a2 )
  {
    if ( v8 > 5 )
    {
      v62 = *((_DWORD *)a2 + 6);
      v71 = (struct LampAttributes *)"Updating ViewClient";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v5,
        byte_1801CAFA7,
        v6,
        v7,
        (const unsigned __int16 **)&v71,
        (__int64)&v62);
    }
  }
  else
  {
    if ( v8 <= 5 )
      goto LABEL_169;
    v70 = L"null";
    *(_QWORD *)v74 = "Updating ViewClient";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v5,
      byte_1801CAF64,
      v6,
      v7,
      (const unsigned __int16 **)v74,
      &v70);
  }
  if ( !a2 || !*(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
  {
LABEL_169:
    if ( *((_BYTE *)this + 144)
      && (v59 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1), v60 = v59, v59 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v59);
      if ( v77 == 1 )
      {
        if ( v78 )
          EventActivityIdControl(4u, &ActivityId);
        v77 = 2;
        _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
      }
      return v60;
    }
    else
    {
      *((_BYTE *)this + 144) = 0;
      if ( v77 == 1 )
      {
        if ( v78 )
          EventActivityIdControl(4u, &ActivityId);
        v77 = 2;
        _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
      }
      return 0LL;
    }
  }
  v10 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0);
  v11 = *((_BYTE *)this + 144);
  if ( !v10 )
  {
    if ( v11 )
    {
      if ( v77 == 1 )
      {
        if ( v78 )
          EventActivityIdControl(4u, &ActivityId);
        v77 = 2;
        _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
      }
      return 0LL;
    }
LABEL_18:
    v13 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v13);
      if ( v77 == 1 )
      {
        if ( v78 )
          EventActivityIdControl(4u, &ActivityId);
        v77 = 2;
        _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
      }
      return v14;
    }
    goto LABEL_181;
  }
  if ( !v11 )
    goto LABEL_18;
LABEL_181:
  LODWORD(v65) = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
  v15 = (int)v65;
  v16 = *((_QWORD *)a2 + 4);
  v17 = *(double *)(v16 + 4192);
  *(_OWORD *)v68 = 0LL;
  v69 = 0LL;
  std::vector<Windows::UI::Color>::reserve(v68, (int)v65);
  v21 = 0;
  v20 = v69;
  while ( v21 < (int)v15 )
  {
    v18 = (_DWORD *)(v16 + 36LL * *(int *)(v16 + 524) + 5224 + 4LL * v21);
    v19 = v68[1];
    if ( v20 == v68[1] )
    {
      std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        (const void **)v68,
        (_BYTE *)v68[1],
        v18);
      v20 = v69;
    }
    else
    {
      *(_DWORD *)v68[1] = *v18;
      v68[1] = (struct Windows::UI::Color *)((char *)v19 + 4);
    }
    ++v21;
  }
  v71 = *(struct LampAttributes **)(*((_QWORD *)this + 3) + 568LL);
  v75 = 0LL;
  v76 = 0LL;
  std::vector<LampUpdateState>::reserve(&v75, v15);
  v22 = *((double *)this + 19);
  v23 = v17 != v22;
  v24 = 0;
  v25 = v76;
  v26 = (_BYTE *)*((_QWORD *)&v75 + 1);
  v27 = (int)v65;
  while ( 1 )
  {
    v62 = v24;
    if ( v24 >= v27 )
      break;
    v28 = v24;
    v29 = *((_QWORD *)this + 20);
    if ( !*((_BYTE *)this + 144)
      || v23
      || *(_BYTE *)(v29 + 4LL * v24) != *((_BYTE *)v68[0] + 4 * v24)
      || *(_BYTE *)(v29 + 4LL * v24 + 1) != *((_BYTE *)v68[0] + 4 * v24 + 1)
      || *(_BYTE *)(v29 + 4LL * v24 + 2) != *((_BYTE *)v68[0] + 4 * v24 + 2)
      || *(_BYTE *)(v29 + 4LL * v24 + 3) != *((_BYTE *)v68[0] + 4 * v24 + 3) )
    {
      LOBYTE(v70) = (int)((double)*((unsigned __int8 *)v68[0] + 4 * v24) * v17);
      BYTE1(v70) = (int)((double)*((unsigned __int8 *)v68[0] + 4 * v24 + 1) * v17);
      BYTE2(v70) = (int)((double)*((unsigned __int8 *)v68[0] + 4 * v24 + 2) * v17);
      BYTE3(v70) = (int)((double)*((unsigned __int8 *)v68[0] + 4 * v24 + 3) * v17);
      v67 = (unsigned int)v70;
      if ( *((_DWORD *)v71 + 7) )
        NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v67,
          v71,
          v68[0],
          (struct LampColor *)&v64);
      else
        NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v67,
          v71,
          v68[0],
          (struct LampColor *)&v64);
      if ( *((_BYTE *)this + 144) )
        goto LABEL_45;
      LOBYTE(v66) = (int)((double)*(unsigned __int8 *)(v29 + 4 * v28) * v22);
      BYTE1(v66) = (int)((double)*(unsigned __int8 *)(v29 + 4 * v28 + 1) * v22);
      BYTE2(v66) = (int)((double)*(unsigned __int8 *)(v29 + 4 * v28 + 2) * v22);
      BYTE3(v66) = (int)((double)*(unsigned __int8 *)(v29 + 4 * v28 + 3) * v22);
      v63 = (unsigned int)v66;
      if ( *((_DWORD *)v71 + 7) )
        NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v63,
          v71,
          v30,
          (struct LampColor *)&v61);
      else
        NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v63,
          v71,
          v30,
          (struct LampColor *)&v61);
      if ( *((_BYTE *)this + 144) )
      {
LABEL_45:
        v31 = v64;
        if ( (_BYTE)v64 != (_BYTE)v61
          || *(_WORD *)((char *)&v64 + 1) != *(_WORD *)((char *)&v61 + 1)
          || HIBYTE(v64) != HIBYTE(v61) )
        {
LABEL_50:
          v72 = __PAIR64__(v31, v62);
          if ( v25 == v26 )
          {
            std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((const void **)&v75, v26, &v72);
            v25 = v76;
            v26 = (_BYTE *)*((_QWORD *)&v75 + 1);
          }
          else
          {
            *(_QWORD *)v26 = v72;
            v26 += 8;
            *((_QWORD *)&v75 + 1) = v26;
          }
        }
        v27 = (int)v65;
        v23 = v17 != v22;
        goto LABEL_54;
      }
      v31 = v64;
      goto LABEL_50;
    }
LABEL_54:
    v24 = v62 + 1;
  }
  v32 = (char *)v75;
  v33 = (__int64)&v26[-v75];
  if ( (unsigned __int64)v33 >= 8 )
  {
    v61 = 0;
    v65 = 0LL;
    updated = HidLampArrayDevice::CreateMultiUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v65);
    v35 = updated;
    if ( updated >= 0 )
    {
      v66 = 0LL;
      v36 = HidLampArrayDevice::CreateRangeUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v66);
      v37 = v36;
      if ( v36 >= 0 )
      {
        v38 = v33 >> 3;
        v39 = operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
        v40 = v39;
        if ( v39 )
        {
          memset_0(v39, 0, v38);
          v42 = 0LL;
          v43 = v65;
          v44 = v66;
          while ( 1 )
          {
            v62 = v42;
            *(_QWORD *)v74 = v42;
            if ( v42 >= v38 )
              break;
            if ( !HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(v44, (struct LampUpdateState *)&v32[8 * v42])
              || (HidLampRangeUpdateReportBuilder::IncludeInNextUpdate(v44, v45), *(_QWORD *)v74 == v38 - 1) )
            {
              v46 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v44);
              if ( v46 >= *((_DWORD *)v43 + 4) )
              {
                v61 += v46;
                if ( v61 >= v38 )
                  *((_DWORD *)v44 + 5) |= 1u;
                *v73 = 1;
                v47 = HidLampRangeUpdateReportBuilder::SendLampStateUpdate(v44);
                v63 = v47;
                if ( v47 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F8,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                    (const char *)(unsigned int)v47);
                  if ( v40 )
                    operator delete(v40, v48);
                  if ( v44 )
                    RefCountedObject::Release(v44);
                  RefCountedObject::Release(v43);
                  if ( v32 )
                    std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
                  std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
                  if ( v77 == 1 )
                  {
                    if ( v78 )
                      EventActivityIdControl(4u, &ActivityId);
                    v77 = 2;
                    _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
                  }
                  return v63;
                }
                while ( 1 )
                {
                  v49 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v44);
                  if ( (unsigned int)v41 <= v50 - v49 )
                    break;
                  *((_BYTE *)v40 + (unsigned int)v41) = 1;
                }
              }
              *(_OWORD *)((char *)v44 + 20) = 0LL;
              *((_BYTE *)v44 + 16) = 0;
            }
            v42 = v62 + 1;
          }
          if ( v61 >= v38 )
          {
LABEL_154:
            *((double *)this + 19) = v17;
            if ( (struct Windows::UI::Color **)((char *)this + 160) != v68 )
            {
              std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
              *((struct Windows::UI::Color **)this + 20) = v68[0];
              *((struct Windows::UI::Color **)this + 21) = v68[1];
              *((_QWORD *)this + 22) = v69;
              *(_OWORD *)v68 = 0LL;
              v69 = 0LL;
            }
            *((_BYTE *)this + 144) = 1;
            if ( v40 )
              operator delete(v40, v41);
            if ( v44 )
              RefCountedObject::Release(v44);
            if ( v43 )
              RefCountedObject::Release(v43);
            if ( v32 )
              std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
            if ( v77 == 1 )
            {
              if ( v78 )
                EventActivityIdControl(4u, &ActivityId);
              v77 = 2;
              _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
            }
            return 0LL;
          }
          else
          {
            for ( i = 0LL; ; i = v63 + 1 )
            {
              v63 = i;
              if ( i >= v38 )
                break;
              if ( !*((_BYTE *)v40 + i) )
              {
                HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(v43, (struct LampUpdateState *)&v32[8 * i]);
                v53 = v52 + 1;
                v61 = v53;
                if ( *((_DWORD *)v43 + 6) >= *((_DWORD *)v43 + 4) )
                {
                  if ( v53 >= v38 )
                    *((_DWORD *)v43 + 7) |= 1u;
                  *v73 = 1;
                  v54 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v43);
                  v67 = v54;
                  if ( v54 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x21C,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                      (const char *)(unsigned int)v54);
                    if ( v40 )
                      operator delete(v40, v55);
                    if ( v44 )
                      RefCountedObject::Release(v44);
                    RefCountedObject::Release(v43);
                    if ( v32 )
                      std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
                    std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
                    if ( v77 == 1 )
                    {
                      if ( v78 )
                        EventActivityIdControl(4u, &ActivityId);
                      v77 = 2;
                      _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
                    }
                    return v67;
                  }
                  HidLampMultiUpdateReportBuilder::Reset(v43);
                }
              }
            }
            if ( !*((_DWORD *)v43 + 6) )
              goto LABEL_154;
            *((_DWORD *)v43 + 7) |= 1u;
            *v73 = 1;
            v56 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v43);
            v57 = v56;
            if ( v56 >= 0 )
              goto LABEL_154;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22A,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v56);
            if ( v40 )
              operator delete(v40, v58);
            if ( v44 )
              RefCountedObject::Release(v44);
            RefCountedObject::Release(v43);
            if ( v32 )
              std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
            std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
            if ( v77 == 1 )
            {
              if ( v78 )
                EventActivityIdControl(4u, &ActivityId);
              v77 = 2;
              _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
            }
            return v57;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DC,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
            (const char *)0x8007000ELL);
          if ( v66 )
            RefCountedObject::Release(v66);
          if ( v65 )
            RefCountedObject::Release(v65);
          if ( v32 )
            std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
          std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
          if ( v77 == 1 )
          {
            if ( v78 )
              EventActivityIdControl(4u, &ActivityId);
            v77 = 2;
            _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
          }
          return 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          (const char *)(unsigned int)v36);
        if ( v66 )
          RefCountedObject::Release(v66);
        if ( v65 )
          RefCountedObject::Release(v65);
        if ( v32 )
          std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
        std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
        if ( v77 == 1 )
        {
          if ( v78 )
            EventActivityIdControl(4u, &ActivityId);
          v77 = 2;
          _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
        }
        return v37;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)updated);
      if ( v65 )
        RefCountedObject::Release(v65);
      if ( v32 )
        std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)(8 * ((v25 - v32) >> 3)));
      std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
      if ( v77 == 1 )
      {
        if ( v78 )
          EventActivityIdControl(4u, &ActivityId);
        v77 = 2;
        _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
      }
      return v35;
    }
  }
  else
  {
    if ( (_QWORD)v75 )
      std::_Deallocate<16,0>((void *)v75, (const struct std::nothrow_t *)(8 * ((__int64)&v25[-v75] >> 3)));
    std::vector<Windows::UI::Color>::_Tidy((__int64)v68);
    if ( v77 == 1 )
    {
      if ( v78 )
        EventActivityIdControl(4u, &ActivityId);
      v77 = 2;
      _tlgWriteActivityAutoStop<0,5>(&dword_1802063F0, &v79);
    }
    return 0LL;
  }
}
