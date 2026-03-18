/*
 * XREFs of ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801BCE10
 * Callers:
 *     ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x1801BCE80 (--_GCCompositionCubeMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180097A38 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801BD7D4 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 */

void __fastcall CCompositionCubeMap::~CCompositionCubeMap(CCompositionCubeMap *this)
{
  *(_QWORD *)this = &CCompositionCubeMap::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionCubeMap::`vftable'{for `ICompositionSurfaceInfoListener'};
  CCompositionCubeMap::ReleaseResources(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
