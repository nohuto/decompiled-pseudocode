/*
 * XREFs of _lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator() @ 0x1800728B4
 * Callers:
 *     wil::details::lambda_call__lambda_7a4aa03cdf3c75c0f652933ca8714d6d___::_lambda_call__lambda_7a4aa03cdf3c75c0f652933ca8714d6d___ @ 0x180072894 (wil--details--lambda_call__lambda_7a4aa03cdf3c75c0f652933ca8714d6d___--_lambda_call__lambda_7a4a.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180048CA0 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CB34 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011FCDC (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator()(__int64 a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         *(const unsigned __int16 ***)a1,
         **(const struct SpatialAudioSettings ***)(a1 + 8),
         **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8826LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              *(const unsigned __int16 ***)a1,
              0,
              eHostProcessConnector,
              **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8827LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
  if ( **(_DWORD **)(a1 + 24) )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           *(CEndpointCharacteristics **)a1,
           **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        8832LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)a1, 0);
}
