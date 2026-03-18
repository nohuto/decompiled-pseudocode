/*
 * XREFs of ?ValidateEmitterGeometry@CParticleEmitterVisual@@QEBAJPEAVCGeometry@@@Z @ 0x1801A60AC
 * Callers:
 *     ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801A2B60 (-SetEmitterGeometry@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::ValidateEmitterGeometry(CParticleEmitterVisual *this, struct CGeometry *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 137LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 100LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 57LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 124LL) )
  {
    return 0LL;
  }
  else
  {
    return 2291663875LL;
  }
}
