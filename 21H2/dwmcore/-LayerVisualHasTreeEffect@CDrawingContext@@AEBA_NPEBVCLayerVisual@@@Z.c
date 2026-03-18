/*
 * XREFs of ?LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z @ 0x1800D90C8
 * Callers:
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18009DBB0 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800F32A8 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDrawingContext::LayerVisualHasTreeEffect(CDrawingContext *this, const struct CLayerVisual *a2)
{
  bool result; // al
  __int64 v5; // rcx

  result = 0;
  if ( (*(__int64 (__fastcall **)(const struct CLayerVisual *))(*(_QWORD *)a2 + 216LL))(a2) || *((_QWORD *)a2 + 91) )
  {
    if ( !CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(a2) )
      return 1;
    if ( a2 != *(const struct CLayerVisual **)(*((_QWORD *)this + 991) + 64LL) )
      return 1;
    v5 = *((_QWORD *)this + 23);
    if ( !v5
      || (const struct CLayerVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 + 24) + 32LL))(v5 + 24) != a2 )
    {
      return 1;
    }
  }
  return result;
}
