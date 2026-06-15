/*
 * XREFs of ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800489D0
 * Callers:
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18001B8A0 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005BB18 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::FormFactor(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v2 = 10;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &PKEY_AudioEndpoint_FormFactor,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19
    && LOWORD(pvar[1]) < 0xBu )
  {
    v2 = LOWORD(pvar[1]);
  }
  PropVariantClear(pvar);
  return v2;
}
