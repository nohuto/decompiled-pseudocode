/*
 * XREFs of ?GetFloatAnimatableProperty@CParticleAttractorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DE130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleAttractorMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CParticleAttractorMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      *a3 = *((float *)this + 18);
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    *a3 = *((float *)this + 17);
  }
  return v3;
}
