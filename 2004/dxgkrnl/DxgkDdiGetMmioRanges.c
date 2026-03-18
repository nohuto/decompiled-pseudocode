/*
 * XREFs of DxgkDdiGetMmioRanges @ 0x1C023145C
 * Callers:
 *     DpiIovGetMmioRanges @ 0x1C02D4110 (DpiIovGetMmioRanges.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C022FFB0 (-GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z.c)
 */

__int64 __fastcall DxgkDdiGetMmioRanges(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int MmioRanges; // ebx
  unsigned int v7; // [rsp+28h] [rbp-20h]
  unsigned int v8; // [rsp+30h] [rbp-18h]

  MmioRanges = ADAPTER_RENDER::GetMmioRanges(a1[338], a2, a3);
  if ( bTracingEnabled )
  {
    v8 = a3[1];
    v7 = *a3;
    VgpuTrace(1, MmioRanges, a1, L"DxgkDdiGetMmioRanges", (wchar_t *)L"%d %d", v7, v8);
  }
  return MmioRanges;
}
