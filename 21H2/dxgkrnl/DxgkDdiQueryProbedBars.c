/*
 * XREFs of DxgkDdiQueryProbedBars @ 0x1C0231614
 * Callers:
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0058C50 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00400A4 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C0230500 (-QueryProbedBars@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

__int64 __fastcall DxgkDdiQueryProbedBars(_QWORD *a1, int a2, unsigned __int16 a3, int *a4)
{
  __int64 v5; // rcx
  int v6; // esi
  unsigned int ProbedBars; // ebx
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+30h] [rbp-48h]
  int v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  unsigned int v16[2]; // [rsp+60h] [rbp-18h] BYREF
  int *v17; // [rsp+68h] [rbp-10h]

  v16[1] = 0;
  v5 = a1[338];
  v6 = a3;
  v16[0] = a3;
  v17 = a4;
  ProbedBars = ADAPTER_RENDER::QueryProbedBars(v5, a2, v16);
  if ( bTracingEnabled )
  {
    v15 = v17[5];
    v14 = v17[4];
    v13 = v17[3];
    v12 = v17[2];
    v11 = v17[1];
    v10 = *v17;
    v9 = v6;
    VgpuTrace(
      1,
      ProbedBars,
      a1,
      L"DxgkDdiQueryProbedBars",
      (wchar_t *)L"%d - %d %d %d %d %d %d",
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return ProbedBars;
}
