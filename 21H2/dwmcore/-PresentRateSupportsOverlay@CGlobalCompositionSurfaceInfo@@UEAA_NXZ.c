/*
 * XREFs of ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1800F13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcCurrentPresentCount@CPresentRate@@IEBAIPEBVCGlobalCompositionSurfaceInfo@@@Z @ 0x18020D00C (-CalcCurrentPresentCount@CPresentRate@@IEBAIPEBVCGlobalCompositionSurfaceInfo@@@Z.c)
 *     ?IsSufficientIntervalForStats@CPresentRate@@IEBA_N_N@Z @ 0x18020D0D8 (-IsSufficientIntervalForStats@CPresentRate@@IEBA_N_N@Z.c)
 *     ?IsSufficientPresentCount@CPresentRate@@IEAA_NI_N@Z @ 0x18020D1D0 (-IsSufficientPresentCount@CPresentRate@@IEAA_NI_N@Z.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::PresentRateSupportsOverlay(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // bl
  CPresentRate *v3; // rcx
  unsigned int v4; // eax

  v1 = *((_BYTE *)this + 265);
  if ( CPresentRate::IsSufficientIntervalForStats((CGlobalCompositionSurfaceInfo *)((char *)this + 88), v1) )
  {
    v4 = CPresentRate::CalcCurrentPresentCount(v3, this);
    if ( v4 )
      return CPresentRate::IsSufficientPresentCount((CGlobalCompositionSurfaceInfo *)((char *)this + 88), v4, v1);
  }
  return v1;
}
