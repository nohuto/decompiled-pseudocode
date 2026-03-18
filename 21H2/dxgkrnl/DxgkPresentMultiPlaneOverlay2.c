/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C031AAA0
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
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x1C0055734 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C0318A10 (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C031999C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // r13
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 VidPnSourceId; // rcx
  const wchar_t *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rsi
  __int64 v37; // rax
  struct DXGDEVICE *v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rbx
  _QWORD *Pool2; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r9
  int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  const struct DXGDEVICE *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v74; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v75[2]; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  _BYTE v77[32]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v78; // [rsp+A8h] [rbp-60h]
  _BYTE v79[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h]
  char v81; // [rsp+C0h] [rbp-48h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v82[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v83; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-28h]
  int *v85; // [rsp+E8h] [rbp-20h]
  __int64 *v86; // [rsp+F0h] [rbp-18h]
  _BYTE v87[16]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v88[6]; // [rsp+108h] [rbp+0h] BYREF
  char v89; // [rsp+138h] [rbp+30h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v90; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v91[8]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v92[64]; // [rsp+280h] [rbp+178h] BYREF
  _BYTE v93[88]; // [rsp+2C0h] [rbp+1B8h] BYREF

  v2 = -1073741811;
  LODWORD(v74) = -1073741811;
  memset(&v90, 0, sizeof(v90));
  v83 = 2163;
  v84 = 0LL;
  v85 = (int *)&v90;
  v86 = &v74;
  if ( (qword_1C012F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2163);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v83, 2163);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !a1 )
  {
    LODWORD(v74) = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    WdLogSingleEntry2(2LL, (int)v74, CurrentProcess);
    v19 = PsGetCurrentProcess(v16, v15, v17, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      (int)v74,
      v19,
      0LL,
      0LL,
      0LL);
    v2 = v74;
    goto LABEL_74;
  }
  *(_OWORD *)v82 = 0LL;
  LODWORD(v74) = CapturePresentMultiPlaneOverlayArgs2(a1, &v90, v82, (struct tagRECT **)&v82[1]);
  if ( (int)v74 >= 0 )
  {
    if ( v90.VidPnSourceId >= 0x10 )
    {
      LODWORD(v74) = -1073741811;
      WdLogSingleEntry2(2LL, v90.VidPnSourceId, -1073741811LL);
      VidPnSourceId = v90.VidPnSourceId;
      v31 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
      v29 = (int)v74;
      goto LABEL_10;
    }
    v75[0] = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v87, v90.hDevice, Current, v75, 0, 1);
    v36 = (__int64 *)v75[0];
    if ( !v75[0] )
    {
      LODWORD(v74) = -1073741811;
      v37 = PsGetCurrentProcess(v33, v32, v34, v35);
      WdLogSingleEntry3(3LL, (int)v74, v37, v90.hDevice);
LABEL_71:
      v2 = v74;
      goto LABEL_72;
    }
    v38 = (struct DXGDEVICE *)*((_QWORD *)v75[0] + 2);
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL) + 2664LL) & 8) != 0 )
    {
      WdLogSingleEntry1(2LL, v90.hDevice);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
        v90.hDevice,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_72:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v87);
      goto LABEL_73;
    }
    if ( (*((_DWORD *)v75[0] + 101) & 8) != 0 )
    {
      WdLogSingleEntry1(3LL, 991LL);
      goto LABEL_72;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v38);
    if ( v90.BroadcastContextCount > 0x40 )
    {
      WdLogSingleEntry2(3LL, v36, -1073741811LL);
LABEL_58:
      if ( v75[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
      goto LABEL_72;
    }
    v40 = v90.BroadcastContextCount + 1;
    P = 0LL;
    v78 = 0;
    if ( (unsigned int)v40 <= 4 )
    {
      P = v77;
      memset(v77, 0, 8LL * (unsigned int)v40);
      Pool2 = P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v40 < 8 )
        goto LABEL_25;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v40, 1265072196LL, v39);
      P = Pool2;
    }
    v78 = v40;
    if ( !Pool2 )
    {
LABEL_25:
      WdLogSingleEntry1(3LL, 1013LL);
      v2 = -1073741801;
LABEL_54:
      if ( P != v77 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v78 = 0;
      goto LABEL_58;
    }
    *Pool2 = v36;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79, Current);
    v42 = 0LL;
    if ( !v90.BroadcastContextCount )
    {
LABEL_38:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v88,
        P,
        v78,
        v49,
        1);
      if ( v89 )
      {
        if ( v88[0] )
        {
          WdLogSingleEntry1(3LL, 1069LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, 1064LL);
          v2 = -1073741801;
        }
      }
      else
      {
        v50 = v36[2];
        v81 = 0;
        v80 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v91, v36[2], 1, v51, 0);
        LODWORD(v74) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v91, 0LL);
        if ( (int)v74 >= 0 )
        {
          v57 = (const struct DXGDEVICE *)v36[2];
          v58 = *((_QWORD *)v57 + 231);
          if ( v58 )
          {
            if ( (*((_DWORD *)Current + 106) & 4) != 0
              || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v58 + 2792), v57, v90.VidPnSourceId) )
            {
              v67 = v36[2];
              v68 = *(_QWORD *)(*(_QWORD *)(v67 + 16) + 16LL);
              if ( *(_QWORD *)(v67 + 1848) == v68 )
              {
                LODWORD(v74) = DXGCONTEXT::PresentMultiPlaneOverlay2(
                                 (DXGCONTEXT *)v36,
                                 &v90,
                                 (struct COREDEVICEACCESS *)v91,
                                 (struct DXGCONTEXT **)P);
                if ( (_DWORD)v74 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v36[2], (struct COREDEVICEACCESS *)v91);
              }
              else
              {
                v69 = PsGetCurrentProcess(v68, v67, v54, v55);
                WdLogSingleEntry2(3LL, -1073741811LL, v69);
                LODWORD(v74) = -1073741811;
              }
              COREACCESS::~COREACCESS((COREACCESS *)v93);
              COREACCESS::~COREACCESS((COREACCESS *)v92);
              if ( v81 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v88);
              if ( P != v77 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v78 = 0;
              if ( v75[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
              goto LABEL_71;
            }
            LODWORD(v74) = -1073741790;
            v61 = PsGetCurrentProcess(v60, v59, v54, v55);
            WdLogSingleEntry2(2LL, (int)v74, v61);
            v66 = PsGetCurrentProcess(v63, v62, v64, v65);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
              (int)v74,
              v66,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            LODWORD(v74) = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
              (int)v74,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          v56 = PsGetCurrentProcess(v53, v52, v54, v55);
          WdLogSingleEntry2(3LL, (int)v74, v56);
        }
        v2 = v74;
        COREACCESS::~COREACCESS((COREACCESS *)v93);
        COREACCESS::~COREACCESS((COREACCESS *)v92);
        if ( v81 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v88);
      goto LABEL_54;
    }
    while ( 1 )
    {
      v43 = (v90.BroadcastContext[v42] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v43 < *((_DWORD *)Current + 74) )
      {
        v44 = *((_QWORD *)Current + 35);
        v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
        if ( ((v90.BroadcastContext[v42] >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
          && (v45 & 0x2000) == 0
          && (v45 & 0x1F) != 0 )
        {
          if ( (v45 & 0x1F) == 7 )
          {
            v46 = *(_QWORD *)(v44 + 16LL * (unsigned int)v43);
            goto LABEL_34;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v46 = 0LL;
LABEL_34:
      v47 = (unsigned int)(v42 + 1);
      *((_QWORD *)P + v47) = v46;
      v48 = *((_QWORD *)P + v47);
      if ( !v48 || (*(_DWORD *)(v48 + 404) & 8) != 0 || *(_QWORD *)(v48 + 16) != v36[2] )
      {
        WdLogSingleEntry4(2LL, v36, v90.BroadcastContext[v42], v42, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v36,
          v90.BroadcastContext[v42],
          v42,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
        goto LABEL_54;
      }
      v42 = (unsigned int)v47;
      if ( (unsigned int)v47 >= v90.BroadcastContextCount )
        goto LABEL_38;
    }
  }
  v24 = PsGetCurrentProcess(v21, v20, v22, v23);
  WdLogSingleEntry2(2LL, (int)v74, v24);
  v29 = PsGetCurrentProcess(v26, v25, v27, v28);
  VidPnSourceId = (int)v74;
  v31 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_10:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, VidPnSourceId, v29, 0LL, 0LL, 0LL);
  v2 = v74;
LABEL_73:
  operator delete[](v82[0]);
  operator delete[](v82[1]);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83);
  if ( (qword_1C012F870 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v70,
        v72,
        v85[1],
        v85[67],
        v85[68],
        v85[69],
        v85[70],
        v85[71],
        v85[74],
        *(_DWORD *)v86);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v83);
  }
  return v2;
}
