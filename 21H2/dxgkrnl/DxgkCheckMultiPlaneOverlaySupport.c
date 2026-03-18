/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C02E84D0
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
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C02E4008 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
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
  ULONG64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGDEVICE *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  const void *v29; // rdx
  char *v30; // rcx
  ADAPTER_RENDER **v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r8
  _DWORD *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 CurrentProcess; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // [rsp+50h] [rbp-138h] BYREF
  __int64 v51; // [rsp+58h] [rbp-130h]
  char v52; // [rsp+60h] [rbp-128h]
  struct DXGPROCESS *v53; // [rsp+68h] [rbp-120h] BYREF
  int v54; // [rsp+70h] [rbp-118h] BYREF
  ULONG64 v55; // [rsp+78h] [rbp-110h]
  unsigned int v56; // [rsp+80h] [rbp-108h]
  struct DXGDEVICE *v57[2]; // [rsp+88h] [rbp-100h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-F0h]
  __int64 v59; // [rsp+A8h] [rbp-E0h]
  _QWORD v60[2]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v61[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v55 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2093);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v53 = Current;
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
  v16 = a1;
  if ( a1 >= MmUserProbeAddress )
    v16 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v16;
  v59 = *(_QWORD *)(v16 + 16);
  v17 = (unsigned __int64)Src[0] >> 32;
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v43 = HIDWORD(Src[0]);
    CurrentProcess = PsGetCurrentProcess(v17, v9, v10, v11);
    WdLogSingleEntry3(2LL, (unsigned int)v43, -1073741811LL, CurrentProcess);
    v49 = PsGetCurrentProcess(v46, v45, v47, v48);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v43,
      -1073741811LL,
      v49,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 )
    {
      LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_56:
      if ( v14 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v50);
    }
    return 3221225485LL;
  }
  v18 = 120 * HIDWORD(Src[0]);
  if ( 120 * v17 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 7521LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v50);
    return 3221225621LL;
  }
  else
  {
    v56 = HIDWORD(Src[0]);
    v19 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v19 = -1LL;
    v24 = (struct DXGDEVICE *)operator new[](v19, 0x4B677844u, 256LL, v11);
    v57[1] = v24;
    if ( v24 )
    {
      v29 = Src[1];
      v30 = (char *)Src[1] + v18;
      if ( v30 < Src[1] || (unsigned __int64)v30 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, v29, v18);
      v57[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)&v53,
        (unsigned int)Src[0],
        (struct _KTHREAD **)v53,
        v57);
      v31 = (ADAPTER_RENDER **)v57[0];
      if ( !v57[0] )
      {
        v32 = LODWORD(Src[0]);
        WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
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
        if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
LABEL_7:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
        if ( v52 )
        {
          v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
          goto LABEL_56;
        }
        return 3221225485LL;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60, v57[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v31, 2, v33, 0);
      v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
      v35 = v34;
      if ( v34 >= 0 )
      {
        v54 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                    v31,
                    v56,
                    (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)v24,
                    v15,
                    &v54) >= 0 )
        {
          v38 = (_DWORD *)(v55 + 16);
          if ( v55 + 16 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = v54;
        }
        operator delete[](v24);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        if ( v60[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
        if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v50);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry2(3LL, v31, v34);
        operator delete[](v24);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        if ( v60[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
        if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v50);
        return v35;
      }
    }
    else
    {
      v25 = PsGetCurrentProcess(v21, v20, v22, v23);
      WdLogSingleEntry2(3LL, -1073741801LL, v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v52 )
      {
        LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v50);
      }
      return 3221225495LL;
    }
  }
}
