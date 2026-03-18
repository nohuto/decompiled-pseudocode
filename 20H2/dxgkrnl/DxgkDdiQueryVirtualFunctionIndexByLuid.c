/*
 * XREFs of DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C02307A8
 * Callers:
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C00581B0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     DpiIovGetBackingResource @ 0x1C02D2ED0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02D3030 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02D3150 (DpiIovGetMmioRanges.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C022E980 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionIndexByLuid(_QWORD *a1, int a2, struct _LUID *a3, _WORD *a4)
{
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // ebx
  LONG HighPart; // [rsp+30h] [rbp-18h]
  DWORD LowPart; // [rsp+38h] [rbp-10h]

  VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(a1[338], a2, a3);
  if ( VirtualGpuByLuid )
  {
    v12 = 0;
    *a4 = *((_WORD *)VirtualGpuByLuid + 12);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = 1060LL;
    WdLogEvent5_WdWarning(v11);
    v12 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, v12, a1, L"DxgkDdiQueryVirtualFunctionIndexByLuid", (wchar_t *)L"%d %d %d\n", a4, HighPart, LowPart);
  }
  return v12;
}
