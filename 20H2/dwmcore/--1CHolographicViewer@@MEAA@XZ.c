/*
 * XREFs of ??1CHolographicViewer@@MEAA@XZ @ 0x180257388
 * Callers:
 *     ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x1802573E0 (--_ECHolographicViewer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x1802575B0 (-Dispose@CHolographicViewer@@UEAAJXZ.c)
 */

void __fastcall CHolographicViewer::~CHolographicViewer(CHolographicViewer *this)
{
  CHolographicViewer *v2; // rcx

  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  v2 = (CHolographicViewer *)((char *)this + 64);
  *(_QWORD *)v2 = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  CHolographicViewer::Dispose(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  CResource::~CResource(this);
}
