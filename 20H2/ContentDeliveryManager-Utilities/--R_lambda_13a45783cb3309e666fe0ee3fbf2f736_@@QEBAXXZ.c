/*
 * XREFs of ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E254
 * Callers:
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@@details@wil@@UEAAJXZ @ 0x18001EA40 (-Run@-$functor_wrapper_void@AEAV_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@@details@wil@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001BF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000DAA4 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DC54 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DD54 (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18000DE7C (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 *     ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x18000E060 (-IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017598 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x180017C50 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180018878 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _lambda_13a45783cb3309e666fe0ee3fbf2f736_::operator()(_DWORD *a1)
{
  LSTATUS ValueW; // eax
  unsigned __int64 v3; // rcx
  Mobility::Pinning *v4; // rcx
  Mobility::Pinning *v5; // rcx
  HRESULT Instance; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, HSTRING, int); // r14
  HRESULT v14; // eax
  HSTRING v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  DWORD v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  const struct _tlgProvider_t *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  LSTATUS v28; // eax
  signed int v29; // ebx
  int ppv; // [rsp+28h] [rbp-59h]
  _BYTE v31[8]; // [rsp+48h] [rbp-39h] BYREF
  DWORD pdwValue[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 Data; // [rsp+58h] [rbp-29h] BYREF
  __int64 v34; // [rsp+60h] [rbp-21h] BYREF
  LPVOID v35[2]; // [rsp+68h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-9h] BYREF
  HSTRING string; // [rsp+90h] [rbp+Fh] BYREF
  _BYTE v38[32]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v35[1] = (LPVOID)-2LL;
  pdwValue[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"YourPhoneAppTaskbarIconCreated",
             0x20000010u,
             0LL,
             &Data,
             pdwValue);
  v3 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v3 = (unsigned int)ValueW;
  if ( ((v3 & 0x80000000) != 0LL || !(_DWORD)Data)
    && !Mobility::Policy::isTaskbarIconCreationBlockedByPolicy((Mobility::Policy *)v3) )
  {
    pdwValue[0] = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", pdwValue);
    if ( pdwValue[0] >= 2
      && Mobility::Pinning::IsSystemProductValidForTaskbarIcon(v4)
      && ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual(&`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl)
       || !Mobility::Pinning::IsInRestrictedRegion(v5))
      && *a1 != 2
      && a1[1] != 2
      && (*a1 == 1 || a1[1] == 1 || a1[2] == 1) )
    {
      v35[0] = 0LL;
      Instance = CoCreateInstance(
                   &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
                   0LL,
                   0x404u,
                   &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
                   v35);
      v7 = retaddr;
      if ( Instance < 0 )
      {
LABEL_46:
        wil::details::in1diag3::Throw_Hr(
          v7,
          (void *)0x9C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)Instance);
LABEL_47:
        wil::details::in1diag3::Throw_Hr(
          v10,
          (void *)0x9F,
          (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v34 = 0LL;
      v8 = *(_QWORD *)v35[0];
      v34 = 0LL;
      v9 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v8 + 96))(
             v35[0],
             &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
             &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
             &v34);
      v10 = retaddr;
      if ( v9 < 0 )
        goto LABEL_47;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v34 + 96LL))(v34, v31);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA2,
          (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      if ( v31[0] )
      {
        v12 = v34;
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, HSTRING, int))(*(_QWORD *)v34 + 48LL);
        string = 0LL;
        v14 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
        if ( v14 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
        }
        else
        {
          v15 = string;
          v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v38, off_1800E9E60);
          LOBYTE(ppv) = 1;
          LOBYTE(v17) = 1;
          v18 = v13(v12, *(_QWORD *)(v16 + 24), v17, v15, ppv);
          v19 = retaddr;
          if ( v18 >= 0 )
          {
            pdwValue[0] = 0;
            v20 = 0;
            if ( *a1 == 1 )
            {
              pdwValue[0] = 1;
              v20 = 1;
            }
            if ( a1[1] == 1 )
            {
              v20 |= 2u;
              pdwValue[0] = v20;
            }
            if ( a1[2] == 1 )
              pdwValue[0] = v20 | 4;
            MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(pdwValue);
            LOBYTE(v21) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
              v21,
              0LL);
            LOBYTE(v22) = 1;
            LOBYTE(v23) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
              v23,
              v22);
LABEL_34:
            LODWORD(Data) = 1;
            v28 = RegSetKeyValueW(
                    HKEY_CURRENT_USER,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                    L"YourPhoneAppTaskbarIconCreated",
                    4u,
                    &Data,
                    4u);
            v29 = (unsigned __int16)v28 | 0x80070000;
            if ( v28 <= 0 )
              v29 = v28;
            if ( v29 >= 0 )
              v29 = 0;
            else
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2A,
                (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
                (const char *)(unsigned int)v29);
            if ( v29 >= 0 )
            {
              if ( v34 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              if ( v35[0] )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v35[0] + 16LL))(v35[0]);
              return;
            }
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB9,
              (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
              (const char *)(unsigned int)v29);
            goto LABEL_46;
          }
        }
        wil::details::in1diag3::Throw_Hr(
          v19,
          (void *)0xA9,
          (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
          (const char *)(unsigned int)v18);
        JUMPOUT(0x18000E68ELL);
      }
      v24 = (_DWORD *)*((_QWORD *)TaskbarContentDeliveryPinningTelemetry::Instance() + 1);
      if ( v24 )
      {
        if ( *v24 )
        {
          TaskbarContentDeliveryPinningTelemetry::Instance();
          v25 = TaskbarLogging::Provider();
          if ( *(_DWORD *)v25 > 5u
            && (*((_QWORD *)v25 + 2) & 0x400000000000LL) != 0
            && (*((_QWORD *)v25 + 3) & 0x400000000000LL) == *((_QWORD *)v25 + 3) )
          {
            Data = 0x1000000LL;
            *(_QWORD *)pdwValue = L"Microsoft.YourPhone_8wekyb3d8bbwe!App";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
              (__int64)v25,
              (unsigned __int8 *)dword_18017462C,
              v26,
              v27,
              (const WCHAR **)pdwValue,
              (__int64)&Data);
          }
        }
      }
      goto LABEL_34;
    }
  }
}
