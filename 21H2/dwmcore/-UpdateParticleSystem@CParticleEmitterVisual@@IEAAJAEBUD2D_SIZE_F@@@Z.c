/*
 * XREFs of ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802309CC
 * Callers:
 *     ?GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022B580 (-GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x18022DD78 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x18022EB9C (-EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z.c)
 *     ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x18022FC24 (-RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x180230858 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x180230B08 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::UpdateParticleSystem(
        CParticleEmitterVisual *this,
        const struct D2D_SIZE_F *a2)
{
  float v2; // xmm1_4
  unsigned int v3; // edi
  float v4; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float i; // xmm0_4
  int v10; // eax
  __int64 v11; // rcx

  v2 = *((float *)this + 182);
  v3 = 0;
  v4 = *((float *)this + 1608);
  v7 = *((float *)this + 183);
  if ( v4 > v2 )
  {
    v4 = v4 - *((float *)this + 184);
    *((float *)this + 1608) = v4;
  }
  v8 = (float)(v2 - v4) + *((float *)this + 1603);
  *((float *)this + 1603) = v8;
  CParticleEmitterVisual::RemoveDeadParticles(this, v8);
  for ( i = *((float *)this + 1603); ; *((float *)this + 1603) = i )
  {
    if ( i <= v7 )
    {
      CParticleEmitterVisual::UpdateBounds(this, a2);
      *((_DWORD *)this + 1608) = *((_DWORD *)this + 182);
      *((_BYTE *)this + 6469) = 0;
      return v3;
    }
    CParticleEmitterVisual::UpdateParticles(this, v7);
    if ( *((_BYTE *)this + 6468) )
    {
      if ( *((float *)this + 184) > *((float *)this + 182)
        && *(float *)(*((_QWORD *)this + 107) + 228LL) > *((float *)this + 1603) )
      {
        v10 = CParticleEmitterVisual::EmitParticles(this, v7, a2);
        v3 = v10;
        if ( v10 < 0 )
          break;
      }
    }
    CParticleEmitterVisual::ApplyActiveBehaviors(this, v7);
    i = *((float *)this + 1603) - v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xAFu);
  return v3;
}
