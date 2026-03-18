/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0056E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004F19C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004F2C4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057230 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1C022D8B0 (DxgkDdiReadVirtualFunctionConfig.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfig(void *a1, void *a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int VirtualFunctionConfig; // ebx
  void *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, 1);
  VirtualFunctionConfig = v11;
  if ( v11 >= 0 )
  {
    VirtualFunctionConfig = DxgkDdiReadVirtualFunctionConfig(*(void **)(v10 + 3896), a4, a5);
    v11 = VirtualFunctionConfig;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return VirtualFunctionConfig;
}
