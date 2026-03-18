/*
 * XREFs of ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18019E624
 * Callers:
 *     ?SetEmitFrom@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum@ParticleEmitFrom@@@Z @ 0x1801A2A68 (-SetEmitFrom@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum.c)
 *     ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801A2B60 (-SetEmitterGeometry@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAA.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x18022D634 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022FB80 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<EmitterShapes::CSpawner>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1LL);
  return result;
}
