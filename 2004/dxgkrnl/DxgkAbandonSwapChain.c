/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C02ACA50
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02AC49C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rbx
  void *v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID v15; // rbx
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  char v18; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = (void **)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2113);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2113LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void **)MmUserProbeAddress;
  v4 = *v3;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v15 = Object;
    LODWORD(v9) = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v15);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v4;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, v11);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  return (unsigned int)v9;
}
