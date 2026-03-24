/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180189E94
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F200 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18005FB10 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3004 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800CF650 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z @ 0x1801831C0 (-SetRoot@CRenderTarget@@MEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180185D20 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180185E44 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180189954 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18018A4F0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180240008 (-OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUI.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  CD3DDevice *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r14
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r9d
  int Device; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int updated; // eax
  int v16; // r12d
  int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rcx
  CComposition *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-69h]
  struct CD3DDevice *v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h]
  __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  struct CVisual *v26; // [rsp+48h] [rbp-41h]
  int v27; // [rsp+50h] [rbp-39h] BYREF
  __int128 v28; // [rsp+54h] [rbp-35h]
  __int64 v29; // [rsp+64h] [rbp-25h]
  __int128 v30; // [rsp+70h] [rbp-19h] BYREF
  enum DXGI_FORMAT v31[4]; // [rsp+80h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+98h] [rbp+Fh]

  v24 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xC3u);
  v7 = (void *)a3[1];
  v8 = 0LL;
  v26 = Resource;
  v25 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v30 = 0LL;
  *(_OWORD *)v31 = 0LL;
  if ( !Resource )
  {
    v9 = -2003303421;
    v10 = -2003303421;
    v22 = 29;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v22, 0LL);
    goto LABEL_23;
  }
  Device = CDeviceManager::GetDevice(0LL, a3[2], &v23);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0x21u, 0LL);
    v5 = v23;
    goto LABEL_23;
  }
  v5 = v23;
  v13 = CD3DDevice::OpenIndirectSwapchain(v23, v7);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x29u, 0LL);
    goto LABEL_23;
  }
  v7 = 0LL;
  updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v24 + 56LL))(v24, 0LL, (char *)this + 1960);
  v9 = updated;
  if ( updated < 0 )
  {
    v22 = 50;
    goto LABEL_20;
  }
  updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 245))(
              *((_QWORD *)this + 245),
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              &v25);
  v9 = updated;
  if ( updated < 0 )
  {
    v22 = 51;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 80LL))(v25, &v30);
  v16 = v30;
  v17 = DWORD1(v30);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v31[0]);
  v9 = updated;
  if ( updated < 0 )
  {
    v22 = 59;
    goto LABEL_20;
  }
  updated = CRenderTarget::SetRoot(this, v26);
  v9 = updated;
  if ( updated < 0 )
  {
    v22 = 62;
    goto LABEL_20;
  }
  v18 = v24;
  *((_QWORD *)this + 244) = v24;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  *((_DWORD *)this + 20) = v16;
  *((_DWORD *)this + 21) = v17;
  *((_DWORD *)this + 494) = v16;
  *((_DWORD *)this + 495) = v17;
  *((struct _LUID *)this + 246) = a3[2];
  *((_BYTE *)this + 1772) = 1;
  updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
  v9 = updated;
  if ( updated < 0 )
  {
    v22 = 75;
LABEL_20:
    v10 = updated;
    goto LABEL_3;
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
LABEL_23:
  if ( *((_QWORD *)this + 245) )
  {
    LODWORD(v23) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDevice **))(*(_QWORD *)v24 + 64LL))(v24, 4LL, &v23);
    v19 = *((_QWORD *)this + 245);
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      *((_QWORD *)this + 245) = 0LL;
    }
  }
  if ( v9 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v5 )
    CD3DDevice::Release(v5);
  if ( v7 )
    CloseHandle(v7);
  v20 = (CComposition *)*((_QWORD *)this + 2);
  v27 = 19;
  v28 = 0LL;
  DWORD1(v28) = v9;
  v29 = 0LL;
  CComposition::NotifyHelper(v20, (struct MIL_MESSAGE *)&v27);
  return 0LL;
}
