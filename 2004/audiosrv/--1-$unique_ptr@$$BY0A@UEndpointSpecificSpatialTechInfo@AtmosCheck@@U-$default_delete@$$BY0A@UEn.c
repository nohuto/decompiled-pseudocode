/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@QEAA@XZ @ 0x180135070
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18006043C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$3 @ 0x18007683C (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$3.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$0 @ 0x18007CD44 (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$1 @ 0x180137224 (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$1.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$1 @ 0x18013735D (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>::~unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
