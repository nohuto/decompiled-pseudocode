/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x1800A2A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x1800A2A88 (--1CD3DResource@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((char *)this + 112);
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
