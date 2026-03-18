/*
 * XREFs of DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1C02E93A0
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
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015DFB4 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckSinglePlaneForMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  struct _KTHREAD **Current; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  _OWORD *v15; // rax
  __int64 v16; // rbx
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v28; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v29; // rdx
  __int64 v30; // rdx
  ULONG64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  DXGDEVICE *v37; // rbx
  __int64 v38; // rbx
  __int64 v40; // r9
  int v41; // eax
  int v42; // ebx
  _DWORD *v43; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int *v47; // [rsp+30h] [rbp-1E8h]
  int *v48; // [rsp+30h] [rbp-1E8h]
  int *v49; // [rsp+30h] [rbp-1E8h]
  int v50; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-1C0h]
  char v52; // [rsp+60h] [rbp-1B8h]
  struct DXGDEVICE *v53; // [rsp+68h] [rbp-1B0h] BYREF
  int v54; // [rsp+70h] [rbp-1A8h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v55; // [rsp+74h] [rbp-1A4h] BYREF
  struct DXGDEVICE *v56; // [rsp+78h] [rbp-1A0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v57; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v58[2]; // [rsp+88h] [rbp-190h] BYREF
  unsigned int v59[4]; // [rsp+98h] [rbp-180h]
  __int128 v60; // [rsp+A8h] [rbp-170h]
  __int128 v61; // [rsp+B8h] [rbp-160h]
  __int128 v62; // [rsp+C8h] [rbp-150h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-140h]
  _OWORD v64[3]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v65; // [rsp+120h] [rbp-F8h]
  __int128 v66; // [rsp+130h] [rbp-E8h]
  __int64 v67; // [rsp+140h] [rbp-D8h]
  _BYTE v68[160]; // [rsp+150h] [rbp-C8h] BYREF

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
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = -1073741811;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return v11;
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
    if ( v14 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v50);
    return v11;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v59 = *v15;
  v60 = v15[1];
  v61 = v15[2];
  if ( v59[2] != 1 )
  {
    v16 = v59[2];
    CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress, v8, Current, v10);
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, (unsigned int)v16, -1073741811LL, CurrentProcess);
    v47 = (int *)PsGetCurrentProcess(v19, v18, v20, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v16,
      -1073741811LL,
      (__int64)v47,
      0LL,
      0LL);
    goto LABEL_7;
  }
  if ( DWORD2(v60) )
  {
    v22 = DWORD2(v60);
    v23 = PsGetCurrentProcess(MmUserProbeAddress, v8, Current, v10);
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, (unsigned int)v22, -1073741811LL, v23);
    v48 = (int *)PsGetCurrentProcess(v25, v24, v26, v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport post composition count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v22,
      -1073741811LL,
      (__int64)v48,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v57 = 0LL;
  v28 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v60;
  if ( (__int64)v60 + 8 < (unsigned __int64)v60 || (__int64)v60 + 8 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v57 = *v28;
  v29 = v57;
  if ( &v57[1] < v57 || (unsigned __int64)&v57[1] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v62 = *(_OWORD *)&v29->LayerIndex;
  v63 = *(_OWORD *)&v29->VidPnSourceId;
  v30 = *((_QWORD *)&v63 + 1);
  v31 = *((_QWORD *)&v63 + 1) + 88LL;
  if ( (unsigned __int64)(*((_QWORD *)&v63 + 1) + 88LL) < *((_QWORD *)&v63 + 1) || v31 > MmUserProbeAddress )
  {
    v31 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v64[0] = *(_OWORD *)v30;
  v64[1] = *(_OWORD *)(v30 + 16);
  v64[2] = *(_OWORD *)(v30 + 32);
  v65 = *(_OWORD *)(v30 + 48);
  v66 = *(_OWORD *)(v30 + 64);
  v67 = *(_QWORD *)(v30 + 80);
  HIDWORD(v65) = 0;
  *(_QWORD *)&v66 = 0LL;
  v57 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v62;
  *((_QWORD *)&v63 + 1) = v64;
  if ( (v64[0] & 4) == 0 )
  {
    v32 = PsGetCurrentProcess(v31, v30, Current, v10);
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(v64[0]), -1073741811LL, v32);
    v49 = (int *)PsGetCurrentProcess(v34, v33, v35, v36);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckSinglePlaneForMultiPlaneOverlaySupport plane flag value (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(v64[0]),
      -1073741811LL,
      (__int64)v49,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v59[1], Current, &v56);
  v37 = v56;
  if ( !v56 )
  {
    v38 = v59[1];
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v59[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( !v52 )
      return v11;
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_32;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58, v56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v37, 2, v40, 0);
  v41 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
  v11 = v41;
  if ( v41 < 0 )
  {
    WdLogSingleEntry2(3LL, v37, v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    goto LABEL_7;
  }
  v54 = 0;
  v55.0 = 0;
  v42 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v37, 1u, &v57, 0, 0LL, 0, &v54, &v55);
  if ( v42 >= 0 )
  {
    v43 = (_DWORD *)(a1 + 40);
    if ( a1 + 40 >= MmUserProbeAddress )
      v43 = (_DWORD *)MmUserProbeAddress;
    *v43 = v54;
    v44 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(a1 + 44);
    if ( a1 + 44 >= MmUserProbeAddress )
      v44 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
    v44->0 = v55.0;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  if ( v58[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
  if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v50);
  return (unsigned int)v42;
}
