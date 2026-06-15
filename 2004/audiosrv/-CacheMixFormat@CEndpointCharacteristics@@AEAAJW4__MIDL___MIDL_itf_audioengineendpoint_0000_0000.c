/*
 * XREFs of ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18004AEB4
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049A40 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18004C3B4 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C418 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheMixFormat(
        CEndpointCharacteristics *this,
        int a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  GUID *DefaultConnectorProcessingModeInternal; // rax
  __int64 v10; // rcx
  struct _GUID v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  const struct tWAVEFORMATEX *v17; // [rsp+30h] [rbp-40h]
  struct _GUID v18; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v19; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v17 = 0LL;
  v16 = 0LL;
  if ( a2 == 1 )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      v15 = 8086LL;
      goto LABEL_14;
    }
    v17 = a4;
    LOWORD(v16) = 65;
    DWORD2(v16) = a4->cbSize + 18;
  }
  v18 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v18, a2 == 3, &v19);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    v15 = 8095LL;
    goto LABEL_14;
  }
  ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
                                         *((_QWORD *)this + 5),
                                         &v19,
                                         &v16);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    v15 = 8097LL;
    goto LABEL_14;
  }
  DefaultConnectorProcessingModeInternal = CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                             this,
                                             &v18,
                                             a2,
                                             0);
  v10 = *(_QWORD *)&a3->Data1;
  v11 = *DefaultConnectorProcessingModeInternal;
  v12 = *(_QWORD *)&DefaultConnectorProcessingModeInternal->Data1;
  v18 = v11;
  v13 = v10 - v12;
  if ( !v13 )
    v13 = *(_QWORD *)a3->Data4 - *(_QWORD *)v18.Data4;
  if ( v13 )
    return 0LL;
  ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**((_QWORD **)this + 5)
                                                                                                 + 48LL))(
                                         *((_QWORD *)this + 5),
                                         &PKEY_AudioEngine_MixFormat,
                                         &v16);
  if ( ProcessingModeSpecificMixFormatKey >= 0 )
    return 0LL;
  v15 = 8105LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificMixFormatKey,
    v16);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
