/*
 * XREFs of ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x18019DB6C
 * Callers:
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x18019EC90 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C69B8 (--1COverlayContext@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayRenderTarget::~CDDisplayRenderTarget(void **this)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rsi
  CResource *v4; // rcx

  FastRegion::CRegion::FreeMemory(this + 2313);
  COverlayContext::~COverlayContext((COverlayContext *)(this + 23));
  v2 = (volatile signed __int32 *)this[22];
  if ( v2 )
  {
    v3 = v2 + 4;
    if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 4));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 208LL))(v2);
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        --*v3;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 200LL))(v2, 1LL);
      }
    }
  }
  v4 = (CResource *)this[21];
  if ( v4 )
    CResource::InternalRelease(v4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 20);
  CRenderTarget::~CRenderTarget((CRenderTarget *)this);
}
