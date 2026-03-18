/*
 * XREFs of ?SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DB670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetRemarshalingFlags(
        DirectComposition::CParticleBaseBehaviorMarshaler *this)
{
  if ( *((_DWORD *)this + 16) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 17) = 0;
  }
  if ( *((_DWORD *)this + 18) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x60) != 0;
}
