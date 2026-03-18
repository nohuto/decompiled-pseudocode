/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C02537F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C024EA18 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r15
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
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v45; // r8
  _DWORD *v46; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  bool v60; // [rsp+30h] [rbp-148h]
  int v61; // [rsp+38h] [rbp-140h] BYREF
  __int64 v62; // [rsp+40h] [rbp-138h]
  char v63; // [rsp+48h] [rbp-130h]
  struct DXGDEVICE *v64; // [rsp+50h] [rbp-128h] BYREF
  int v65; // [rsp+58h] [rbp-120h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v66; // [rsp+5Ch] [rbp-11Ch] BYREF
  ULONG64 v67; // [rsp+60h] [rbp-118h]
  struct DXGDEVICE *v68[2]; // [rsp+68h] [rbp-110h] BYREF
  _QWORD v69[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v70; // [rsp+88h] [rbp-F0h]
  unsigned int v71[4]; // [rsp+90h] [rbp-E8h]
  void *Src[2]; // [rsp+A0h] [rbp-D8h]
  _BYTE v73[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v67 = a1;
  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    v12 = (_QWORD *)v11;
LABEL_55:
    WdLogEvent5_WdError(v12);
LABEL_56:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v34);
    if ( v63 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v61);
    }
    return 3221225485LL;
  }
  v60 = *((_BYTE *)Current + 346) == 0;
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v71 = *v13;
  *(_OWORD *)Src = v13[1];
  v14 = v71[2];
  if ( v71[2] - 1 > 6 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
    v55[3] = v14;
    v55[4] = -1073741811LL;
    v55[5] = PsGetCurrentProcess(v57, v56);
    v12 = v55;
    goto LABEL_55;
  }
  v15 = (unsigned __int64)v71[2] << 7;
  if ( v15 > 0xFFFFFFFF )
  {
    v51 = WdLogNewEntry5_WdWarning(v71[2], v7, v9);
    *(_QWORD *)(v51 + 24) = 9268LL;
    WdLogEvent5_WdWarning(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v52);
    if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v61);
    return 3221225621LL;
  }
  else
  {
    v70 = v71[2] << 7;
    v16 = (unsigned __int64)v71[2] << 7;
    if ( !is_mul_ok(v71[2], 0x80uLL) )
      v16 = -1LL;
    v20 = (struct DXGDEVICE *)operator new[](v16, 0x4B677844u, PagedPool);
    v68[1] = v20;
    if ( v20 )
    {
      v28 = Src[0];
      v29 = (char *)Src[0] + (unsigned int)v15;
      if ( v29 < Src[0] || (unsigned __int64)v29 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, v28, (unsigned int)v15);
      v68[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v64, v71[1], v10, v68);
      v32 = (ADAPTER_RENDER **)v68[0];
      if ( !v68[0] )
      {
        v33 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v33 + 24) = v71[1];
        *(_QWORD *)(v33 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v33);
        operator delete[](v20);
        if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
        goto LABEL_56;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69, v68[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)v32, 2, v35, 0);
      v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73, 0LL);
      v40 = v36;
      if ( v36 >= 0 )
      {
        v65 = 0;
        v66.0 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                    v32,
                    v14,
                    (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)v20,
                    v60,
                    &v65,
                    &v66) >= 0 )
        {
          v45 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v67;
          v46 = (_DWORD *)(v67 + 24);
          if ( v67 + 24 >= MmUserProbeAddress )
            v46 = (_DWORD *)MmUserProbeAddress;
          *v46 = v65;
          v47 = v45 + 7;
          if ( (unsigned __int64)&v45[7] >= MmUserProbeAddress )
            v47 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
          v47->0 = v66.0;
        }
        operator delete[](v20);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v69[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
        if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v48);
        if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v61);
        return 0LL;
      }
      else
      {
        v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v41 + 24) = v32;
        *(_QWORD *)(v41 + 32) = v40;
        WdLogEvent5_WdWarning(v41);
        operator delete[](v20);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v69[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
        if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v42);
        if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v61);
        return (unsigned int)v40;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      *(_QWORD *)(v21 + 32) = PsGetCurrentProcess(v23, v22);
      WdLogEvent5_WdWarning(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v24);
      if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v61);
      return 3221225495LL;
    }
  }
}
