/*
 * XREFs of ?GetInflation@CDirtyRegion@@QEBAMXZ @ 0x1800B9A54
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800B93B4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDirtyRegion::GetInflation(CDirtyRegion *this)
{
  float v1; // xmm2_4

  v1 = 0.0;
  if ( !*((_BYTE *)this + 4424)
    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1105) - 1.0) & _xmm) >= 0.0000011920929
     || *((_BYTE *)this + 4425)) )
  {
    return *((float *)this + 1105);
  }
  return v1;
}
