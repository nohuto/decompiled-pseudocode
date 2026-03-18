/*
 * XREFs of ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C
 * Callers:
 *     ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x18001BD30 (--_GCLegacyRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x18019EFB0 (--_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800132A0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     PubSebUnregisterRpc @ 0x18001F4E4 (PubSebUnregisterRpc.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6870 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C69B8 (--1COverlayContext@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801C0EFC (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18026C12C (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v6; // rcx
  CRegion *v7; // rcx
  CResource *v8; // rcx
  __int64 v9; // rdx
  CResource *v10; // rcx
  char updated; // al
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 9) = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 18568;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 18584;
  v4 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 18608;
  CLegacyRenderTarget::ReleaseSwapChain(this);
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2328);
  if ( v5 )
  {
    if ( *((_BYTE *)this + 18615) )
    {
      if ( *((_BYTE *)this + 18616) && *((_QWORD *)this + 2329) )
      {
        PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2329), 0);
        v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2328);
      }
      updated = PubSebiUpdateLevelEventRpc(v5, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zqq_EventWriteTransfer(v13, v12, v14, 0, updated);
      v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2328);
      *((_BYTE *)this + 18615) = 0;
    }
    PubSebUnregisterRpc(v5);
    *((_QWORD *)this + 2328) = 0LL;
  }
  v6 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2329);
  if ( v6 )
  {
    PubSebUnregisterRpc(v6);
    *((_QWORD *)this + 2329) = 0LL;
  }
  v7 = (CRegion *)*((_QWORD *)this + 2325);
  if ( v7 )
    CRegion::`scalar deleting destructor'(v7, 1);
  FastRegion::CRegion::FreeMemory((CLegacyRenderTarget *)((char *)this + 18528));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 18520);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 192));
  v8 = (CResource *)*((_QWORD *)this + 23);
  if ( v8 )
    CResource::InternalRelease(v8);
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
  {
    v15 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((char *)this + 168);
  v10 = (CResource *)*((_QWORD *)this + 20);
  if ( v10 )
    CResource::InternalRelease(v10);
  CRenderTarget::~CRenderTarget(this);
}
