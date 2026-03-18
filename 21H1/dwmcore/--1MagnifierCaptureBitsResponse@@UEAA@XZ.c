/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18019EDAC
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18019EDF0 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CRenderTargetBitmap *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CRenderTargetBitmap *)*((_QWORD *)this + 215);
  if ( v2 )
    CRenderTargetBitmap::Release(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
