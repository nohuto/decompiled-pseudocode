/*
 * XREFs of ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0057C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058240 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetResourceForBar @ 0x1C02314D0 (DxgkDdiGetResourceForBar.c)
 */

__int64 __fastcall DpiDdiGetResourceForBar(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  unsigned int ResourceForBar; // ebx
  void *v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  DpiGetVirtualGpuType(a1, &v7);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v8, v7, 0LL, 1);
  ResourceForBar = v10;
  if ( v10 >= 0 )
  {
    ResourceForBar = DxgkDdiGetResourceForBar(*(void **)(v9 + 3896), (__int64)a4);
    v10 = ResourceForBar;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v8);
  return ResourceForBar;
}
