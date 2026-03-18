/*
 * XREFs of ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0C00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009A87C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C009A8B4 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CParticleEmitterVisualMarshaler *__fastcall DirectComposition::CParticleEmitterVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CParticleEmitterVisualMarshaler *)((char *)this + 512));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
