/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C02A2B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00199F0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019C7C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1C0025EA4 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027B394 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C029E9C4 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A138C (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rsi
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  ULONG v32; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  const struct DXGDEVICE *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v75[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v76[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v77; // [rsp+70h] [rbp-90h]
  char v78; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v80[32]; // [rsp+88h] [rbp-78h] BYREF
  ULONG v81; // [rsp+A8h] [rbp-58h]
  struct D3DKMT_MULTIPLANE_OVERLAY *v82[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v83; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-38h]
  int *v85; // [rsp+D0h] [rbp-30h]
  int *v86; // [rsp+D8h] [rbp-28h]
  _BYTE v87[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v88[6]; // [rsp+F0h] [rbp-10h] BYREF
  char v89; // [rsp+120h] [rbp+20h]
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v90; // [rsp+130h] [rbp+30h] BYREF
  char *v91; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v92[64]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v93[88]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v2 = -1073741811;
  v74 = -1073741811;
  memset(&v90, 0, sizeof(v90));
  v85 = (int *)&v90;
  v86 = &v74;
  v84 = 0LL;
  v83 = 2092;
  if ( (qword_1C00AE9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2092);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v83, 2092LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !a1 )
  {
    v74 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = v74;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    v2 = v74;
    goto LABEL_74;
  }
  *(_OWORD *)v82 = 0LL;
  v74 = CapturePresentMultiPlaneOverlayArgs(a1, &v90, v82, (struct tagRECT **)&v82[1]);
  if ( v74 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v16 + 24) = v74;
    *(_QWORD *)(v16 + 32) = PsGetCurrentProcess(v18, v17);
    v19 = v16;
LABEL_10:
    WdLogEvent5_WdError(v19);
    v2 = v74;
    goto LABEL_73;
  }
  if ( v90.VidPnSourceId >= 0x10 )
  {
    v74 = -1073741811;
    v19 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v19 + 24) = v90.VidPnSourceId;
    *(_QWORD *)(v19 + 32) = v74;
    goto LABEL_10;
  }
  v75[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v87, v90.hDevice, Current, v75, 0);
  v23 = (__int64 *)v75[0];
  if ( !v75[0] )
  {
    v74 = -1073741811;
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v24[3] = v74;
    v24[4] = PsGetCurrentProcess(v26, v25);
    v24[5] = v90.hDevice;
    WdLogEvent5_WdWarning(v24);
LABEL_64:
    v2 = v74;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)v75[0] + 105) & 8) != 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v27 + 24) = 326LL;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v75,
    *((struct DXGDEVICE **)v75[0] + 2));
  if ( v90.BroadcastContextCount > 0x40 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v23;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_70;
  }
  v32 = v90.BroadcastContextCount + 1;
  P = 0LL;
  v81 = 0;
  if ( v90.BroadcastContextCount + 1 <= 4 )
  {
    PoolWithTag = v80;
  }
  else
  {
    v28 = 0xFFFFFFFFFFFFFFFFuLL % v32;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 8 )
    {
LABEL_65:
      v69 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v69 + 24) = 348LL;
      WdLogEvent5_WdWarning(v69);
      v2 = -1073741801;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v32, 0x4B677844u);
  }
  P = PoolWithTag;
  v81 = v32;
  if ( !PoolWithTag )
    goto LABEL_65;
  memset(PoolWithTag, 0, 8LL * v32);
  if ( !P )
    goto LABEL_65;
  *(_QWORD *)P = v23;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, (struct _KTHREAD **)Current);
  v35 = 0;
  if ( !v90.BroadcastContextCount )
  {
LABEL_35:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v88,
      P,
      v81);
    if ( v89 )
    {
      if ( v88[0] )
      {
        v47 = WdLogNewEntry5_WdWarning(v43, v42, v44);
        *(_QWORD *)(v47 + 24) = 404LL;
        WdLogEvent5_WdWarning(v47);
      }
      else
      {
        v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
        *(_QWORD *)(v45 + 24) = 399LL;
        WdLogEvent5_WdWarning(v45);
        v2 = -1073741801;
      }
    }
    else
    {
      v48 = v23[2];
      v78 = 0;
      v77 = *(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v91, v23[2], 1, v49, 0);
      v74 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v91, 0LL);
      if ( v74 >= 0 )
      {
        v56 = (const struct DXGDEVICE *)v23[2];
        v57 = *((_QWORD *)v56 + 231);
        if ( v57 )
        {
          if ( *((_BYTE *)Current + 346)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v57 + 2672), v56, v90.VidPnSourceId) )
          {
            v64 = v23[2];
            v65 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 16LL);
            if ( *(_QWORD *)(v64 + 1848) == v65 )
            {
              v2 = DXGCONTEXT::PresentMultiPlaneOverlay(
                     (DXGCONTEXT *)v23,
                     &v90,
                     (struct COREDEVICEACCESS *)&v91,
                     (struct DXGCONTEXT **)P);
            }
            else
            {
              v66 = WdLogNewEntry5_WdWarning(v65, v64, v52);
              *(_QWORD *)(v66 + 24) = -1073741811LL;
              *(_QWORD *)(v66 + 32) = PsGetCurrentProcess(v68, v67);
              WdLogEvent5_WdWarning(v66);
            }
            v74 = v2;
            if ( v2 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v23[2], &v91);
            COREACCESS::~COREACCESS((COREACCESS *)v93);
            COREACCESS::~COREACCESS((COREACCESS *)v92);
            if ( v78 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v88);
            if ( P != v80 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v81 = 0;
            if ( v75[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
            goto LABEL_64;
          }
          v74 = -1073741790;
          v61 = WdLogNewEntry5_WdError(v60, v59);
          *(_QWORD *)(v61 + 24) = v74;
          *(_QWORD *)(v61 + 32) = PsGetCurrentProcess(v63, v62);
          v58 = v61;
        }
        else
        {
          v74 = -1073741811;
          v58 = WdLogNewEntry5_WdError(0LL, v56);
          *(_QWORD *)(v58 + 24) = v74;
        }
        WdLogEvent5_WdError(v58);
      }
      else
      {
        v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v53 + 24) = v74;
        *(_QWORD *)(v53 + 32) = PsGetCurrentProcess(v55, v54);
        WdLogEvent5_WdWarning(v53);
      }
      v2 = v74;
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      COREACCESS::~COREACCESS((COREACCESS *)v92);
      if ( v78 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v88);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v36 = (v90.BroadcastContext[v35] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 < *((_DWORD *)Current + 64) )
    {
      v37 = *((_QWORD *)Current + 30);
      v34 = *(unsigned int *)(v37 + 16 * v36 + 8);
      if ( ((v90.BroadcastContext[v35] >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        v34 &= 0x1Fu;
        if ( (_BYTE)v34 == 7 )
        {
          v39 = *(_QWORD *)(v37 + 16LL * (unsigned int)v36);
          goto LABEL_31;
        }
        v38 = WdLogNewEntry5_WdError(v34, (v90.BroadcastContext[v35] >> 25) & 0x60);
        *(_QWORD *)(v38 + 24) = 267LL;
        WdLogEvent5_WdError(v38);
      }
    }
    v39 = 0LL;
LABEL_31:
    v40 = v35 + 1;
    *((_QWORD *)P + v40) = v39;
    v41 = *((_QWORD *)P + v40);
    if ( !v41 || (*(_DWORD *)(v41 + 420) & 8) != 0 || *(_QWORD *)(v41 + 16) != v23[2] )
      break;
    ++v35;
    if ( (unsigned int)v40 >= v90.BroadcastContextCount )
      goto LABEL_35;
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdError(v34, v41);
  v46[3] = v23;
  v46[4] = v90.BroadcastContext[v35];
  v46[5] = v35;
  v46[6] = -1073741811LL;
  WdLogEvent5_WdError(v46);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v76);
LABEL_66:
  if ( P != v80 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v81 = 0;
LABEL_70:
  if ( v75[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
LABEL_72:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v87);
LABEL_73:
  operator delete[](v82[0]);
  operator delete[](v82[1]);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83, v13);
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v70,
        v72,
        *v85,
        v85[66],
        v85[67],
        v85[68],
        v85[69],
        v85[70],
        *v86);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v83);
  }
  return v2;
}
