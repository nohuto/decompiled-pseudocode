/*
 * XREFs of ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x180136D64
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180136288 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180136978 (-IsLicenseValidForSubtype@AtmosCheck@@AEAAXPEBG0PEAUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137238 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x1801378DC (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::MapSubtypeToCommonTechIndex(AtmosCheck *this, const unsigned __int16 *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  LPCWCH *i; // rsi

  v2 = -1;
  v3 = 0;
  if ( a2 )
  {
    for ( i = (LPCWCH *)((char *)this + 280); CompareStringOrdinal(a2, -1, *i, -1, 1) != 2; i += 4 )
    {
      if ( ++v3 >= 6 )
        return v2;
    }
    return v3;
  }
  return v2;
}
