/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z @ 0x180047990
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18000B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxStereo::GetTechnologyLicenseResult(
        CSpatialAudioDtsxStereo *this,
        const unsigned __int16 *a2)
{
  AtmosCheck *v2; // rcx
  __int64 result; // rax

  v2 = (AtmosCheck *)*((_QWORD *)this + 1);
  result = 2147549183LL;
  if ( v2 )
    return AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v2, a2, 5, 0LL);
  return result;
}
