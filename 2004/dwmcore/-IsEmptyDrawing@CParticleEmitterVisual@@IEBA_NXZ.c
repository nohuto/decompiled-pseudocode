/*
 * XREFs of ?IsEmptyDrawing@CParticleEmitterVisual@@IEBA_NXZ @ 0x1801DDB00
 * Callers:
 *     ?IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ @ 0x1801DDAF0 (-IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x1801E2C24 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsEmptyDrawing(CParticleEmitterVisual *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 310) )
    return 1;
  v2 = *((_QWORD *)this + 90);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2) )
    return 1;
  return v1;
}
