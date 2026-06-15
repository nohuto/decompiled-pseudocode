/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x180134658
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$15 @ 0x180075E82 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$15.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$20 @ 0x180075EA6 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$20.c)
 *     _ProcessSpatialAudioFormatElement_::_1_::dtor$4 @ 0x180136BB1 (_ProcessSpatialAudioFormatElement_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
