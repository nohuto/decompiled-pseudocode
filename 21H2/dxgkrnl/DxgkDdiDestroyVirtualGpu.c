/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x1C03594BC
 * Callers:
 *     DpiFdoDispatchCleanupAndClose @ 0x1C01DDD20 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0357004 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // ebx
  struct DXGPROCESS *Current; // rax
  int v8; // ebx
  unsigned int v10; // [rsp+28h] [rbp-30h]

  v5 = a2;
  if ( !(_BYTE)a4
    || (Current = DXGPROCESS::GetCurrent((__int64)a1, a2, (__int64)a3, a4),
        a4 = *((_DWORD *)Current + 106) >> 6,
        (*((_DWORD *)Current + 106) & 0x40) != 0) )
  {
    v8 = ADAPTER_RENDER::DestroyVirtualGpu(a1[350], v5, a3, a4);
  }
  else
  {
    WdLogSingleEntry1(3LL, Current);
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    v10 = *a3;
    VgpuTrace(1, v8, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v10);
    DxgkLogInternalTriageEvent((__int64)a1, 196609, *a3, (__int64)L"Destroying vGPU returns %1", v8, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
