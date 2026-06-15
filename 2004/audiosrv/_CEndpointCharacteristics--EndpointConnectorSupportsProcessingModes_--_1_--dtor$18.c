/*
 * XREFs of _CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor$18 @ 0x180078F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180119BF4 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~8u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 32));
  }
}
