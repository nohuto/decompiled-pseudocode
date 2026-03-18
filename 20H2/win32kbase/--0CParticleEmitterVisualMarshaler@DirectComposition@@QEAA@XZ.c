/*
 * XREFs of ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01CE1E8
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00586E0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C005DB4C (--0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CVisualMarshaler::CVisualMarshaler((__int64)this, 117);
  *(_QWORD *)v1 = &DirectComposition::CParticleEmitterVisualMarshaler::`vftable';
  *(_QWORD *)(v1 + 512) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 528) = 0;
  return v1;
}
