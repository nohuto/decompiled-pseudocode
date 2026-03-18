/*
 * XREFs of ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18020CE38
 * Callers:
 *     ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x18020CEF0 (--_GCCompositionMipmapSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800198A8 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ @ 0x18020D67C (-ReleaseResources@CCompositionMipmapSurface@@AEAAXXZ.c)
 */

void __fastcall CCompositionMipmapSurface::~CCompositionMipmapSurface(CCompositionMipmapSurface *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCompositionMipmapSurface::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionMipmapSurface::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CCompositionMipmapSurface::`vftable'{for `ISceneNotificationListener'};
  CCompositionMipmapSurface::ReleaseResources(this);
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (CCompositionMipmapSurface *)((char *)this + 88));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
