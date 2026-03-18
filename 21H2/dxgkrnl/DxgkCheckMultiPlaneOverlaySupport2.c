/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C02E8C30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3E58 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  bool v15; // bl
  _OWORD *v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGDEVICE *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  const void *v29; // rdx
  char *v30; // rcx
  ADAPTER_RENDER **v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // r12d
  __int64 v36; // rcx
  __int64 v37; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v38; // r8
  _DWORD *v39; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 CurrentProcess; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // [rsp+50h] [rbp-148h] BYREF
  __int64 v52; // [rsp+58h] [rbp-140h]
  char v53; // [rsp+60h] [rbp-138h]
  struct DXGPROCESS *v54; // [rsp+68h] [rbp-130h] BYREF
  int v55; // [rsp+70h] [rbp-128h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v56; // [rsp+74h] [rbp-124h] BYREF
  ULONG64 v57; // [rsp+78h] [rbp-120h]
  struct DXGDEVICE *v58[2]; // [rsp+80h] [rbp-118h] BYREF
  _QWORD v59[2]; // [rsp+90h] [rbp-108h] BYREF
  unsigned int v60[4]; // [rsp+A0h] [rbp-F8h]
  void *Src[2]; // [rsp+B0h] [rbp-E8h]
  _BYTE v62[160]; // [rsp+C0h] [rbp-D8h] BYREF

  v57 = a1;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2093);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v54 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v15 = (*((_DWORD *)Current + 106) & 4) == 0;
  v16 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v60 = *v16;
  *(_OWORD *)Src = v16[1];
  v17 = v60[2];
  if ( v60[2] - 1 > 6 )
  {
    CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress, v9, v10, v11);
    WdLogSingleEntry3(2LL, v17, -1073741811LL, CurrentProcess);
    v50 = PsGetCurrentProcess(v47, v46, v48, v49);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport2 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v17,
      -1073741811LL,
      v50,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_58:
      if ( v14 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v51);
    }
    return 3221225485LL;
  }
  v18 = (unsigned __int64)v60[2] << 7;
  if ( v18 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 9383LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v51);
    return 3221225621LL;
  }
  else
  {
    v19 = (unsigned __int64)v60[2] << 7;
    if ( !is_mul_ok(v60[2], 0x80uLL) )
      v19 = -1LL;
    v24 = (struct DXGDEVICE *)operator new[](v19, 0x4B677844u, 256LL, v11);
    v58[1] = v24;
    if ( v24 )
    {
      v29 = Src[0];
      v30 = (char *)Src[0] + (unsigned int)v18;
      if ( v30 < Src[0] || (unsigned __int64)v30 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, v29, (unsigned int)v18);
      v58[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v60[1], (struct _KTHREAD **)v54, v58);
      v31 = (ADAPTER_RENDER **)v58[0];
      if ( !v58[0] )
      {
        v32 = v60[1];
        WdLogSingleEntry2(2LL, v60[1], -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
          v32,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        operator delete[](v24);
        if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_7:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 )
        {
          v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
          goto LABEL_58;
        }
        return 3221225485LL;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59, v58[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v31, 2, v33, 0);
      v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62, 0LL);
      v35 = v34;
      if ( v34 >= 0 )
      {
        v55 = 0;
        v56.0 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                    v31,
                    v17,
                    (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)v24,
                    v15,
                    &v55,
                    &v56) >= 0 )
        {
          v38 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v57;
          v39 = (_DWORD *)(v57 + 24);
          if ( v57 + 24 >= MmUserProbeAddress )
            v39 = (_DWORD *)MmUserProbeAddress;
          *v39 = v55;
          v40 = v38 + 7;
          if ( (unsigned __int64)&v38[7] >= MmUserProbeAddress )
            v40 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
          v40->0 = v56.0;
        }
        operator delete[](v24);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
        if ( v59[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
        if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v51);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(3LL, v31, v34);
        operator delete[](v24);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
        if ( v59[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
        if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
        if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v51);
        return v35;
      }
    }
    else
    {
      v25 = PsGetCurrentProcess(v21, v20, v22, v23);
      WdLogSingleEntry2(3LL, -1073741801LL, v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 )
      {
        LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v51);
      }
      return 3221225495LL;
    }
  }
}
