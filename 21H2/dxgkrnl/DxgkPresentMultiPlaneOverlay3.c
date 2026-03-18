/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x1C0055734 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C018E420 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C01A07B0 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C0318984 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned int *p_PresentPlaneCount; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned int v22; // eax
  enum _D3DDDI_HDR_METADATA_TYPE v23; // ecx
  unsigned __int8 *v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGCONTEXT *v30; // rsi
  __int64 v31; // rbx
  struct _KEVENT *v32; // rdx
  struct _KEVENT *v33; // rdi
  unsigned int v34; // r14d
  _QWORD *Pool2; // rcx
  unsigned int i; // r14d
  __int64 v37; // r9
  volatile signed __int64 *v38; // r14
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // eax
  const struct DXGDEVICE *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  PVOID v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rbx
  PLIST_ENTRY j; // rdi
  unsigned int v59; // r14d
  struct tagRECT **v60; // rdi
  void **v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  unsigned int v73; // ebx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rcx
  const wchar_t *v83; // r9
  unsigned int v84; // ebx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  struct _KEVENT *v89; // rdi
  struct _KEVENT *v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // r9
  int v98; // ecx
  __int64 *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // edi
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rax
  struct DXGTHREAD *v118; // rax
  int v119; // [rsp+60h] [rbp-278h] BYREF
  int v120; // [rsp+68h] [rbp-270h] BYREF
  __int64 v121; // [rsp+70h] [rbp-268h]
  _DWORD *v122; // [rsp+78h] [rbp-260h]
  int *v123; // [rsp+80h] [rbp-258h]
  PVOID P; // [rsp+88h] [rbp-250h]
  _BYTE v125[32]; // [rsp+90h] [rbp-248h] BYREF
  unsigned int v126; // [rsp+B0h] [rbp-228h]
  DXGCONTEXT *v127; // [rsp+B8h] [rbp-220h] BYREF
  char v128; // [rsp+C0h] [rbp-218h]
  enum _D3DDDI_HDR_METADATA_TYPE v129; // [rsp+C8h] [rbp-210h] BYREF
  unsigned int v130; // [rsp+CCh] [rbp-20Ch] BYREF
  __int64 v131; // [rsp+D0h] [rbp-208h] BYREF
  int v132; // [rsp+D8h] [rbp-200h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v133[2]; // [rsp+E0h] [rbp-1F8h] BYREF
  struct tagRECT **v134[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  unsigned int *v135[2]; // [rsp+100h] [rbp-1D8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v136[2]; // [rsp+110h] [rbp-1C8h] BYREF
  unsigned int v137; // [rsp+120h] [rbp-1B8h]
  struct DXGCONTEXT *v138; // [rsp+130h] [rbp-1A8h] BYREF
  unsigned __int8 *v139; // [rsp+138h] [rbp-1A0h] BYREF
  _BYTE v140[80]; // [rsp+140h] [rbp-198h] BYREF
  __int64 v141; // [rsp+190h] [rbp-148h] BYREF
  struct DXGADAPTER *v142; // [rsp+198h] [rbp-140h]
  char v143; // [rsp+1A0h] [rbp-138h]
  unsigned int v144; // [rsp+1A8h] [rbp-130h]
  _QWORD v145[6]; // [rsp+1B0h] [rbp-128h] BYREF
  char v146; // [rsp+1E0h] [rbp-F8h]
  _BYTE v147[24]; // [rsp+1E8h] [rbp-F0h] BYREF
  char v148[8]; // [rsp+200h] [rbp-D8h] BYREF
  _BYTE v149[16]; // [rsp+208h] [rbp-D0h] BYREF
  DXGADAPTER *v150; // [rsp+218h] [rbp-C0h]
  char v151; // [rsp+220h] [rbp-B8h]
  __int64 v152; // [rsp+228h] [rbp-B0h]
  _BYTE v153[16]; // [rsp+248h] [rbp-90h] BYREF
  __int64 v154; // [rsp+258h] [rbp-80h]
  __int64 v155; // [rsp+288h] [rbp-50h]
  char v156; // [rsp+290h] [rbp-48h]

  v119 = -1073741811;
  memset(v140, 0, sizeof(v140));
  v121 = 0LL;
  v120 = 2164;
  v122 = v140;
  v123 = &v119;
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v120, 2164);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v14 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v15 = *((_QWORD *)Current + 3)) == 0 )
  {
    v15 = v13;
  }
  if ( !a1 )
  {
    v119 = -1073741811;
    v67 = PsGetCurrentProcess(v14, v10, v11, v12);
    WdLogSingleEntry2(2LL, v119, v67);
    v72 = PsGetCurrentProcess(v69, v68, v70, v71);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v119,
      v72,
      0LL,
      0LL,
      0LL);
    v73 = v119;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_80;
      goto LABEL_79;
    }
    return v73;
  }
  p_PresentPlaneCount = &a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (unsigned int *)MmUserProbeAddress;
  v144 = *p_PresentPlaneCount;
  *(_OWORD *)v133 = 0LL;
  *(_OWORD *)v134 = 0LL;
  *(_OWORD *)v135 = 0LL;
  *(_OWORD *)v136 = 0LL;
  v137 = v144;
  v119 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v140,
           v133,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v133[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v134,
           &v134[1],
           v135,
           &v135[1],
           (unsigned __int8 **)v136,
           &v136[1]);
  if ( v119 < 0 )
  {
    v76 = PsGetCurrentProcess(v18, v17, v19, v20);
    WdLogSingleEntry2(2LL, v119, v76);
    v81 = PsGetCurrentProcess(v78, v77, v79, v80);
    v82 = v119;
    v83 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_85:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v83, v82, v81, 0LL, 0LL, 0LL);
