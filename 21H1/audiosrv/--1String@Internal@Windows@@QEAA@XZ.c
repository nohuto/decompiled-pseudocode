/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x180135638
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$15 @ 0x180076842 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$15.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$20 @ 0x180076866 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$20.c)
 *     _ProcessSpatialAudioFormatElement_::_1_::dtor$4 @ 0x180137B91 (_ProcessSpatialAudioFormatElement_--_1_--dtor$4.c)
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
