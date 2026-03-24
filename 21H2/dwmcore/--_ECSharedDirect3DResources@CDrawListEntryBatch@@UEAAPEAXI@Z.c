/*
 * XREFs of ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x1800DEA40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C930C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CDrawListEntryBatch::CSharedDirect3DResources *__fastcall CDrawListEntryBatch::CSharedDirect3DResources::`vector deleting destructor'(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        char a2)
{
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 120);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 88);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