LABEL_87:
    v73 = v119;
    goto LABEL_89;
  }
  v21 = *(_DWORD *)&v140[28];
  if ( !*(_DWORD *)&v140[28] )
  {
    WdLogSingleEntry1(1LL, 2857LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.PresentPlaneCount > 0", 2857LL, 0LL, 0LL, 0LL, 0LL);
    v21 = *(_DWORD *)&v140[28];
  }
  if ( v21 > 0xA )
  {
    WdLogSingleEntry1(1LL, 2858LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.PresentPlaneCount <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      2858LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v22 = *(_DWORD *)&v140[4];
  if ( !*(_DWORD *)&v140[4] )
  {
    WdLogSingleEntry1(1LL, 2859LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.ContextCount > 0", 2859LL, 0LL, 0LL, 0LL, 0LL);
    v22 = *(_DWORD *)&v140[4];
  }
  if ( v22 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 2860LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.ContextCount <= D3DDDI_MAX_BROADCAST_CONTEXT",
      2860LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)&v140[16] >= 0x10u )
  {
    v119 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v140[16], -1073741811LL);
    v81 = v119;
    v82 = *(unsigned int *)&v140[16];
    v83 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    goto LABEL_85;
  }
  v23 = *(_DWORD *)&v140[52];
  v24 = *(unsigned __int8 **)&v140[64];
  if ( !*(_DWORD *)&v140[52] && !*(_QWORD *)&v140[64] )
  {
    v130 = 0;
    v129 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v139 = 0LL;
    if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                          (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v140,
                          &v139,
                          &v129,
                          &v130) )
    {
      v24 = v139;
      *(_QWORD *)&v140[64] = v139;
      v23 = v129;
      *(_DWORD *)&v140[52] = v129;
      v25 = v130;
      *(_DWORD *)&v140[56] = v130;
      *(_DWORD *)&v140[24] |= 0x80u;
      goto LABEL_22;
    }
    v24 = *(unsigned __int8 **)&v140[64];
    v23 = *(_DWORD *)&v140[52];
  }
  v25 = *(_DWORD *)&v140[56];
LABEL_22:
  if ( v23 )
  {
    if ( v23 == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      if ( !v25 || v25 == 28 )
      {
        if ( v24 )
        {
          if ( v25 )
            goto LABEL_25;
        }
        else if ( !v25 )
        {
          goto LABEL_25;
        }
      }
      v119 = -1073741811;
      WdLogSingleEntry2(2LL, v25, -1073741811LL);
      v81 = v119;
      v82 = *(unsigned int *)&v140[56];
      v83 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10, returning 0x%I64x";
    }
    else if ( v23 == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
    {
      if ( !v25 || v25 == 72 )
      {
        if ( v24 )
        {
          if ( v25 )
            goto LABEL_25;
        }
        else if ( !v25 )
        {
          goto LABEL_25;
        }
      }
      v119 = -1073741811;
      WdLogSingleEntry2(2LL, v25, -1073741811LL);
      v81 = v119;
      v82 = *(unsigned int *)&v140[56];
      v83 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10PLUS, returning 0x%I64x";
    }
    else
    {
      v119 = -1073741811;
      WdLogSingleEntry2(2LL, v23, -1073741811LL);
      v81 = v119;
      v82 = *(int *)&v140[52];
      v83 = L"Invalid HDR metadata type 0x%I64x specified, returning 0x%I64x";
    }
    goto LABEL_85;
  }
  if ( v25 || v24 )
  {
    v119 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-NULL HDR metadata specified with D3DDDI_HDR_METADATA_TYPE_NONE, returning 0x%I64x",
      v119,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_87;
  }
LABEL_25:
  v138 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v127,
    **(_DWORD **)&v140[8],
    (struct DXGPROCESS *)v15,
    &v138,
    0,
    1);
  v30 = v138;
  if ( !v138 )
  {
    v119 = -1073741811;
    v84 = **(_DWORD **)&v140[8];
    v85 = PsGetCurrentProcess(v27, v26, v28, v29);
    WdLogSingleEntry3(3LL, v119, v85, v84);
    v73 = v119;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
LABEL_89:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      {
LABEL_80:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v75, v120);
        return v73;
      }
LABEL_79:
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v74,
        v75,
        0,
        v122[4],
        v122[5],
        1,
        v122[6],
        v122[7],
        v122[12],
        *v123);
      goto LABEL_80;
    }
    return v73;
  }
  v31 = *((_QWORD *)v138 + 2);
  v32 = *(struct _KEVENT **)(v31 + 16);
  if ( ((__int64)v32->Header.WaitListHead.Blink[166].Blink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, (unsigned int)**(_DWORD **)&v140[8]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      (unsigned int)**(_DWORD **)&v140[8],
      0LL,
      0LL,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        goto LABEL_115;
      goto LABEL_116;
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v138 + 101) & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 2974LL);
    goto LABEL_119;
  }
  v131 = *((_QWORD *)v138 + 2);
  v132 = 0;
  if ( v31 )
  {
    if ( *(_DWORD *)(v31 + 432) == 2 )
    {
      v89 = v32;
      if ( KeReadStateEvent(v32 + 5) )
        goto LABEL_31;
      v90 = v89 + 5;
    }
    else
    {
      v33 = v32 + 4;
      if ( KeReadStateEvent(v32 + 4) )
      {
LABEL_31:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v31 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v31 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v91, (const EVENT_DESCRIPTOR *)"g", v92, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v31 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v31 + 16) + 16LL));
        }
        v132 = 1;
        goto LABEL_33;
      }
      v90 = v33;
    }
    KeWaitForSingleObject(v90, Executive, 0, 0, 0LL);
    goto LABEL_31;
  }
