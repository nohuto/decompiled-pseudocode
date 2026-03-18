/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x1802798FC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x180279F4C (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18027B90C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x1802814B0 (--$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@-$vector@UDDisplayPrimaryBufferResource.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayVBlankFenceResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180281D64 (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180282874 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1802828E4 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDisplaySwapChain@@@Z @ 0x180282BE0 (--4-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDisplaySw.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802844E4 (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180284664 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180284934 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x180284B20 (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x180284D40 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x1802856C4 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplaySwapchainForSource(
        CDDisplayManager *this,
        struct _LUID *a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        const struct D2D_SIZE_U *a5,
        unsigned int a6,
        void *a7,
        struct CDDisplaySwapChain **a8)
{
  int v8; // r14d
  CDDisplaySwapChain *v9; // rbx
  int v13; // eax
  CDeviceManager *v14; // rcx
  unsigned int v15; // edi
  int Device; // eax
  CDDisplayManager *v17; // rcx
  int DisplayDeviceAndTarget; // eax
  CDDisplayManager *v19; // rcx
  struct CD3DDevice *v20; // rbx
  int TaskPool; // eax
  CDDisplayManager *v22; // rcx
  int VBlankFence; // eax
  __int64 v24; // rcx
  CDDisplayManager *v25; // rcx
  int v26; // eax
  CDDisplayManager *v27; // rcx
  const struct D2D_SIZE_U *v28; // r8
  bool v29; // r9
  DDisplayPrimaryBufferResources *v30; // rsi
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v31; // rbx
  int PrimaryBuffer; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  LPVOID v37; // rax
  volatile signed __int32 *v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  CDDisplaySwapChain *v42; // rcx
  DDisplayPrimaryBufferResources *v43; // rbx
  unsigned int v45; // [rsp+30h] [rbp-D0h]
  CD3DDevice *v46; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v47; // [rsp+58h] [rbp-A8h] BYREF
  CDDisplaySwapChain *v48; // [rsp+60h] [rbp-A0h] BYREF
  DDisplayPrimaryBufferResources *v49[2]; // [rsp+68h] [rbp-98h] BYREF
  DDisplayPrimaryBufferResources *v50; // [rsp+78h] [rbp-88h]
  __int128 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h]
  char v53; // [rsp+98h] [rbp-68h]
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v55[2]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v56[5]; // [rsp+D0h] [rbp-30h] BYREF
  int v57; // [rsp+120h] [rbp+20h]
  int v58; // [rsp+124h] [rbp+24h]

  v8 = 0;
  memset(v56, 0, sizeof(v56));
  v47 = 0LL;
  v9 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  memset(v55, 0, sizeof(v55));
  v57 = -1;
  v58 = -1;
  v54 = 0LL;
  v50 = 0LL;
  *(_OWORD *)v49 = 0LL;
  v13 = CDDisplayManager::EnsureDDisplayManager(this);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0LL, v13, 0x147u);
    v30 = v49[1];
LABEL_30:
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CDDisplaySwapChain *)((char *)v9 + 16));
        (*(void (__fastcall **)(CDDisplaySwapChain *))(*(_QWORD *)v48 + 208LL))(v48);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) == 1 )
        {
          v42 = v48;
          --*((_DWORD *)v9 + 4);
          (*(void (__fastcall **)(CDDisplaySwapChain *, __int64))(*(_QWORD *)v42 + 200LL))(v42, 1LL);
        }
      }
      v30 = v49[1];
    }
    goto LABEL_35;
  }
  Device = CDeviceManager::GetDevice(v14, *a2, &v46);
  v15 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0LL, Device, 0x14Cu);
    goto LABEL_37;
  }
  DisplayDeviceAndTarget = CDDisplayManager::GetDisplayDeviceAndTarget(
                             v17,
                             *a2,
                             a7,
                             a3,
                             (struct DDisplayTargetResources *)v56);
  v15 = DisplayDeviceAndTarget;
  if ( DisplayDeviceAndTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0LL, DisplayDeviceAndTarget, 0x153u);
    goto LABEL_37;
  }
  v20 = v46;
  TaskPool = CDDisplayManager::CreateTaskPool(
               v19,
               v46,
               (const struct DDisplayTargetResources *)v56,
               (struct DDisplayTaskPoolResources *)v55);
  v15 = TaskPool;
  if ( TaskPool < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0LL, TaskPool, 0x159u);
    goto LABEL_37;
  }
  VBlankFence = CDDisplayManager::CreateVBlankFence(
                  v22,
                  v20,
                  (const struct DDisplayTargetResources *)v56,
                  (struct DDisplayVBlankFenceResources *)&v54);
  v15 = VBlankFence;
  if ( VBlankFence < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, VBlankFence, 0x15Fu);
    goto LABEL_37;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v47);
  v26 = CDDisplayManager::CreatePrimaryDescription(v25, (const struct RenderTargetInfo *)a2, a4, a5, &v47);
  v15 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v27, 0LL, 0LL, v26, 0x166u);
    goto LABEL_37;
  }
  v30 = v49[1];
  if ( a6 )
  {
    v31 = v47;
    while ( 1 )
    {
      v52 = 0LL;
      v51 = 0LL;
      v53 = 0;
      PrimaryBuffer = CDDisplayManager::CreatePrimaryBuffer(
                        v27,
                        v46,
                        v28,
                        v29,
                        (const struct DDisplayTargetResources *)v56,
                        v31,
                        v45,
                        (struct DDisplayPrimaryBufferResources *)&v51);
      v15 = PrimaryBuffer;
      if ( PrimaryBuffer < 0 )
        break;
      if ( v30 == v50 )
      {
        std::vector<DDisplayPrimaryBufferResources>::_Emplace_reallocate<DDisplayPrimaryBufferResources>(
          (__int64 *)v49,
          (__int64)v30,
          (__int64 *)&v51);
        v30 = v49[1];
      }
      else
      {
        v34 = v51;
        *(_QWORD *)&v51 = 0LL;
        *(_QWORD *)v30 = v34;
        v35 = *((_QWORD *)&v51 + 1);
        *((_QWORD *)&v51 + 1) = 0LL;
        *((_QWORD *)v30 + 1) = v35;
        v36 = v52;
        v52 = 0LL;
        *((_QWORD *)v30 + 2) = v36;
        *((_BYTE *)v30 + 24) = v53;
        v30 = (DDisplayPrimaryBufferResources *)((char *)v30 + 32);
        v49[1] = v30;
      }
      DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v51);
      if ( ++v8 >= a6 )
        goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, PrimaryBuffer, 0x173u);
    DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v51);
    goto LABEL_35;
  }
LABEL_14:
  v37 = operator new(0x238uLL);
  if ( v37 )
  {
    v38 = (volatile signed __int32 *)CDDisplaySwapChain::CDDisplaySwapChain(
                                       (__int64)v37,
                                       (__int64 *)&v47,
                                       (__int64 *)&v46,
                                       (__int64)v55,
                                       (__int64)&v54,
                                       (__int64)v56,
                                       (__int64 *)v49,
                                       a4,
                                       a2);
    v30 = v49[1];
  }
  else
  {
    v38 = 0LL;
  }
  wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::operator=((volatile signed __int32 **)&v48, v38);
  v9 = v48;
  if ( !v48 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, -2147024882, 0x182u);
    goto LABEL_35;
  }
  v40 = CDDisplaySwapChain::Initialize(v48);
  v15 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x183u);
    goto LABEL_30;
  }
  *a8 = v9;
LABEL_35:
  v43 = v49[0];
  if ( v49[0] )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(v49[0], v30);
    std::_Deallocate<16,0>(v43, (v50 - v43) & 0xFFFFFFFFFFFFFFE0uLL);
  }
LABEL_37:
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v54 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v54);
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v56);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v55);
  if ( v46 )
    CD3DDevice::Release(v46);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v47);
  return v15;
}
