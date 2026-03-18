/*
 * XREFs of ?SetEmitterTime@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJM@Z @ 0x180172710
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x180171610 (-OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterTime(
        float *a1,
        float a2)
{
  if ( a2 != a1[154] )
  {
    a1[154] = a2;
    CParticleEmitterVisual::OnEmitterTimeChanged((CParticleEmitterVisual *)a1);
  }
  return 0LL;
}
