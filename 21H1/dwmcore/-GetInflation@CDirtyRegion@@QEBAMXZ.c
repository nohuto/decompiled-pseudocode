/*
 * XREFs of ?GetInflation@CDirtyRegion@@QEBAMXZ @ 0x18006B81C
 * Callers:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDirtyRegion::GetInflation(CDirtyRegion *this)
{
  float v1; // xmm2_4

  v1 = 0.0;
  if ( !*((_BYTE *)this + 4456)
    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1113) - 1.0) & _xmm) >= 0.0000011920929
     || *((_BYTE *)this + 4457)) )
  {
    return *((float *)this + 1113);
  }
  return v1;
}
