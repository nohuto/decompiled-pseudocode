/*
 * XREFs of ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0057D80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058240 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0231830 (DxgkDdiQueryPhysicalFunctionLuid.c)
 */

__int64 __fastcall DpiDdiQueryPhysicalFunctionLuid(void *a1, struct _LUID *a2)
{
  unsigned int v2; // ebx
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  void *v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v4, v7, 0LL, 1);
  v2 = v6;
  if ( v6 >= 0 )
  {
    DxgkDdiQueryPhysicalFunctionLuid(*(void **)(v5 + 3896));
    v2 = 0;
    v6 = 0;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v4);
  return v2;
}
