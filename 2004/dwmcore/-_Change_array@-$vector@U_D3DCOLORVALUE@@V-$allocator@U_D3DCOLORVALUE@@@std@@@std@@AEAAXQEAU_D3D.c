/*
 * XREFs of ?_Change_array@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAXQEAU_D3DCOLORVALUE@@_K1@Z @ 0x180045B28
 * Callers:
 *     ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x180045B98 (--$_Emplace_reallocate@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Rect.c)
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x1800BD744 (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801756CC (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1801DAF64 (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 *     ??$_Emplace_reallocate@U?$ParticleKeyframe@M@Particles@@@?$vector@U?$ParticleKeyframe@M@Particles@@V?$allocator@U?$ParticleKeyframe@M@Particles@@@std@@@std@@QEAAPEAU?$ParticleKeyframe@M@Particles@@QEAU23@$$QEAU23@@Z @ 0x1801DBFC0 (--$_Emplace_reallocate@U-$ParticleKeyframe@M@Particles@@@-$vector@U-$ParticleKeyframe@M@Particle.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x1801DE0E0 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<_D3DCOLORVALUE>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[2] = a2 + 16 * a4;
  a1[1] = a2 + 16 * a3;
  return result;
}
