/*
 * XREFs of ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x180173B50
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x18016FD90 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801EC8D8 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801ECEA8 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECT.c)
 *     ?AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180205D00 (-AddLines@CPathEmitterEdge@EmitterShapes@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E6190 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180173860 (-_Reallocate_exactly@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<float>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 2;
  if ( a2 > result )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
    return std::vector<float>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
