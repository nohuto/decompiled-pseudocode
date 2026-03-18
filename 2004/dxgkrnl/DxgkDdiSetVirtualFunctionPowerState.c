/*
 * XREFs of DxgkDdiSetVirtualFunctionPowerState @ 0x1C0231D64
 * Callers:
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0058030 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?SetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C0230DF8 (-SetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETVIRTU.c)
 */

__int64 __fastcall DxgkDdiSetVirtualFunctionPowerState(_QWORD *a1, int a2, unsigned __int16 a3, int a4, char a5)
{
  int v5; // ebp
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-30h]

  v5 = a3;
  v13 = 0LL;
  v14 = 0;
  v8 = a1[338];
  LOBYTE(v14) = a5;
  LODWORD(v13) = a3;
  HIDWORD(v13) = a4;
  v9 = ADAPTER_RENDER::SetVirtualFunctionPowerState(v8, a2, (unsigned int *)&v13);
  if ( bTracingEnabled )
  {
    v12 = a4;
    v11 = v5;
    VgpuTrace(1, v9, a1, L"DxgkDdiSetVirtualFunctionPowerState", (wchar_t *)L"%d %d", v11, v12);
  }
  return v9;
}
