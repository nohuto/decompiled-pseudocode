/*
 * XREFs of ??1CHolographicViewer@@MEAA@XZ @ 0x18029C63C
 * Callers:
 *     ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x18029C690 (--_ECHolographicViewer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x18029C870 (-Dispose@CHolographicViewer@@UEAAJXZ.c)
 */

void __fastcall CHolographicViewer::~CHolographicViewer(CHolographicViewer *this)
{
  CHolographicViewer *v2; // rcx

  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  v2 = (CHolographicViewer *)((char *)this + 72);
  *(_QWORD *)v2 = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  CHolographicViewer::Dispose(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  CResource::~CResource(this);
}
