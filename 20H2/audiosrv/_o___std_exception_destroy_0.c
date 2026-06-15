/*
 * XREFs of _o___std_exception_destroy_0 @ 0x18006AC2E
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180021F80 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023510 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058790 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x1800B4788 (--1ResultException@wil@@UEAA@XZ.c)
 *     ??_Glogic_error@std@@UEAAPEAXI@Z @ 0x1800B4810 (--_Glogic_error@std@@UEAAPEAXI@Z.c)
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall o___std_exception_destroy_0(__int64 a1)
{
  return __std_exception_destroy(a1);
}
