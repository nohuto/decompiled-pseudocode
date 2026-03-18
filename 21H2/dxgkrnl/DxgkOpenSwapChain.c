/*
 * XREFs of DxgkOpenSwapChain @ 0x1C034EA60
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
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x1C005B418 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C034B318 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C034BC44 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // rdi
  __int64 v10; // r9
  _OWORD *v11; // rax
  void *v12; // r15
  char *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // r13
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  NTSTATUS v29; // eax
  BOOL v30; // r13d
  ULONG64 v31; // r8
  HANDLE *v32; // rdx
  _DWORD *v33; // rdx
  _DWORD *v34; // rdx
  size_t v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  __int64 v40; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v41[2]; // [rsp+50h] [rbp-198h] BYREF
  int v42; // [rsp+60h] [rbp-188h] BYREF
  __int64 v43; // [rsp+68h] [rbp-180h]
  char v44; // [rsp+70h] [rbp-178h]
  _QWORD v45[2]; // [rsp+78h] [rbp-170h] BYREF
  PVOID v46; // [rsp+88h] [rbp-160h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-158h] BYREF
  unsigned int v48[4]; // [rsp+A0h] [rbp-148h]
  void *v49[2]; // [rsp+B0h] [rbp-138h]
  void *v50[2]; // [rsp+C0h] [rbp-128h]
  __int128 v51; // [rsp+D0h] [rbp-118h]
  struct DXGDEVICE *v52; // [rsp+E0h] [rbp-108h] BYREF
  void *v53; // [rsp+E8h] [rbp-100h]
  BOOL v54; // [rsp+F0h] [rbp-F8h]
  ULONG64 v55; // [rsp+F8h] [rbp-F0h]
  ULONG64 v56; // [rsp+100h] [rbp-E8h]
  _BYTE v57[160]; // [rsp+110h] [rbp-D8h] BYREF

  v55 = a1;
  v56 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2109);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 659LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 659LL, 0LL, 0LL, 0LL, 0LL);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v42);
    }
    return -1073741811LL;
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v11;
  *(_OWORD *)v48 = v11[1];
  *(_OWORD *)v49 = v11[2];
  *(_OWORD *)v50 = v11[3];
  v51 = v11[4];
  v12 = 0LL;
  v53 = 0LL;
  v13 = (char *)v50[1];
  if ( (LODWORD(v50[0]) == 0) != (v50[1] == 0LL) )
  {
    WdLogSingleEntry2(2LL, LODWORD(v50[0]), v50[1]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Either both surface count (0x%I64x) and handle table (0x%I64x) are both valid or both invalid",
      LODWORD(v50[0]),
      (__int64)v50[1],
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( LODWORD(v50[0]) )
  {
    v17 = 8LL * LODWORD(v50[0]);
    if ( !is_mul_ok(LODWORD(v50[0]), 8uLL) )
      v17 = -1LL;
    v18 = (void *)operator new[](v17, 0x4B677844u, 256LL, v10);
    v12 = v18;
    v53 = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(6LL, 689LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles table",
        689LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v42);
      return 3221225495LL;
    }
    v50[1] = v18;
  }
  v52 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41, v48[1], Current, &v52);
  v21 = v52;
  if ( v52 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45, v52);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v21, 2, v26, 0);
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
    if ( v22 < 0 )
      goto LABEL_59;
    if ( !Handle[0] )
    {
      if ( Handle[1] )
      {
        LOBYTE(v27) = 1;
        v28 = ObOpenObjectByName(Handle[1], g_pDxgkSharedSwapChainObjectType, v27, 0LL, v48[3], 0LL, Handle);
        v22 = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry1(3LL, v28);
          goto LABEL_59;
        }
      }
    }
    v46 = 0LL;
    v29 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v46, 0LL);
    v22 = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0], v29);
LABEL_59:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
      if ( v45[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v45);
      goto LABEL_61;
    }
    v4 = *(struct DXGDEVICE **)v46;
    v41[1] = v4;
    if ( *((_DWORD *)v4 + 58) )
    {
      if ( LODWORD(v50[0]) || v50[1] )
      {
        WdLogSingleEntry1(2LL, 752LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkOpenSwapChain for non-sequential swapchain should not pass any handles",
          752LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_41:
        v22 = -1073741811;
      }
    }
    else
    {
      if ( !v50[1] )
      {
        LODWORD(v50[0]) = *((_DWORD *)v4 + 15);
        v22 = -1073741789;
LABEL_45:
        v30 = *((_DWORD *)v4 + 58) != 0;
        v54 = v30;
        ObfDereferenceObject(v46);
        if ( (int)(v22 + 0x80000000) < 0 || v22 == -1073741789 )
        {
          v31 = v55;
          v32 = (HANDLE *)v55;
          if ( v55 >= MmUserProbeAddress )
            v32 = (HANDLE *)MmUserProbeAddress;
          *v32 = Handle[0];
          v33 = (_DWORD *)(v31 + 48);
          if ( v31 + 48 >= MmUserProbeAddress )
            v33 = (_DWORD *)MmUserProbeAddress;
          *v33 = v50[0];
          v34 = (_DWORD *)(v31 + 64);
          if ( v31 + 64 >= MmUserProbeAddress )
            v34 = (_DWORD *)MmUserProbeAddress;
          *v34 = v30;
          if ( v13 && LODWORD(v50[0]) )
          {
            v35 = 8LL * LODWORD(v50[0]);
            if ( (unsigned __int64)&v13[v35] > MmUserProbeAddress || &v13[v35] <= v13 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v13, v12, v35);
          }
        }
        goto LABEL_59;
      }
      if ( LODWORD(v50[0]) != *((_DWORD *)v4 + 15) )
      {
        WdLogSingleEntry2(2LL, LODWORD(v50[0]), *((unsigned int *)v4 + 15));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Incorrect surface count (%I64d) supplied to DxgkOpenSwapChain (should be %I64d)",
          LODWORD(v50[0]),
          *((unsigned int *)v4 + 15),
          0LL,
          0LL,
          0LL);
        goto LABEL_41;
      }
    }
    if ( v22 >= 0 )
    {
      v22 = DXGSWAPCHAIN::OpenSwapchainLocal(v4, v48[1], v21, (__int64)v49[1], v48[2], v48[0]);
      if ( v22 >= 0 )
      {
        *((_DWORD *)v4 + 18) = v49[0];
        v22 = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(v4, (struct _D3DKMT_OPENSWAPCHAIN *)Handle);
      }
    }
    goto LABEL_45;
  }
  v22 = -1073741811;
  WdLogSingleEntry2(2LL, v48[1], -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
    v48[1],
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_61:
  if ( v41[0] )
  {
    v24 = _InterlockedDecrement64((volatile signed __int64 *)v41[0] + 8);
    if ( !v24 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41[0] + 2), v41[0]);
  }
  if ( v12 )
    operator delete[](v12);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
  {
    LODWORD(v40) = v48[1];
    LODWORD(HandleInformation) = v48[0];
    LODWORD(Object) = v22;
    McTemplateK0pqdqpp_EtwWriteTransfer(v24, v23, v25, v4, Object, HandleInformation, v40, v49[1], Handle[0]);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v42);
  return (unsigned int)v22;
}
