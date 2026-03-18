/*
 * XREFs of ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1802496E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ @ 0x180249638 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@UEAA@XZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::`scalar deleting destructor'(CLinkedShader *this, char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>((__int64)this + 32);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
