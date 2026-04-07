/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x18000D438
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x18000D3F0 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18000D5A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 360);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
