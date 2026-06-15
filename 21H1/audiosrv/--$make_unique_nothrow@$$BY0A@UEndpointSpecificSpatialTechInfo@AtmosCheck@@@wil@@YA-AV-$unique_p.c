/*
 * XREFs of ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x18006069C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18006033C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x1801373E0 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137588 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ??0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180068658 (--0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 */

AtmosCheck::EndpointSpecificSpatialTechInfo **__fastcall wil::make_unique_nothrow<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>(
        AtmosCheck::EndpointSpecificSpatialTechInfo **a1)
{
  AtmosCheck::EndpointSpecificSpatialTechInfo *v2; // rax
  AtmosCheck::EndpointSpecificSpatialTechInfo *v3; // rbx
  __int64 v4; // rsi
  AtmosCheck::EndpointSpecificSpatialTechInfo *v5; // rbp
  AtmosCheck::EndpointSpecificSpatialTechInfo **result; // rax

  v2 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)operator new[](
                                                        0x90uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x90uLL);
    v4 = 6LL;
    v5 = v3;
    do
    {
      AtmosCheck::EndpointSpecificSpatialTechInfo::EndpointSpecificSpatialTechInfo(v5);
      v5 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)v5 + 24);
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v3 = 0LL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
