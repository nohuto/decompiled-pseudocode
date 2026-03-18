/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C034D320
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0225596 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0349848 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03498B8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  char *v5; // r15
  void *v6; // rsi
  ULONG64 v7; // rax
  __int64 OpenerAcquiredSurfaceHandle_low; // rbx
  const wchar_t *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // eax
  int v18; // ebx
  struct _KTHREAD ***v19; // r14
  struct DXGSWAPCHAIN *v20; // r12
  int v21; // eax
  _DWORD *v22; // rdx
  _QWORD *v23; // rdx
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  size_t v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-168h] BYREF
  __int64 v33; // [rsp+58h] [rbp-160h]
  char v34; // [rsp+60h] [rbp-158h]
  PVOID Object; // [rsp+68h] [rbp-150h] BYREF
  __int64 v36; // [rsp+70h] [rbp-148h]
  struct DXGDEVICE *v37[3]; // [rsp+78h] [rbp-140h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+90h] [rbp-128h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-D8h]
  __int64 v40; // [rsp+F0h] [rbp-C8h]
  _BYTE v41[128]; // [rsp+100h] [rbp-B8h] BYREF

  v37[1] = a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2111);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2111);
  v5 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v7 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  Handle = *(struct _D3DKMT_ACQUIRESWAPCHAIN *)v7;
  v39 = *(_OWORD *)(v7 + 80);
  v40 = *(_QWORD *)(v7 + 96);
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    OpenerAcquiredSurfaceHandle_low = 1097LL;
    WdLogSingleEntry1(2LL, 1097LL);
    v9 = L"Inconsistent bProducer value between acquire and release";
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, OpenerAcquiredSurfaceHandle_low, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v32);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) > 0x32 )
  {
    OpenerAcquiredSurfaceHandle_low = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    WdLogSingleEntry1(2LL, LODWORD(Handle.OpenerAcquiredSurfaceHandle));
    v9 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
    goto LABEL_15;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) )
  {
    v5 = *(char **)&Handle.AcquireMetadataSize;
    if ( !*(_QWORD *)&Handle.AcquireMetadataSize )
    {
      OpenerAcquiredSurfaceHandle_low = 1112LL;
      WdLogSingleEntry1(2LL, 1112LL);
      v9 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_15;
    }
    v13 = 4LL * LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    if ( !is_mul_ok(LODWORD(Handle.OpenerAcquiredSurfaceHandle), 4uLL) )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4B677844u, 256LL, v4);
    v6 = (void *)v14;
    v36 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, 1119LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate deferred list",
        1119LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v32);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle.AcquireMetadataSize = v14;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v19 = (struct _KTHREAD ***)Object;
    v20 = *(struct DXGSWAPCHAIN **)Object;
    v37[0] = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v41, v20, Handle.bProducer, 1);
    v18 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v41, v37, 1);
    if ( v18 >= 0 )
    {
      if ( *((_DWORD *)v20 + 58) && Handle.bProducer )
      {
        WdLogSingleEntry1(2LL, 1202LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkAcquireSwapChain is not allowed for non-sequential swapchain producer",
          1202LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v18 = -1073741637;
      }
      else
      {
        v21 = DXGSWAPCHAIN::AcquireBuffer(*v19, &Handle, 0LL);
        v18 = v21;
        if ( v21 >= 0 && v21 != 259 )
        {
          v22 = (_DWORD *)((char *)a1 + 80);
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = v39;
          v23 = (_QWORD *)((char *)a1 + 88);
          if ( (unsigned __int64)a1 + 88 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = *((_QWORD *)&v39 + 1);
          v24 = (_DWORD *)((char *)a1 + 96);
          if ( (unsigned __int64)a1 + 96 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = v40;
          v25 = (_DWORD *)((char *)a1 + 64);
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v25 = (_DWORD *)MmUserProbeAddress;
          v26 = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
          *v25 = Handle.OpenerAcquiredSurfaceHandle;
          if ( Handle.ReleaseInfo.pMetaData )
          {
            v27 = (_QWORD *)((char *)a1 + 32);
            if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
              v27 = (_QWORD *)MmUserProbeAddress;
            *v27 = Handle.ReleaseInfo.pMetaData;
            v28 = (_QWORD *)((char *)a1 + 40);
            if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
              v28 = (_QWORD *)MmUserProbeAddress;
            *v28 = *(_QWORD *)&Handle.ReleaseInfo.DeferredFreeListSize;
          }
          if ( (_DWORD)v26 )
          {
            v29 = 4 * v26;
            if ( (unsigned __int64)&v5[v29] > MmUserProbeAddress || &v5[v29] <= v5 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v5, *(const void **)&Handle.AcquireMetadataSize, v29);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v41);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v17);
    v19 = (struct _KTHREAD ***)Object;
  }
  if ( v19 )
    ObfDereferenceObject(v19);
  if ( v6 )
    operator delete[](v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v32);
  return (unsigned int)v18;
}
