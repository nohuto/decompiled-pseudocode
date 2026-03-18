/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x1C02AA5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqpq_EtwWriteTransfer @ 0x1C004A5CC (McTemplateK0pqqpq_EtwWriteTransfer.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02A5158 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02A51C8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02A51FC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C02A7BC0 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *v3; // rbx
  __int64 v4; // rdx
  BOOL bProducer; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HANDLE hNtSwapChain; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD ***v21; // rsi
  struct DXGSWAPCHAIN *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  __int64 v26; // [rsp+28h] [rbp-F0h]
  __int64 v27; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-D0h]
  char v29; // [rsp+50h] [rbp-C8h]
  PVOID v30; // [rsp+58h] [rbp-C0h] BYREF
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v32[128]; // [rsp+80h] [rbp-98h] BYREF

  v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)a1;
  LODWORD(v27) = -1;
  v28 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v29 = 1;
    LODWORD(v27) = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2200LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( Handle.bProducer )
  {
    v30 = 0LL;
    hNtSwapChain = Handle.hNtSwapChain;
    v12 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v30, 0LL);
    v16 = v12;
    if ( v12 >= 0 )
    {
      v21 = (struct _KTHREAD ***)v30;
      v22 = *(struct DXGSWAPCHAIN **)v30;
      v30 = 0LL;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v32, v22, 1, 1);
      LODWORD(v16) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)v32,
                       (struct DXGDEVICE **)&v30,
                       1);
      if ( (int)v16 >= 0 )
        LODWORD(v16) = DXGSWAPCHAIN::RemoveSurface(*v21, &Handle);
      ObfDereferenceObject(v21);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        LODWORD(v26) = bProducer;
        LODWORD(Object) = v16;
        McTemplateK0pqqpq_EtwWriteTransfer(
          v23,
          &EventIndirectSwapChainRemoveSurface,
          v24,
          v22,
          Object,
          v26,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx,
          v27,
          v28);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v32);
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = hNtSwapChain;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdWarning(v17);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v18);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v27);
    return (unsigned int)v16;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v6 + 24) = 947LL;
    WdLogEvent5_WdError(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v7);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v27);
    }
    return 3221225485LL;
  }
}