LABEL_33:
  v34 = *(_DWORD *)&v140[4];
  Pool2 = 0LL;
  P = 0LL;
  v126 = 0;
  if ( *(_DWORD *)&v140[4] <= 4u )
  {
    Pool2 = v125;
    P = v125;
    if ( *(_DWORD *)&v140[4] )
    {
      memset(v125, 0, 8LL * *(unsigned int *)&v140[4]);
      Pool2 = P;
    }
    goto LABEL_36;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned int *)&v140[4] >= 8 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * *(unsigned int *)&v140[4], 1265072196LL, v29);
    P = Pool2;
LABEL_36:
    v126 = v34;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 2984LL);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    if ( v31 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) == 0 )
      return 3221225495LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v93,
        v95,
        0,
        v122[4],
        v122[5],
        1,
        v122[6],
        v122[7],
        v122[12],
        *v123);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225495LL;
    goto LABEL_181;
  }
  *Pool2 = v30;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v147, (struct DXGPROCESS *)v15);
  for ( i = 1; i < *(_DWORD *)&v140[4]; ++i )
  {
    v96 = (*(_DWORD *)(*(_QWORD *)&v140[8] + 4LL * i) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v96 < *(_DWORD *)(v15 + 296) )
    {
      v97 = *(_QWORD *)(v15 + 280);
      v98 = *(_DWORD *)(v97 + 16 * v96 + 8);
      if ( ((*(_DWORD *)(*(_QWORD *)&v140[8] + 4LL * i) >> 25) & 0x60) == (*(_BYTE *)(v97 + 16 * v96 + 8) & 0x60)
        && (v98 & 0x2000) == 0
        && (v98 & 0x1F) != 0 )
      {
        v99 = (__int64 *)(v97 + 16LL * (unsigned int)v96);
        if ( (v98 & 0x1F) == 7 )
        {
          v100 = *v99;
          goto LABEL_149;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v100 = 0LL;
LABEL_149:
    *((_QWORD *)P + i) = v100;
    v101 = *((_QWORD *)P + i);
    if ( !v101 || (*(_DWORD *)(v101 + 404) & 8) != 0 || *(_QWORD *)(v101 + 16) != *((_QWORD *)v30 + 2) )
    {
      WdLogSingleEntry4(2LL, v30, *(unsigned int *)(*(_QWORD *)&v140[8] + 4LL * i), i, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v30,
        *(unsigned int *)(*(_QWORD *)&v140[8] + 4LL * i),
        i,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v126 = 0;
      if ( v31 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
LABEL_119:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
      if ( (qword_1C012F870 & 2) == 0 )
        return 3221225485LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_115:
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v86,
          v88,
          0,
          v122[4],
          v122[5],
          1,
          v122[6],
          v122[7],
          v122[12],
          *v123);
LABEL_116:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
LABEL_170:
      McTemplateK0q_EtwWriteTransfer(v87, &EventProfilerExit, v88, v120);
      return 3221225485LL;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v147);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v145,
    P,
    v126,
    v37,
    1);
  if ( v146 )
  {
    if ( v145[0] )
    {
      WdLogSingleEntry1(3LL, 3040LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v126 = 0;
      if ( v31 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
      if ( (qword_1C012F870 & 2) == 0 )
        return 3221225485LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v102,
          v88,
          0,
          v122[4],
          v122[5],
          1,
          v122[6],
          v122[7],
          v122[12],
          *v123);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_170;
    }
    WdLogSingleEntry1(3LL, 3035LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    if ( v31 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) == 0 )
      return 3221225495LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v103,
        v95,
        0,
        v122[4],
        v122[5],
        1,
        v122[6],
        v122[7],
        v122[12],
        *v123);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225495LL;
LABEL_181:
    McTemplateK0q_EtwWriteTransfer(v94, &EventProfilerExit, v95, v120);
    return 3221225495LL;
  }
  v38 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL) + 16LL);
  v142 = (struct DXGADAPTER *)v38;
  _InterlockedIncrement64(v38 + 3);
  v141 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v38 + 17, 0LL);
  v143 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v148, *((_QWORD *)v30 + 2), 1, v39, 0);
  if ( !v156 || (COREACCESS::AcquireShared((COREACCESS *)v153, 0LL), *(_DWORD *)(v154 + 200) == 1) )
  {
    if ( v151 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v149, 0LL, 0LL);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v150 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v150 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, (const EVENT_DESCRIPTOR *)"g", v44, 72);
        KeWaitForSingleObject((char *)v150 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v150, 0LL);
    }
    v152 = 0LL;
    v151 = 1;
    v45 = *(unsigned int *)(v155 + 576);
    if ( (_DWORD)v45 == 1 )
    {
      v46 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v149);
      if ( v156 )
        COREACCESS::Release((COREACCESS *)v153);
      v46 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v153);
    v46 = -1073741130;
  }
  v119 = v46;
  if ( v46 < 0 )
  {
    v104 = PsGetCurrentProcess(v45, v40, v41, v42);
    WdLogSingleEntry2(3LL, v119, v104);
    v105 = v119;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    if ( v31 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) == 0 )
      return v105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_200;
    goto LABEL_199;
  }
  v47 = (const struct DXGDEVICE *)*((_QWORD *)v30 + 2);
  v48 = *((_QWORD *)v47 + 231);
  if ( !v48 )
  {
    v119 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
      v119,
      0LL,
      0LL,
      0LL,
      0LL);
    v105 = v119;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    if ( v31 )
      goto LABEL_207;
    goto LABEL_208;
  }
  if ( (*(_DWORD *)(v15 + 424) & 4) == 0
    && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v48 + 2792), v47, *(unsigned int *)&v140[16]) )
  {
    v119 = -1073741790;
    v112 = PsGetCurrentProcess(v109, v108, v110, v111);
    WdLogSingleEntry2(2LL, v119, v112);
    v117 = PsGetCurrentProcess(v114, v113, v115, v116);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
      v119,
      v117,
      0LL,
      0LL,
      0LL);
    v105 = v119;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v141);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    if ( v31 )
