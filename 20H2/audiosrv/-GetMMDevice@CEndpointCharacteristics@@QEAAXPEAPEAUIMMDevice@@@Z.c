/*
 * XREFs of ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x180046538
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180070028 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::GetMMDevice(CEndpointCharacteristics *this, struct IMMDevice **a2)
{
  struct IMMDevice *v2; // rcx

  v2 = (struct IMMDevice *)*((_QWORD *)this + 2);
  *a2 = v2;
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
}
