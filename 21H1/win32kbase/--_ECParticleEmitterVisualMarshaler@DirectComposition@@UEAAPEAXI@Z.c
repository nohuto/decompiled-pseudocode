/*
 * XREFs of ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6B80
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00928CC (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0092904 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CParticleEmitterVisualMarshaler *__fastcall DirectComposition::CParticleEmitterVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CParticleEmitterVisualMarshaler *)((char *)this + 512));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
