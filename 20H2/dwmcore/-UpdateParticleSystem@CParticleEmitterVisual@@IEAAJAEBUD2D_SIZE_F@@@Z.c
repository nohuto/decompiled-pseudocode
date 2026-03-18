/*
 * XREFs of ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1801E0F18
 * Callers:
 *     ?GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DBBF0 (-GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801DE294 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x1801DF1BC (-EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z.c)
 *     ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E0244 (-RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x1801E0DA4 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E1054 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
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

  v2 = *((float *)this + 154);
  v3 = 0;
  v4 = *((float *)this + 1580);
  v7 = *((float *)this + 155);
  if ( v4 > v2 )
  {
    v4 = v4 - *((float *)this + 156);
    *((float *)this + 1580) = v4;
  }
  v8 = (float)(v2 - v4) + *((float *)this + 1575);
  *((float *)this + 1575) = v8;
  CParticleEmitterVisual::RemoveDeadParticles(this, v8);
  for ( i = *((float *)this + 1575); ; *((float *)this + 1575) = i )
  {
    if ( i <= v7 )
    {
      CParticleEmitterVisual::UpdateBounds(this, a2);
      *((_DWORD *)this + 1580) = *((_DWORD *)this + 154);
      *((_BYTE *)this + 6357) = 0;
      return v3;
    }
    CParticleEmitterVisual::UpdateParticles(this, v7);
    if ( *((_BYTE *)this + 6356) )
    {
      if ( *((float *)this + 156) > *((float *)this + 154)
        && *(float *)(*((_QWORD *)this + 93) + 220LL) > *((float *)this + 1575) )
      {
        v10 = CParticleEmitterVisual::EmitParticles(this, v7, a2);
        v3 = v10;
        if ( v10 < 0 )
          break;
      }
    }
    CParticleEmitterVisual::ApplyActiveBehaviors(this, v7);
    i = *((float *)this + 1575) - v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB6u, 0LL);
  return v3;
}
