/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C0257790
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0253C08 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rcx
  ULONG64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r15d
  SIZE_T v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const void *v28; // rdx
  char *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  ADAPTER_RENDER **v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _DWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  bool v58; // [rsp+30h] [rbp-148h]
  int v59; // [rsp+38h] [rbp-140h] BYREF
  __int64 v60; // [rsp+40h] [rbp-138h]
  char v61; // [rsp+48h] [rbp-130h]
  struct DXGDEVICE *v62; // [rsp+50h] [rbp-128h] BYREF
  int v63; // [rsp+58h] [rbp-120h] BYREF
  ULONG64 v64; // [rsp+60h] [rbp-118h]
  unsigned int v65; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v66[2]; // [rsp+70h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-F8h]
  __int64 v68; // [rsp+90h] [rbp-E8h]
  _QWORD v69[2]; // [rsp+98h] [rbp-E0h] BYREF
  int v70; // [rsp+A8h] [rbp-D0h]
  _BYTE v71[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v64 = a1;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    v12 = (_QWORD *)v11;
LABEL_53:
    WdLogEvent5_WdError(v12);
LABEL_54:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v34);
    if ( v61 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v59);
    }
    return 3221225485LL;
  }
  v58 = *((_BYTE *)Current + 346) == 0;
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v13;
  v68 = *(_QWORD *)(v13 + 16);
  v14 = (unsigned __int64)Src[0] >> 32;
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v14, v7);
    v54 = HIDWORD(Src[0]);
    v53[3] = HIDWORD(Src[0]);
    v53[4] = -1073741811LL;
    v53[5] = PsGetCurrentProcess(v54, v55);
    v12 = v53;
    goto LABEL_53;
  }
  v15 = 120 * HIDWORD(Src[0]);
  if ( 120 * v14 > 0xFFFFFFFF )
  {
    v49 = WdLogNewEntry5_WdWarning(v14, v7, v9);
    *(_QWORD *)(v49 + 24) = 7526LL;
    WdLogEvent5_WdWarning(v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v50);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v59);
    return 3221225621LL;
  }
  else
  {
    v70 = 120 * HIDWORD(Src[0]);
    v65 = HIDWORD(Src[0]);
    v16 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v16 = -1LL;
    v20 = (struct DXGDEVICE *)operator new[](v16, 0x4B677844u, PagedPool);
    v66[1] = v20;
    if ( v20 )
    {
      v28 = Src[1];
      v29 = (char *)Src[1] + v15;
      if ( v29 < Src[1] || (unsigned __int64)v29 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, v28, v15);
      v66[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, LODWORD(Src[0]), v10, v66);
      v32 = (ADAPTER_RENDER **)v66[0];
      if ( !v66[0] )
      {
        v33 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v33 + 24) = LODWORD(Src[0]);
        *(_QWORD *)(v33 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v33);
        operator delete[](v20);
        if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
        goto LABEL_54;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69, v66[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v32, 2, v35, 0);
      v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v71, 0LL);
      v40 = v36;
      if ( v36 >= 0 )
      {
        v63 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                    v32,
                    v65,
                    (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)v20,
                    v58,
                    &v63) >= 0 )
        {
          v45 = (_DWORD *)(v64 + 16);
          if ( v64 + 16 >= MmUserProbeAddress )
            v45 = (_DWORD *)MmUserProbeAddress;
          *v45 = v63;
        }
        operator delete[](v20);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
        if ( v69[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
        if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v46);
        if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v59);
        return 0LL;
      }
      else
      {
        v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v41 + 24) = v32;
        *(_QWORD *)(v41 + 32) = v40;
        WdLogEvent5_WdWarning(v41);
        operator delete[](v20);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
        if ( v69[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
        if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v42);
        if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v59);
        return (unsigned int)v40;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      *(_QWORD *)(v21 + 32) = PsGetCurrentProcess(v23, v22);
      WdLogEvent5_WdWarning(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v24);
      if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v59);
      return 3221225495LL;
    }
  }
}
