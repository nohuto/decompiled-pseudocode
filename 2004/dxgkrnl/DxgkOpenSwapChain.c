/*
 * XREFs of DxgkOpenSwapChain @ 0x1C02ADFE0
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
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x1C004B3D0 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02AB02C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AB788 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  UINT *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v10; // rax
  struct _D3DKMT_OPENSWAPCHAIN *v11; // rax
  HANDLE *v12; // r15
  HANDLE *pNtSurfaceHandles; // r13
  _BOOL8 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  SIZE_T v19; // rax
  HANDLE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r12
  __int64 v48; // rax
  BOOL v49; // r12d
  ULONG64 v50; // r8
  _QWORD *v51; // rdx
  _DWORD *v52; // rdx
  _DWORD *v53; // rdx
  size_t SurfaceCount; // r8
  __int64 v55; // rcx
  __int64 v56; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  __int64 v59; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v60[2]; // [rsp+50h] [rbp-198h] BYREF
  int v61; // [rsp+60h] [rbp-188h] BYREF
  __int64 v62; // [rsp+68h] [rbp-180h]
  char v63; // [rsp+70h] [rbp-178h]
  _QWORD v64[3]; // [rsp+78h] [rbp-170h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+90h] [rbp-158h] BYREF
  struct DXGDEVICE *v66; // [rsp+E0h] [rbp-108h] BYREF
  PVOID v67; // [rsp+E8h] [rbp-100h] BYREF
  HANDLE *v68; // [rsp+F0h] [rbp-F8h]
  BOOL v69; // [rsp+F8h] [rbp-F0h]
  ULONG64 v70; // [rsp+100h] [rbp-E8h]
  ULONG64 v71; // [rsp+108h] [rbp-E0h]
  _BYTE v72[160]; // [rsp+110h] [rbp-D8h] BYREF

  v70 = a1;
  v71 = a1;
  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2109LL);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 660LL;
LABEL_11:
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v15);
    if ( v63 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v61);
    }
    return -1073741811LL;
  }
  v11 = (struct _D3DKMT_OPENSWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_OPENSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v11;
  v12 = 0LL;
  v68 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v14 = Handle.SurfaceCount == 0;
  if ( v14 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v10 = WdLogNewEntry5_WdError(v14, Handle.SurfaceCount);
    *(_QWORD *)(v10 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v10 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_11;
  }
  if ( Handle.SurfaceCount )
  {
    v19 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v19 = -1LL;
    v20 = (HANDLE *)operator new[](v19, 0x4B677844u, PagedPool);
    v12 = v20;
    v68 = v20;
    if ( !v20 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = 690LL;
      WdLogEvent5_WdLowResource(v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v26);
      if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v61);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v20;
  }
  v66 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v60, Handle.hDevice, Current, &v66);
  v31 = (__int64)v66;
  if ( v66 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64, v66);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, v31, 2, v36, 0);
    LODWORD(v31) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72, 0LL);
    if ( (int)v31 < 0 )
      goto LABEL_60;
    if ( !Handle.hNtSwapChain )
    {
      if ( Handle.pObjectAttributes )
      {
        LOBYTE(v37) = 1;
        v38 = ObOpenObjectByName(
                Handle.pObjectAttributes,
                g_pDxgkSharedSwapChainObjectType,
                v37,
                0LL,
                Handle.DesiredAccess,
                0LL,
                &Handle);
        v31 = v38;
        if ( v38 < 0 )
        {
          v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
          *(_QWORD *)(v42 + 24) = v31;
LABEL_31:
          WdLogEvent5_WdWarning(v42);
LABEL_60:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
          if ( v64[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
          goto LABEL_62;
        }
      }
    }
    v67 = 0LL;
    v43 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v67, 0LL);
    v47 = v43;
    LODWORD(v31) = v43;
    if ( v43 < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      *(_QWORD *)(v42 + 24) = Handle.hNtSwapChain;
      *(_QWORD *)(v42 + 32) = v47;
      goto LABEL_31;
    }
    v4 = *(UINT **)v67;
    v60[1] = (struct DXGDEVICE *)v4;
    if ( v4[56] )
    {
      if ( Handle.SurfaceCount || Handle.pNtSurfaceHandles )
      {
        v48 = WdLogNewEntry5_WdError(v45, v44);
        *(_QWORD *)(v48 + 24) = 753LL;
LABEL_42:
        WdLogEvent5_WdError(v48);
        LODWORD(v31) = -1073741811;
      }
    }
    else
    {
      if ( !Handle.pNtSurfaceHandles )
      {
        Handle.SurfaceCount = v4[13];
        LODWORD(v31) = -1073741789;
LABEL_46:
        v49 = v4[56] != 0;
        v69 = v49;
        ObfDereferenceObject(v67);
        if ( (int)(v31 + 0x80000000) < 0 || (_DWORD)v31 == -1073741789 )
        {
          v50 = v70;
          v51 = (_QWORD *)v70;
          if ( v70 >= MmUserProbeAddress )
            v51 = (_QWORD *)MmUserProbeAddress;
          *v51 = Handle.hNtSwapChain;
          v52 = (_DWORD *)(v50 + 48);
          if ( v50 + 48 >= MmUserProbeAddress )
            v52 = (_DWORD *)MmUserProbeAddress;
          *v52 = Handle.SurfaceCount;
          v53 = (_DWORD *)(v50 + 64);
          if ( v50 + 64 >= MmUserProbeAddress )
            v53 = (_DWORD *)MmUserProbeAddress;
          *v53 = v49;
          if ( pNtSurfaceHandles && Handle.SurfaceCount )
          {
            SurfaceCount = Handle.SurfaceCount;
            if ( (unsigned __int64)&pNtSurfaceHandles[SurfaceCount] > MmUserProbeAddress
              || &pNtSurfaceHandles[SurfaceCount] <= pNtSurfaceHandles )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pNtSurfaceHandles, v12, SurfaceCount * 8);
          }
        }
        goto LABEL_60;
      }
      if ( Handle.SurfaceCount != v4[13] )
      {
        v48 = WdLogNewEntry5_WdError(v45, v44);
        *(_QWORD *)(v48 + 24) = Handle.SurfaceCount;
        *(_QWORD *)(v48 + 32) = v4[13];
        goto LABEL_42;
      }
    }
    if ( (int)v31 >= 0 )
    {
      LODWORD(v31) = DXGSWAPCHAIN::OpenSwapchainLocal(
                       (DXGSWAPCHAIN *)v4,
                       Handle.hDevice,
                       v66,
                       Handle.BufferAvailableEvent,
                       Handle.bFailAcquireIfSurfaceBusy,
                       Handle.bProducer);
      if ( (int)v31 >= 0 )
      {
        v4[16] = Handle.DesiredAccessTextures;
        LODWORD(v31) = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener((DXGSWAPCHAIN *)v4, &Handle);
      }
    }
    goto LABEL_46;
  }
  v32 = WdLogNewEntry5_WdError(v30, v29);
  *(_QWORD *)(v32 + 24) = Handle.hDevice;
  LODWORD(v31) = -1073741811;
  *(_QWORD *)(v32 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v32);
LABEL_62:
  if ( v60[0] )
  {
    v34 = _InterlockedDecrement64((volatile signed __int64 *)v60[0] + 8);
    if ( !v34 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60[0] + 2), v60[0]);
  }
  if ( v12 )
    operator delete[](v12);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    LODWORD(v59) = Handle.hDevice;
    LODWORD(HandleInformation) = Handle.bProducer;
    LODWORD(Object) = v31;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      v34,
      v33,
      v35,
      v4,
      Object,
      HandleInformation,
      v59,
      Handle.BufferAvailableEvent,
      Handle.hNtSwapChain);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v33);
  if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v61);
  return (unsigned int)v31;
}
