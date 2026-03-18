/*
 * XREFs of ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0057E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00500EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0050214 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058180 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C02309F0 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 */

__int64 __fastcall DpiDdiReadVirtualFunctionConfigBlock(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int VirtualFunctionConfigBlock; // ebx
  void *v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  DpiGetVirtualGpuType(a1, &v8);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, v8, 0LL, 1);
  VirtualFunctionConfigBlock = v11;
  if ( v11 >= 0 )
  {
    VirtualFunctionConfigBlock = DxgkDdiReadVirtualFunctionConfigBlock(*(void **)(v10 + 3896), a4, a5);
    v11 = VirtualFunctionConfigBlock;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return VirtualFunctionConfigBlock;
}
