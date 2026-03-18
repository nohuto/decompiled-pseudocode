/*
 * XREFs of ?SetIntegerProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01D78D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetIntegerProperty(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 == 1 )
  {
    if ( *((_DWORD *)this + 18) != a4 )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 18) = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
