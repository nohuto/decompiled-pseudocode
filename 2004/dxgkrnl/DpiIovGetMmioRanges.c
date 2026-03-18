/*
 * XREFs of DpiIovGetMmioRanges @ 0x1C02D4110
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058240 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRanges @ 0x1C023145C (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0231958 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRanges(
        _DWORD *a1,
        struct _LUID a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r15d
  int VirtualGpuType; // esi
  unsigned int MmioRanges; // ebx
  __int64 v9; // rdi
  unsigned __int16 v11; // [rsp+20h] [rbp-40h] BYREF
  void *v12; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+40h] [rbp-20h]
  unsigned int v16[4]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]
  struct _LUID v18; // [rsp+98h] [rbp+38h] BYREF

  v18 = a2;
  v5 = a3;
  v12 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v12);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v13, v12, 0LL, 1);
  MmioRanges = v15;
  if ( v15 >= 0 )
  {
    v9 = v14;
    if ( *(_QWORD *)(v14 + 5320) )
    {
      v11 = 0;
      v15 = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v14 + 3896), VirtualGpuType, &v18, &v11);
      MmioRanges = v15;
      if ( v15 >= 0 )
      {
        v16[3] = 0;
        v16[1] = v5;
        v17 = a5;
        v16[2] = a4 / 0x18;
        v16[0] = v11;
        MmioRanges = DxgkDdiGetMmioRanges(*(_QWORD **)(v9 + 3896), VirtualGpuType, v16);
        v15 = MmioRanges;
      }
    }
    else
    {
      MmioRanges = -1073741811;
      v15 = -1073741811;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v13);
  return MmioRanges;
}
