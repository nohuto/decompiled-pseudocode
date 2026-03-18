/*
 * XREFs of DxgkDdiGetVirtualGpuInfo @ 0x1C022D3C0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C45F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003E2E4 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C022C0A4 (-GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@.c)
 */

__int64 __fastcall DxgkDdiGetVirtualGpuInfo(__int64 *a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 v9; // rdx
  unsigned int VirtualGpuInfo; // ebx
  unsigned int v12; // [rsp+28h] [rbp-D0h]
  _BYTE v13[144]; // [rsp+30h] [rbp-C8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)a1, 0LL);
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1)
    || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL) >= 0 )
  {
    VirtualGpuInfo = ADAPTER_RENDER::GetVirtualGpuInfo(a1[335], a2, a3, a4, a5);
    if ( bTracingEnabled )
    {
      v12 = *a3;
      VgpuTrace(1, VirtualGpuInfo, a1, L"DxgkDdiGetVirtualGpuInfo", (wchar_t *)L"%d", v12);
    }
  }
  else
  {
    VirtualGpuInfo = -1073741130;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13, v9);
  return VirtualGpuInfo;
}
