/*
 * XREFs of ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C0005554
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C00052D0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C00055AC (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C000564C (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00070D4 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::OpenLifetimeDirtyRegion(
        CCompositionSurface *this,
        unsigned __int64 a2,
        const struct CSM_REALIZATION_INFO *a3,
        HRGN *a4)
{
  __int64 result; // rax
  const struct CSM_REALIZATION_INFO *v6; // r11
  struct CCompositionBuffer *v7; // [rsp+20h] [rbp-18h] BYREF
  struct CBufferRealization *v8; // [rsp+28h] [rbp-10h] BYREF

  v7 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v7);
  if ( (int)result >= 0 )
  {
    v8 = 0LL;
    result = CCompositionBuffer::FindRealization(v7, v6, &v8);
    if ( (int)result >= 0 )
      return CBufferRealization::OpenLifetimeDirtyRegion(v8, a4);
  }
  return result;
}
