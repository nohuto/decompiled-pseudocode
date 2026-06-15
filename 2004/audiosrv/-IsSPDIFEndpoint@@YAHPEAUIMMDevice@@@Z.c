/*
 * XREFs of ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DD078
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800DBE34 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsSPDIFEndpoint(struct IMMDevice *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  BOOL v5; // eax
  BOOL v6; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = 0;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v9);
  if ( v3 < 0 )
    goto LABEL_5;
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &PKEY_AudioEndpoint_FormFactor,
         pvar);
  if ( v3 < 0 )
    goto LABEL_5;
  if ( LOWORD(pvar[0]) != 19 )
  {
    v3 = -2147467259;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("IsSPDIFEndpoint", 5196, v3);
    goto LABEL_6;
  }
  if ( LOWORD(pvar[1]) == 8 || LOWORD(pvar[1]) == 7 )
    goto LABEL_20;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
  }
  v5 = EndpointRequiresAC97VistaShim(a1);
  v6 = v5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, v5);
  }
  if ( v6 )
LABEL_20:
    v2 = 1;
LABEL_6:
  PropVariantClear(pvar);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v2;
}
