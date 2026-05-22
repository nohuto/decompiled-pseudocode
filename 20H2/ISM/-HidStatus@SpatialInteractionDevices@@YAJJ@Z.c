/*
 * XREFs of ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800CBB80
 * Callers:
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x1800C714C (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x1800C72B8 (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800C7490 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800C762C (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800CB968 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x1800CBAD8 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CBE80 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C5188 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInteractionDevices::HidStatus(SpatialInteractionDevices *this)
{
  unsigned int v1; // ebx
  const wchar_t *v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rsi
  ICreateErrorInfo *pperrinfo; // [rsp+20h] [rbp-59h] BYREF
  IErrorInfo *perrinfo; // [rsp+28h] [rbp-51h] BYREF
  wchar_t v9[64]; // [rsp+30h] [rbp-49h] BYREF

  v1 = (unsigned int)this;
  if ( (int)this < 0 )
  {
    pperrinfo = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&pperrinfo);
    if ( CreateErrorInfo(&pperrinfo) < 0 )
    {
LABEL_50:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&pperrinfo);
      return v1;
    }
    memset_0(v9, 0, sizeof(v9));
    if ( (int)v1 > -1072627703 )
    {
      switch ( v1 )
      {
        case 0xC011000A:
          v2 = L"HIDP_STATUS_INCOMPATIBLE_REPORT_ID";
          goto LABEL_41;
        case 0xC011000B:
          v2 = L"HIDP_STATUS_NOT_VALUE_ARRAY";
          goto LABEL_41;
        case 0xC011000C:
          v2 = L"HIDP_STATUS_IS_VALUE_ARRAY";
          goto LABEL_41;
        case 0xC011000D:
          v2 = L"HIDP_STATUS_DATA_INDEX_NOT_FOUND";
          goto LABEL_41;
        case 0xC011000E:
          v2 = L"HIDP_STATUS_DATA_INDEX_OUT_OF_RANGE";
          goto LABEL_41;
        case 0xC011000F:
          v2 = L"HIDP_STATUS_BUTTON_NOT_PRESSED";
          goto LABEL_41;
        case 0xC0110010:
          v2 = L"HIDP_STATUS_REPORT_DOES_NOT_EXIST";
          goto LABEL_41;
        case 0xC0110020:
          v2 = L"HIDP_STATUS_NOT_IMPLEMENTED";
          goto LABEL_41;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 0xC0110009:
          v2 = L"HIDP_STATUS_I8042_TRANS_UNKNOWN";
          goto LABEL_41;
        case 0x80110001:
          v2 = L"HIDP_STATUS_NULL";
          goto LABEL_41;
        case 0xC0110001:
          v2 = L"HIDP_STATUS_INVALID_PREPARSED_DATA";
          goto LABEL_41;
        case 0xC0110002:
          v2 = L"HIDP_STATUS_INVALID_REPORT_TYPE";
          goto LABEL_41;
        case 0xC0110003:
          v2 = L"HIDP_STATUS_INVALID_REPORT_LENGTH";
          goto LABEL_41;
        case 0xC0110004:
          v2 = L"HIDP_STATUS_USAGE_NOT_FOUND";
          goto LABEL_41;
        case 0xC0110005:
          v2 = L"HIDP_STATUS_VALUE_OUT_OF_RANGE";
          goto LABEL_41;
        case 0xC0110006:
          v2 = L"HIDP_STATUS_BAD_LOG_PHY_VALUES";
          goto LABEL_41;
        case 0xC0110007:
          v2 = L"HIDP_STATUS_BUFFER_TOO_SMALL";
          goto LABEL_41;
        case 0xC0110008:
          v2 = L"HIDP_STATUS_INTERNAL_ERROR";
LABEL_41:
          _o_wcscpy_s(v9, 64LL, v2);
LABEL_42:
          v3 = -1LL;
          do
            ++v3;
          while ( v9[v3] );
          v4 = v3 + 1;
          v5 = CoTaskMemAlloc(2 * v4);
          _o_wcscpy_s(v5, v4, v9);
          perrinfo = 0LL;
          if ( v5 )
          {
            if ( ((int (__fastcall *)(ICreateErrorInfo *, void *))pperrinfo->lpVtbl->SetDescription)(pperrinfo, v5) >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&perrinfo);
              if ( ((__int64 (__fastcall *)(ICreateErrorInfo *, GUID *, IErrorInfo **))pperrinfo->lpVtbl->QueryInterface)(
                     pperrinfo,
                     &GUID_1cf2b120_547d_101b_8e65_08002b2bd119,
                     &perrinfo) >= 0 )
                SetErrorInfo(0, perrinfo);
            }
            CoTaskMemFree(v5);
          }
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&perrinfo);
          goto LABEL_50;
      }
    }
    swprintf_s<64>(v9, L"Initial Error: 0x%08x", v1);
    goto LABEL_42;
  }
  return v1;
}
