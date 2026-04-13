/*
 * XREFs of ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180075080
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800755D4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180031C78 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x1800364B8 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ?GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006F708 (-GetStringBytes@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$unique_any_t@.c)
 *     ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18006FE1C (-GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@M.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x1800717F4 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x1800772AC (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800777B0 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x180077A0C (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180077CDC (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AEE3C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  unsigned int i; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  void *v22; // rbx
  HSTRING *Base64StringFromBytes; // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  wchar_t *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  wchar_t *v30; // rax
  __int64 v31; // rcx
  const WCHAR *v32; // r8
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  __int64 v35; // rcx
  int v36[2]; // [rsp+20h] [rbp-198h] BYREF
  int v37; // [rsp+28h] [rbp-190h]
  int v38; // [rsp+2Ch] [rbp-18Ch] BYREF
  __int64 v39; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-180h] BYREF
  HSTRING v41; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-170h] BYREF
  int v43; // [rsp+4Ch] [rbp-16Ch] BYREF
  LPVOID pv; // [rsp+50h] [rbp-168h] BYREF
  HSTRING string[3]; // [rsp+58h] [rbp-160h] BYREF
  int *v46; // [rsp+70h] [rbp-148h] BYREF
  _QWORD v47[14]; // [rsp+78h] [rbp-140h] BYREF
  int v48; // [rsp+E8h] [rbp-D0h]
  int v49; // [rsp+F4h] [rbp-C4h]
  _QWORD v50[13]; // [rsp+F8h] [rbp-C0h] BYREF
  void *v51[3]; // [rsp+160h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+178h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  try
  {
    v37 = 0;
    v39 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64 *))(*(_QWORD *)a2 + 320LL))(
           a2,
           &v39);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1CA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 56LL))(v39, &v42);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        v46 = (int *)&std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
        v37 = 1;
        v50[0] = &std::basic_ostream<unsigned short>::`vftable';
        v49 = 120;
        std::wios::init((std::ios_base *)v50);
        *(_QWORD *)((char *)&v47[-1] + v46[1]) = &std::wostringstream::`vftable';
        *(_DWORD *)((char *)&string[2] + v46[1] + 4) = v46[1] - 136;
        std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(v47);
        v47[0] = &std::basic_stringbuf<unsigned short>::`vftable';
        v47[13] = 0LL;
        v48 = 4;
        for ( i = 0; i < v42; ++i )
        {
          *(_QWORD *)v36 = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v39 + 48LL))(v39, i, v36);
          v9 = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D2,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v8);
            v10 = *(_QWORD *)v36;
            if ( *(_QWORD *)v36 )
            {
              *(_QWORD *)v36 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            std::wostringstream::~wostringstream(v50);
            v50[0] = &std::ios_base::`vftable';
            std::ios_base::_Ios_base_dtor((struct std::ios_base *)v50);
            v12 = v39;
            if ( v39 )
            {
              v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
            return v9;
          }
          v41 = 0LL;
          v14 = *(_QWORD *)v36;
          v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)v36 + 48LL);
          WindowsDeleteString(0LL);
          v41 = 0LL;
          v16 = v15(v14, &v41);
          v17 = retaddr;
          if ( v16 < 0 )
            goto LABEL_33;
          v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v36 + 80LL))(*(_QWORD *)v36, &v38);
          v19 = retaddr;
          if ( v18 < 0 )
            goto LABEL_34;
          v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v36 + 64LL))(*(_QWORD *)v36, &v43);
          v21 = retaddr;
          if ( v20 < 0 )
            goto LABEL_35;
          if ( i )
            std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v46, L"|");
          v40 = 0;
          pv = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringBytes(v41, &pv, &v40);
          v22 = pv;
          Base64StringFromBytes = (HSTRING *)Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(
                                               string,
                                               v40,
                                               (__int64)pv);
          v37 = 5;
          if ( v22 )
            CoTaskMemFree(v22);
          StringRawBuffer = WindowsGetStringRawBuffer(*Base64StringFromBytes, 0LL);
          v25 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v46, StringRawBuffer);
          v26 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v25, L";");
          v27 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v43);
          v28 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v26, v27);
          v29 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v28, L";");
          v30 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(v38);
          std::operator<<<wchar_t,std::char_traits<wchar_t>>(v29, v30);
          v37 = 1;
          WindowsDeleteString(string[0]);
          string[0] = 0LL;
          WindowsDeleteString(v41);
          v41 = 0LL;
          v31 = *(_QWORD *)v36;
          if ( *(_QWORD *)v36 )
          {
            *(_QWORD *)v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
        if ( !v42 )
          goto LABEL_28;
        std::wstringbuf::str(v47, v51);
        v32 = (const WCHAR *)v51;
        if ( v52 >= 8 )
          v32 = (const WCHAR *)v51[0];
        v33 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
                (__int64)this,
                L"StateTransitions",
                v32);
        v34 = retaddr;
        if ( v33 >= 0 )
        {
          if ( v52 >= 8 )
            operator delete(v51[0]);
LABEL_28:
          std::wostringstream::~wostringstream(v50);
          v50[0] = &std::ios_base::`vftable';
          std::ios_base::_Ios_base_dtor((struct std::ios_base *)v50);
          v35 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          }
          return 0LL;
        }
LABEL_36:
        wil::details::in1diag3::Throw_Hr(
          v34,
          (void *)0x1E9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v33);
        JUMPOUT(0x180075596LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1CD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x1D5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v16);
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x1D7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v18);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x1D9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_36;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1ED,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           v11);
  }
  return result;
}
