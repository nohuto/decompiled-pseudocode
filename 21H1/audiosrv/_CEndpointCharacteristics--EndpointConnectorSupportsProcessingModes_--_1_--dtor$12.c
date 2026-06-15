/*
 * XREFs of _CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor$12 @ 0x180078DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119B34 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~4u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 32));
  }
}
