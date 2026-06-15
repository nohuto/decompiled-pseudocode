/*
 * XREFs of ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004C230
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualGUID(const struct _GUID *a1, const struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&a2->Data1 )
    v2 = *(_QWORD *)a1->Data4 - *(_QWORD *)a2->Data4;
  return v2 == 0;
}
