/*
 * XREFs of ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800456B8
 * Callers:
 *     ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x1800455C0 (--_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x180045794 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  *(_QWORD *)this = &CAccentAcrylicBlurBehind::`vftable';
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
