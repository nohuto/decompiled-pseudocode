/*
 * XREFs of ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0336544
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035F620 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z.c)
 * Callees:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int Device; // eax
  char *v7; // rbx
  unsigned int v8; // [rsp+78h] [rbp+10h] BYREF

  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  if ( !RenderAdapterInfo )
  {
    Device = DXGADAPTER::CreateHandle(*((DXGADAPTER **)a2 + 2), this, &v8);
    if ( Device < 0 )
    {
LABEL_3:
      WdLogSingleEntry1(3LL, Device);
      return 0LL;
    }
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  }
  v7 = (char *)RenderAdapterInfo + 40;
  if ( !*((_QWORD *)RenderAdapterInfo + 5) )
  {
    Device = ADAPTER_RENDER::CreateDevice(
               *((_QWORD *)RenderAdapterInfo + 6),
               (DXGDEVICE **)RenderAdapterInfo + 5,
               0,
               3,
               0LL,
               0,
               0,
               0,
               0LL,
               0LL,
               1);
    if ( Device < 0 )
      goto LABEL_3;
  }
  return *(struct DXGDEVICE **)v7;
}
