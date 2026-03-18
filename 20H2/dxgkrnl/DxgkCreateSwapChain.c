/*
 * XREFs of DxgkCreateSwapChain @ 0x1C02AC570
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C004ACD8 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x1C004B3D0 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A85AC (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A8668 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02A86D8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A870C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A8D90 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C02A9B50 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AA7A8 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r13
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v10; // rax
  _D3DKMT_CREATESWAPCHAIN *v11; // rax
  char v12; // r12
  __int64 SurfaceCount; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID v18; // r15
  __int64 v19; // rdi
  SIZE_T v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct ADAPTER_RENDER **v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdi
  ULONG64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  DXGSWAPCHAIN *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r14d
  struct DXGDEVICE *v51; // r13
  __int64 v52; // r9
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  NTSTATUS inserted; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-248h]
  PHANDLE Handle; // [rsp+28h] [rbp-240h]
  __int64 v63; // [rsp+30h] [rbp-238h]
  __int64 v64; // [rsp+38h] [rbp-230h]
  char v65; // [rsp+50h] [rbp-218h]
  struct DXGDEVICE *v66; // [rsp+58h] [rbp-210h] BYREF
  int v67; // [rsp+60h] [rbp-208h] BYREF
  __int64 v68; // [rsp+68h] [rbp-200h]
  char v69; // [rsp+70h] [rbp-1F8h]
  __int64 v70; // [rsp+78h] [rbp-1F0h]
  _QWORD v71[3]; // [rsp+80h] [rbp-1E8h] BYREF
  HANDLE v72; // [rsp+98h] [rbp-1D0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v73; // [rsp+A0h] [rbp-1C8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-190h] BYREF
  void *v75; // [rsp+E0h] [rbp-188h]
  struct DXGDEVICE *v76; // [rsp+E8h] [rbp-180h] BYREF
  struct DXGDEVICE *v77; // [rsp+F0h] [rbp-178h] BYREF
  unsigned int v78; // [rsp+F8h] [rbp-170h] BYREF
  ULONG64 v79; // [rsp+100h] [rbp-168h]
  _BYTE v80[160]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v81[128]; // [rsp+1B0h] [rbp-B8h] BYREF

  v3 = a1;
  v79 = a1;
  v70 = a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2108LL);
  v4 = 0LL;
  v65 = 0;
  Object = 0LL;
  v72 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 426LL;
LABEL_18:
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v14);
    if ( v69 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v67);
    }
    return -1073741811LL;
  }
  v11 = (_D3DKMT_CREATESWAPCHAIN *)v3;
  if ( v3 >= MmUserProbeAddress )
    v11 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v73 = *v11;
  v12 = (char)v73.Flags.0;
  if ( (*(_BYTE *)&v73.Flags.0 & 2) != 0 )
  {
    if ( v73.SurfaceCount )
    {
      v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
      *(_QWORD *)(v10 + 24) = 449LL;
      goto LABEL_18;
    }
    if ( !v73.bProducer )
    {
      v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
      *(_QWORD *)(v10 + 24) = 456LL;
      goto LABEL_18;
    }
  }
  else
  {
    SurfaceCount = v73.SurfaceCount;
    if ( v73.SurfaceCount > 0x32 )
    {
      v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
      *(_QWORD *)(v10 + 24) = SurfaceCount;
      goto LABEL_18;
    }
    if ( !v73.SurfaceCount )
    {
      v10 = WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
      *(_QWORD *)(v10 + 24) = 470LL;
      goto LABEL_18;
    }
  }
  v18 = 0LL;
  v75 = 0LL;
  v19 = v73.SurfaceCount;
  if ( v73.SurfaceCount )
  {
    v20 = 8LL * v73.SurfaceCount;
    if ( !is_mul_ok(v73.SurfaceCount, 8uLL) )
      v20 = -1LL;
    v18 = operator new[](v20, 0x4B677844u, PagedPool);
    v75 = v18;
    if ( !v18 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = 482LL;
      WdLogEvent5_WdLowResource(v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v26);
      if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v67);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v73.pNtSurfaceHandles;
    v30 = &v73.pNtSurfaceHandles[v19];
    if ( v30 < v73.pNtSurfaceHandles || (unsigned __int64)v30 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, pNtSurfaceHandles, 8 * v19);
    v73.pNtSurfaceHandles = (HANDLE *)v18;
  }
  v77 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v66, v73.hDevice, Current, &v77);
  v33 = (struct ADAPTER_RENDER **)v77;
  if ( !v77 )
  {
    v34 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v34 + 24) = v73.hDevice;
    LODWORD(v35) = -1073741811;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
LABEL_36:
    if ( v66 )
    {
      v36 = -1LL;
      v37 = _InterlockedDecrement64((volatile signed __int64 *)v66 + 8);
      if ( !v37 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
    }
    goto LABEL_68;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71, v77);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v33, 2, v39, 0);
  LODWORD(v35) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
  if ( (int)v35 < 0 )
    goto LABEL_40;
  v40 = (DXGSWAPCHAIN *)operator new[](0xE8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v40 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v40);
  else
    v4 = 0LL;
  v71[2] = v4;
  if ( !v4 )
  {
    v45 = WdLogNewEntry5_WdLowResource(v42, v41, v43, v44);
    *(_QWORD *)(v45 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v45);
    LODWORD(v35) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v35) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v33[2], &v73);
  if ( (int)v35 < 0
    || (LODWORD(v35) = DXGSWAPCHAIN::OpenSwapchainLocal(
                         v4,
                         v73.hDevice,
                         (struct DXGDEVICE *)v33,
                         v73.BufferAvailableEvent,
                         v12 & 1,
                         v73.bProducer),
        (int)v35 < 0) )
  {
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    goto LABEL_36;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
  if ( v71[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
  if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
  v76 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v81, v4, v73.bProducer, 1);
  v46 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v81, &v76, 1);
  v35 = v46;
  if ( v46 >= 0 )
  {
    v50 = 0;
    if ( !v73.SurfaceCount )
    {
LABEL_62:
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v81);
      LOBYTE(v52) = 1;
      LOBYTE(v53) = 1;
      v54 = ObCreateObject(v53, g_pDxgkSharedSwapChainObjectType, v73.pObjectAttributes, v52, 0LL, 8, 240, 0, &Object);
      v35 = v54;
      if ( v54 < 0
        || (*(_QWORD *)Object = v4,
            v65 = 1,
            inserted = ObInsertObject(Object, 0LL, v73.DesiredAccess, 0, 0LL, &v72),
            v35 = inserted,
            inserted < 0) )
      {
        v57 = WdLogNewEntry5_WdError(v56, v55);
        *(_QWORD *)(v57 + 24) = v35;
        WdLogEvent5_WdError(v57);
      }
      else
      {
        v36 = v3 + 48;
        v37 = MmUserProbeAddress;
        if ( v3 + 48 >= MmUserProbeAddress )
          v36 = MmUserProbeAddress;
        *(_QWORD *)v36 = v72;
      }
      goto LABEL_68;
    }
    v51 = v76;
    while ( 1 )
    {
      LODWORD(v35) = DXGSWAPCHAIN::AddSurface(
                       (const void **)v4,
                       *((DXGADAPTER ***)v51 + 2),
                       v73.bProducer,
                       v73.pNtSurfaceHandles[v50],
                       &v78);
      if ( (int)v35 < 0 )
        break;
      if ( ++v50 >= v73.SurfaceCount )
      {
        v3 = v79;
        goto LABEL_62;
      }
    }
  }
  else
  {
    v49 = WdLogNewEntry5_WdError(v48, v47);
    *(_QWORD *)(v49 + 24) = v35;
    WdLogEvent5_WdError(v49);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v81);
LABEL_68:
  if ( (int)v35 < 0 )
  {
    v37 = (__int64)v72;
    if ( v72 )
      ObCloseHandle(v72, 1);
    if ( v4 && !v65 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v18 )
    operator delete[](v18);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    LODWORD(v64) = v73.SurfaceCount;
    LODWORD(v63) = v73.hDevice;
    LODWORD(Handle) = v73.bProducer;
    LODWORD(NewObject) = v35;
    McTemplateK0pqdqqpp_EtwWriteTransfer(v37, v36, v38, v4, NewObject, Handle, v63, v64, v73.BufferAvailableEvent, v72);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v36);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v67);
  return (unsigned int)v35;
}
