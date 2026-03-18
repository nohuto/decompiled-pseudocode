/*
 * XREFs of ?ReleaseD3DResources@CD3DConstantBuffer@@MEAAXXZ @ 0x1800D9890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DConstantBuffer::ReleaseD3DResources(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)this + 14);
}
