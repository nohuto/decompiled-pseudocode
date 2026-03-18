/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C02ABC00
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A8668 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02A86D8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A870C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02A8B44 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v5; // r15
  void *v6; // rsi
  ULONG64 v7; // rax
  __int64 v8; // rax
  __int64 OpenerAcquiredSurfaceHandle_low; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  SIZE_T v14; // rax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  HANDLE hNtSwapChain; // r14
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  struct _KTHREAD ***v32; // r14
  struct DXGSWAPCHAIN *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  _DWORD *v40; // rdx
  _DWORD *v41; // rdx
  __int64 v42; // r8
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  size_t v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // [rsp+30h] [rbp-158h] BYREF
  __int64 v49; // [rsp+38h] [rbp-150h]
  char v50; // [rsp+40h] [rbp-148h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  PVOID v52; // [rsp+50h] [rbp-138h]
  struct DXGDEVICE *v53[3]; // [rsp+58h] [rbp-130h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+70h] [rbp-118h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-C8h]
  __int64 v56; // [rsp+D0h] [rbp-B8h]
  _BYTE v57[128]; // [rsp+E0h] [rbp-A8h] BYREF

  v53[1] = a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2111);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2111LL);
  v5 = 0LL;
  v6 = 0LL;
  v52 = 0LL;
  v7 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  Handle = *(struct _D3DKMT_ACQUIRESWAPCHAIN *)v7;
  v55 = *(_OWORD *)(v7 + 80);
  v56 = *(_QWORD *)(v7 + 96);
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v8 + 24) = 1098LL;
LABEL_15:
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v10);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v48);
    }
    return 3221225485LL;
  }
  OpenerAcquiredSurfaceHandle_low = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) > 0x32 )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v8 + 24) = OpenerAcquiredSurfaceHandle_low;
    goto LABEL_15;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) )
  {
    v5 = *(char **)&Handle.AcquireMetadataSize;
    if ( !*(_QWORD *)&Handle.AcquireMetadataSize )
    {
      v8 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
      *(_QWORD *)(v8 + 24) = 1113LL;
      goto LABEL_15;
    }
    v14 = 4LL * LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    if ( !is_mul_ok(LODWORD(Handle.OpenerAcquiredSurfaceHandle), 4uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, 0x4B677844u, PagedPool);
    v6 = v15;
    v52 = v15;
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = 1120LL;
      WdLogEvent5_WdLowResource(v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v21);
      if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v48);
      return 3221225495LL;
    }
    memset(v15, 0, 4 * OpenerAcquiredSurfaceHandle_low);
    *(_QWORD *)&Handle.AcquireMetadataSize = v6;
  }
  Object = 0LL;
  hNtSwapChain = Handle.hNtSwapChain;
  v25 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v29 = v25;
  if ( v25 >= 0 )
  {
    v32 = (struct _KTHREAD ***)Object;
    v33 = *(struct DXGSWAPCHAIN **)Object;
    v53[0] = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v57, v33, Handle.bProducer, 1);
    LODWORD(v29) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v57, v53, 1);
    if ( (int)v29 >= 0 )
    {
      if ( *((_DWORD *)v33 + 56) && Handle.bProducer )
      {
        v36 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v36 + 24) = 1203LL;
        WdLogEvent5_WdError(v36);
        LODWORD(v29) = -1073741637;
      }
      else
      {
        v37 = DXGSWAPCHAIN::AcquireBuffer(*v32, &Handle, 0LL);
        LODWORD(v29) = v37;
        if ( v37 >= 0 && v37 != 259 )
        {
          v38 = (_DWORD *)((char *)a1 + 80);
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v38 = (_DWORD *)MmUserProbeAddress;
          *v38 = v55;
          v39 = (_QWORD *)((char *)a1 + 88);
          if ( (unsigned __int64)a1 + 88 >= MmUserProbeAddress )
            v39 = (_QWORD *)MmUserProbeAddress;
          *v39 = *((_QWORD *)&v55 + 1);
          v40 = (_DWORD *)((char *)a1 + 96);
          if ( (unsigned __int64)a1 + 96 >= MmUserProbeAddress )
            v40 = (_DWORD *)MmUserProbeAddress;
          *v40 = v56;
          v41 = (_DWORD *)((char *)a1 + 64);
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v41 = (_DWORD *)MmUserProbeAddress;
          v42 = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
          *v41 = Handle.OpenerAcquiredSurfaceHandle;
          if ( Handle.ReleaseInfo.pMetaData )
          {
            v43 = (_QWORD *)((char *)a1 + 32);
            if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
              v43 = (_QWORD *)MmUserProbeAddress;
            *v43 = Handle.ReleaseInfo.pMetaData;
            v44 = (_QWORD *)((char *)a1 + 40);
            if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
              v44 = (_QWORD *)MmUserProbeAddress;
            *v44 = *(_QWORD *)&Handle.ReleaseInfo.DeferredFreeListSize;
          }
          if ( (_DWORD)v42 )
          {
            v45 = 4 * v42;
            if ( (unsigned __int64)&v5[v45] > MmUserProbeAddress || &v5[v45] <= v5 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v5, *(const void **)&Handle.AcquireMetadataSize, v45);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v57);
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v30 + 24) = hNtSwapChain;
    *(_QWORD *)(v30 + 32) = v29;
    WdLogEvent5_WdWarning(v30);
    v32 = (struct _KTHREAD ***)Object;
  }
  if ( v32 )
    ObfDereferenceObject(v32);
  if ( v6 )
    operator delete[](v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v31);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v48);
  return (unsigned int)v29;
}
