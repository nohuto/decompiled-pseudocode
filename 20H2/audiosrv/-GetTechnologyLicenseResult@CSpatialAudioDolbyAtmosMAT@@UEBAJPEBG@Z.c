/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbyAtmosMAT@@UEBAJPEBG@Z @ 0x180126A80
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18000AC40 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 */

__int64 __fastcall CSpatialAudioDolbyAtmosMAT::GetTechnologyLicenseResult(
        CSpatialAudioDolbyAtmosMAT *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_18019D9F0 )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(v3, a2, 1, 0LL);
  return result;
}
