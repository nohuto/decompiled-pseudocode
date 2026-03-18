/*
 * XREFs of DxgkDdiResetVirtualFunction @ 0x1C035A2C4
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0065AC0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0358A24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 */

__int64 __fastcall DxgkDdiResetVirtualFunction(__int64 *a1, int a2, unsigned __int16 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdi
  int v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = a3;
  if ( bTracingEnabled )
  {
    v11 = a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiResetVirtualFunction", (wchar_t *)L"%d", v11);
  }
  v6 = a1[350];
  v12 = v4;
  v7 = v4;
  v8 = ADAPTER_RENDER::ResetVirtualFunction(v6, a2, &v12);
  v9 = v8;
  if ( bTracingEnabled )
  {
    VgpuTrace(0, v8, a1, L"DxgkDdiResetVirtualFunction", 0LL);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196612,
      v7,
      (__int64)L"ResetVirtualFunction called, returning %1",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
