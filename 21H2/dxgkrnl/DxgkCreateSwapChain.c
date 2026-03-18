/*
 * XREFs of DxgkCreateSwapChain @ 0x1C034DD20
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C005AC08 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x1C005B4D8 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C034978C (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0349848 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03498B8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0349CC4 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C034B038 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C034BC44 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r13
  DXGSWAPCHAIN *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // rsi
  __int64 v10; // r9
  __int64 SurfaceCount; // rbx
  const wchar_t *v12; // r9
  _D3DKMT_CREATESWAPCHAIN *v13; // rax
  char v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v18; // r15
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v24; // rcx
  struct ADAPTER_RENDER **v25; // rbx
  __int64 hDevice; // rbx
  __int64 v27; // rsi
  ULONG64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r9
  DXGSWAPCHAIN *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  int v38; // ebx
  struct DXGDEVICE *v39; // r13
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  const wchar_t *v43; // r9
  NTSTATUS inserted; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-238h]
  PHANDLE Handle; // [rsp+28h] [rbp-230h]
  __int64 v49; // [rsp+30h] [rbp-228h]
  __int64 v50; // [rsp+38h] [rbp-220h]
  char v51; // [rsp+50h] [rbp-208h]
  struct DXGDEVICE *v52; // [rsp+58h] [rbp-200h] BYREF
  int v53; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-1F0h]
  char v55; // [rsp+70h] [rbp-1E8h]
  __int64 v56; // [rsp+78h] [rbp-1E0h]
  _QWORD v57[3]; // [rsp+80h] [rbp-1D8h] BYREF
  HANDLE v58; // [rsp+98h] [rbp-1C0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v59; // [rsp+A0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v60; // [rsp+D8h] [rbp-180h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-178h] BYREF
  void *v62; // [rsp+E8h] [rbp-170h]
  struct DXGDEVICE *v63; // [rsp+F0h] [rbp-168h] BYREF
  ULONG64 v64; // [rsp+F8h] [rbp-160h]
  _BYTE v65[160]; // [rsp+100h] [rbp-158h] BYREF
  _BYTE v66[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  v3 = a1;
  v64 = a1;
  v56 = a1;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2108);
  v4 = 0LL;
  v51 = 0;
  Object = 0LL;
  v58 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    SurfaceCount = 426LL;
    WdLogSingleEntry1(2LL, 426LL);
    v12 = L"Invalid process context";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, SurfaceCount, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v53);
    }
    return -1073741811LL;
  }
  v13 = (_D3DKMT_CREATESWAPCHAIN *)v3;
  if ( v3 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v59 = *v13;
  v14 = (char)v59.Flags.0;
  if ( (*(_BYTE *)&v59.Flags.0 & 2) != 0 )
  {
    if ( v59.SurfaceCount )
    {
      SurfaceCount = 449LL;
      WdLogSingleEntry1(2LL, 449LL);
      v12 = L"In non-sequence mode create cannot have any surfaces, add surface should be used to add them";
      goto LABEL_18;
    }
    if ( !v59.bProducer )
    {
      SurfaceCount = 456LL;
      WdLogSingleEntry1(2LL, 456LL);
      v12 = L"In non-sequence mode create has to be the producer";
      goto LABEL_18;
    }
  }
  else
  {
    if ( v59.SurfaceCount > 0x32 )
    {
      SurfaceCount = v59.SurfaceCount;
      WdLogSingleEntry1(2LL, v59.SurfaceCount);
      v12 = L"Caller requested 0x%I64x buffers, this is over the maximum";
      goto LABEL_18;
    }
    if ( !v59.SurfaceCount )
    {
      SurfaceCount = 470LL;
      WdLogSingleEntry1(2LL, 470LL);
      v12 = L"Cannot create swapchain with zero buffers";
      goto LABEL_18;
    }
  }
  v18 = 0LL;
  v62 = 0LL;
  if ( v59.SurfaceCount )
  {
    v19 = v59.SurfaceCount;
    v20 = 8LL * v59.SurfaceCount;
    if ( !is_mul_ok(v59.SurfaceCount, 8uLL) )
      v20 = -1LL;
    v18 = (void *)operator new[](v20, 0x4B677844u, 256LL, v10);
    v62 = v18;
    if ( !v18 )
    {
      WdLogSingleEntry1(6LL, 482LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles array",
        482LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v53);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v59.pNtSurfaceHandles;
    v24 = &v59.pNtSurfaceHandles[v19];
    if ( v24 < v59.pNtSurfaceHandles || (unsigned __int64)v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, pNtSurfaceHandles, 8 * v19);
    v59.pNtSurfaceHandles = (HANDLE *)v18;
  }
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v59.hDevice, Current, &v63);
  v25 = (struct ADAPTER_RENDER **)v63;
  if ( !v63 )
  {
    hDevice = v59.hDevice;
    LODWORD(v27) = -1073741811;
    WdLogSingleEntry2(2LL, v59.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    if ( v52 )
    {
      v28 = -1LL;
      v29 = _InterlockedDecrement64((volatile signed __int64 *)v52 + 8);
      if ( !v29 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    }
    goto LABEL_70;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v25, 2, v31, 0);
  LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
  if ( (int)v27 < 0 )
    goto LABEL_40;
  v33 = (DXGSWAPCHAIN *)operator new[](0xF0uLL, 0x4B677844u, 256LL, v32);
  if ( v33 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v33, v34, v35, v36);
  else
    v4 = 0LL;
  v57[2] = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, 521LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGSWAPCHAIN class",
      521LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v27) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v27) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v25[2], &v59);
  if ( (int)v27 < 0
    || (LODWORD(v27) = DXGSWAPCHAIN::OpenSwapchainLocal(
                         v4,
                         v59.hDevice,
                         (struct DXGDEVICE *)v25,
                         (__int64)v59.BufferAvailableEvent,
                         v14 & 1,
                         v59.bProducer),
        (int)v27 < 0) )
  {
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    if ( v57[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
    goto LABEL_36;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  if ( v57[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
  if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
  v60 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v66, v4, v59.bProducer, 1);
  v37 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v66, &v60, 1);
  v27 = v37;
  if ( v37 < 0 )
  {
    WdLogSingleEntry1(2LL, v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire swapchain and device lock (0x%I64x)",
      v27,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_56:
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v66);
    goto LABEL_70;
  }
  v38 = 0;
  if ( v59.SurfaceCount )
  {
    v39 = v60;
    while ( 1 )
    {
      LODWORD(v27) = DXGSWAPCHAIN::AddSurface(
                       (struct _KTHREAD **)v4,
                       *((DXGADAPTER ***)v39 + 2),
                       v59.bProducer,
                       v59.pNtSurfaceHandles[v38],
                       (unsigned int *)&v60);
      if ( (int)v27 < 0 )
        goto LABEL_56;
      if ( ++v38 >= v59.SurfaceCount )
      {
        v3 = v64;
        break;
      }
    }
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v66);
  LOBYTE(v40) = 1;
  LOBYTE(v41) = 1;
  v42 = ObCreateObject(v41, g_pDxgkSharedSwapChainObjectType, v59.pObjectAttributes, v40, 0LL, 8, 248, 0, &Object);
  v27 = v42;
  if ( v42 >= 0 )
  {
    *(_QWORD *)Object = v4;
    v51 = 1;
    inserted = ObInsertObject(Object, 0LL, v59.DesiredAccess, 0, 0LL, &v58);
    v27 = inserted;
    if ( inserted >= 0 )
    {
      v28 = v3 + 48;
      v29 = MmUserProbeAddress;
      if ( v3 + 48 >= MmUserProbeAddress )
        v28 = MmUserProbeAddress;
      *(_QWORD *)v28 = v58;
      goto LABEL_70;
    }
    WdLogSingleEntry1(2LL, inserted);
    v43 = L"Failed to create Nt handle for swapchain (0x%I64x)";
  }
  else
  {
    WdLogSingleEntry1(2LL, v42);
    v43 = L"Failed to create Nt swapchain object (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v43, v27, 0LL, 0LL, 0LL, 0LL);
LABEL_70:
  if ( (int)v27 < 0 )
  {
    v29 = (__int64)v58;
    if ( v58 )
      ObCloseHandle(v58, 1);
    if ( v4 && !v51 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v18 )
    operator delete[](v18);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
  {
    LODWORD(v50) = v59.SurfaceCount;
    LODWORD(v49) = v59.hDevice;
    LODWORD(Handle) = v59.bProducer;
    LODWORD(NewObject) = v27;
    McTemplateK0pqdqqpp_EtwWriteTransfer(v29, v28, v30, v4, NewObject, Handle, v49, v50, v59.BufferAvailableEvent, v58);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v53);
  return (unsigned int)v27;
}
