/*
 * XREFs of _CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor$6 @ 0x180078DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 32));
  }
}
