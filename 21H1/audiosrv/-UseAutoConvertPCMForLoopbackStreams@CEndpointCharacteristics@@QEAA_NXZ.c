/*
 * XREFs of ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x1801207A4
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019920 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012BA0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(CEndpointCharacteristics *this)
{
  char v1; // bl
  void *v2; // rcx
  void *v3; // rcx
  struct _GUID v5; // [rsp+20h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h]
  struct tWAVEFORMATEX *v7; // [rsp+38h] [rbp-18h] BYREF
  char v8; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  pv = 0LL;
  p_pv = &pv;
  v7 = 0LL;
  v1 = 1;
  v8 = 1;
  v5 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( (int)CEndpointCharacteristics::TryGetOverridingMixFormat(this, eHostProcessConnector, &v5, &v7) < 0 || !pv )
    v1 = 0;
  if ( v8 )
  {
    v2 = *p_pv;
    *p_pv = v7;
    if ( v2 )
      CoTaskMemFree(v2);
  }
  v3 = pv;
  pv = 0LL;
  if ( v3 )
    CoTaskMemFree(v3);
  return v1;
}