LABEL_207:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v131);
LABEL_208:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v127);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v133);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( (qword_1C012F870 & 2) == 0 )
      return v105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
    {
LABEL_200:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v107, v120);
      return v105;
    }
LABEL_199:
    McTemplateK0qqqqdqqq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v106,
      v107,
      0,
      v122[4],
      v122[5],
      1,
      v122[6],
      v122[7],
      v122[12],
      *v123);
    goto LABEL_200;
  }
  v119 = DXGCONTEXT::PresentMultiPlaneOverlay3(
           v138,
           (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v140,
           (struct COREDEVICEACCESS *)v148,
           (struct DXGCONTEXT **)P);
  if ( v119 == -1071775482 )
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v30 + 2), (struct COREDEVICEACCESS *)v148);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
  ExReleasePushLockSharedEx((char *)v142 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64(v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v142 + 2), v142);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
  v52 = P;
  if ( P != v125 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v126 = 0;
  if ( v31 && v132 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v31 + 136));
    KeLeaveCriticalRegion();
  }
  v53 = PsGetCurrentProcess(v52, v49, v50, v51);
  v54 = PsGetProcessDxgProcess(v53);
  v55 = v54;
  if ( v54 && (*(_DWORD *)(v54 + 424) & 0x80) == 0
    || (v118 = DXGTHREAD::GetCurrent()) == 0LL
    || (v56 = *((_QWORD *)v118 + 3)) == 0 )
  {
    v56 = v55;
  }
  v57 = *(_QWORD *)(v56 + 64);
  for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v57 + 96), (PKSPIN_LOCK)(v57 + 112));
        j;
        j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v57 + 96), (PKSPIN_LOCK)(v57 + 112)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
    operator delete(j);
  }
  v59 = v119;
  if ( v127 && !v128 )
    DXGCONTEXT::ReleaseReference(v127);
  operator delete[](v133[0]);
  operator delete[](v133[1]);
  operator delete[](v134[0]);
  v60 = v134[1];
  if ( v134[1] && v137 )
  {
    v61 = (void **)v134[1];
    v62 = v137;
    do
    {
      operator delete[](*v61++);
      --v62;
    }
    while ( v62 );
  }
  operator delete[](v60);
  operator delete[](v135[0]);
  operator delete[](v135[1]);
  operator delete[](v136[0]);
  operator delete(v136[1]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
  if ( (qword_1C012F870 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v63,
        v64,
        0,
        v122[4],
        v122[5],
        1,
        v122[6],
        v122[7],
        v122[12],
        *v123);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v64, v120);
  }
  return v59;
}
