/*
 * XREFs of ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A350
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180054890 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180059BBC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005A588 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CAudioSignalProcessingModeArray *a5)
{
  HRESULT v6; // edi
  HRESULT (__stdcall *GetValue)(IPropertyStore *, const PROPERTYKEY *const, PROPVARIANT *); // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  GUID pclsid; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0LL;
  v6 = 0;
  GetValue = a2->lpVtbl->GetValue;
  *(_OWORD *)pvar = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))GetValue)(a2, a3, pvar) >= 0
    && LOWORD(pvar[0]) == 4127
    && LODWORD(pvar[1]) )
  {
    v9 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v12 + 8 * v9), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4 )
        goto LABEL_16;
      v10 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v10 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v10 )
      {
LABEL_16:
        v6 = CAudioSignalProcessingModeArray::AddMultiple(a5, 1u, &pclsid);
        if ( v6 < 0 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < LODWORD(pvar[1]) );
  }
  PropVariantClear(pvar);
  return (unsigned int)v6;
}
