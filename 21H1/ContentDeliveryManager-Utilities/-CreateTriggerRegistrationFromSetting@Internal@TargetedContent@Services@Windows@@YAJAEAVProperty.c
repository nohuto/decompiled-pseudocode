/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074400
 * Callers:
 *     _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180076514 (_lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180079210 (std--_Func_impl_std--_Callable_obj__lambda_a229ec049bd8949c08ad0e1605aaf705__0__std_ea_180079210.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180060600 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x18006EF98 (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180072858 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074210 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800769C8 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180077114 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180077FE8 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  int v3; // esi
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  char StringValue; // al
  wil::details::in1diag3 *v9; // rcx
  HSTRING *v10; // r9
  char v11; // al
  wil::details::in1diag3 *v12; // rcx
  HSTRING *v13; // r9
  HSTRING *v14; // r9
  HSTRING *v15; // r9
  char v16; // al
  wil::details::in1diag3 *v17; // rcx
  const WCHAR *StringRawBuffer; // rax
  int v19; // ecx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  HSTRING *v22; // r9
  char v23; // al
  struct CreativeFramework::Triggers::PropertySetHelper *v24; // rbx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  HSTRING *v27; // r9
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  HSTRING *v30; // r9
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  HSTRING *v33; // r9
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  HSTRING *v36; // r9
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  HSTRING *v39; // r9
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  int HasKey; // eax
  int v45; // eax
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  wil::details::in1diag3 *v51; // rcx
  int v52; // eax
  wil::details::in1diag3 *v53; // rcx
  int Int32; // eax
  wil::details::in1diag3 *v55; // rcx
  int v56; // eax
  wil::details::in1diag3 *v57; // rcx
  int v58; // eax
  wil::details::in1diag3 *v59; // rcx
  int v60; // eax
  wil::details::in1diag3 *v61; // rcx
  unsigned __int64 v62; // r9
  __int64 v63; // rdx
  int v64; // eax
  int v65; // eax
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  wil::details::in1diag3 *v71; // rcx
  int v72; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v73; // r8
  wil::details::in1diag3 *v74; // rcx
  int TriggerStateTransitionsFromSetting; // eax
  wil::details::in1diag3 *v76; // rcx
  int v77; // eax
  wil::details::in1diag3 *v78; // rcx
  int v79; // eax
  wil::details::in1diag3 *v80; // rcx
  const char *v81; // r9
  __int64 result; // rax
  HSTRING v83; // [rsp+40h] [rbp-88h] BYREF
  HSTRING string; // [rsp+48h] [rbp-80h] BYREF
  HSTRING v85; // [rsp+50h] [rbp-78h] BYREF
  HSTRING v86; // [rsp+58h] [rbp-70h] BYREF
  HSTRING v87; // [rsp+60h] [rbp-68h] BYREF
  HSTRING v88; // [rsp+68h] [rbp-60h] BYREF
  HSTRING v89; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v90; // [rsp+78h] [rbp-50h] BYREF
  struct CreativeFramework::Triggers::PropertySetHelper *v91; // [rsp+80h] [rbp-48h] BYREF
  __int64 v92; // [rsp+88h] [rbp-40h] BYREF
  _QWORD v93[7]; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v95; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v96; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v97; // [rsp+E8h] [rbp+20h] BYREF

  v93[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  v89 = 0LL;
  try
  {
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
           (const wchar_t *)&v89,
           v6) )
    {
      WindowsDeleteString(0LL);
      v88 = 0LL;
      StringValue = Windows::Services::TargetedContent::Internal::GetStringValue(
                      this,
                      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
                      (const wchar_t *)&v88,
                      v7);
      v9 = retaddr;
      if ( StringValue )
      {
        WindowsDeleteString(0LL);
        v87 = 0LL;
        v11 = Windows::Services::TargetedContent::Internal::GetStringValue(
                this,
                (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
                (const wchar_t *)&v87,
                v10);
        v12 = retaddr;
        if ( v11 )
        {
          WindowsDeleteString(0LL);
          v86 = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
            (const wchar_t *)&v86,
            v13);
          WindowsDeleteString(0LL);
          v85 = 0LL;
          Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
            (const wchar_t *)&v85,
            v14);
          WindowsDeleteString(0LL);
          string = 0LL;
          v16 = Windows::Services::TargetedContent::Internal::GetStringValue(
                  this,
                  (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
                  (const wchar_t *)&string,
                  v15);
          v17 = retaddr;
          if ( v16 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v19 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(StringRawBuffer);
            v91 = 0LL;
            v20 = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
                    v19,
                    v89,
                    v88,
                    v87,
                    v86,
                    v85,
                    &v91);
            v21 = retaddr;
            if ( v20 >= 0 )
            {
              WindowsDeleteString(0LL);
              v83 = 0LL;
              v23 = Windows::Services::TargetedContent::Internal::GetStringValue(
                      this,
                      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
                      (const wchar_t *)&v83,
                      v22);
              v24 = v91;
              if ( !v23
                || (v25 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v91 + 72LL))(
                            v91,
                            v83),
                    v26 = retaddr,
                    v25 >= 0) )
              {
                WindowsDeleteString(v83);
                v83 = 0LL;
                if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                        this,
                        (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
                        (const wchar_t *)&v83,
                        v27)
                  || (v28 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v24 + 104LL))(
                              v24,
                              v83),
                      v29 = retaddr,
                      v28 >= 0) )
                {
                  WindowsDeleteString(v83);
                  v83 = 0LL;
                  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                          this,
                          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
                          (const wchar_t *)&v83,
                          v30)
                    || (v31 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v24 + 152LL))(
                                v24,
                                v83),
                        v32 = retaddr,
                        v31 >= 0) )
                  {
                    WindowsDeleteString(v83);
                    v83 = 0LL;
                    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                            this,
                            (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
                            (const wchar_t *)&v83,
                            v33)
                      || (v34 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v24 + 216LL))(
                                  v24,
                                  v83),
                          v35 = retaddr,
                          v34 >= 0) )
                    {
                      WindowsDeleteString(v83);
                      v83 = 0LL;
                      if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                              this,
                              (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
                              (const wchar_t *)&v83,
                              v36)
                        || (v37 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v24 + 232LL))(
                                    v24,
                                    v83),
                            v38 = retaddr,
                            v37 >= 0) )
                      {
                        WindowsDeleteString(v83);
                        v83 = 0LL;
                        if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
                                this,
                                (struct CreativeFramework::Triggers::PropertySetHelper *)L"scoreName",
                                (const wchar_t *)&v83,
                                v39)
                          || (v40 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v24 + 296LL))(
                                      v24,
                                      v83),
                              v41 = retaddr,
                              v40 >= 0) )
                        {
                          v3 = *((_DWORD *)this + 4);
                          if ( v3 < 0 )
                          {
                            v42 = (unsigned int)v3;
                            v43 = 361LL;
LABEL_21:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v43,
                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                              (const char *)v42);
                            goto LABEL_35;
                          }
                          HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                                     this,
                                     L"delay",
                                     &v95);
                          v3 = HasKey;
                          if ( HasKey < 0 )
                          {
                            v42 = (unsigned int)HasKey;
                            v43 = 366LL;
                            goto LABEL_21;
                          }
                          if ( (_BYTE)v95 )
                          {
                            v95 = 0LL;
                            v45 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                                    this,
                                    L"delay",
                                    &v95);
                            v3 = v45;
                            if ( v45 < 0 )
                            {
                              v46 = (unsigned int)v45;
                              v47 = 376LL;
                              goto LABEL_27;
                            }
                            v49 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v95 + 104LL))(v95, &v92);
                            v3 = v49;
                            if ( v49 < 0 )
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x69,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                                (const char *)(unsigned int)v49);
                              v46 = (unsigned int)v3;
                              v47 = 377LL;
LABEL_27:
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)v47,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                                (const char *)v46);
                              v48 = v95;
                              if ( v95 )
                              {
                                v95 = 0LL;
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                              }
LABEL_35:
                              v51 = retaddr;
                              if ( v3 >= 0 )
                              {
                                v52 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64))(*(_QWORD *)v24 + 248LL))(
                                        v24,
                                        v92);
                                v53 = retaddr;
                                if ( v52 >= 0 )
                                {
                                  Int32 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                            this,
                                            L"options",
                                            &v96);
                                  v55 = retaddr;
                                  if ( Int32 >= 0 )
                                  {
                                    v56 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v24 + 264LL))(
                                            v24,
                                            v96);
                                    v57 = retaddr;
                                    if ( v56 >= 0 )
                                    {
                                      v58 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                              this,
                                              L"predicateKind",
                                              &v97);
                                      v59 = retaddr;
                                      if ( v58 >= 0 )
                                      {
                                        v60 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v24 + 120LL))(
                                                v24,
                                                v97);
                                        v61 = retaddr;
                                        if ( v60 >= 0 )
                                        {
                                          v3 = *((_DWORD *)this + 4);
                                          if ( v3 < 0 )
                                          {
                                            v62 = (unsigned int)v3;
                                            v63 = 361LL;
LABEL_43:
                                            wil::details::in1diag3::Return_Hr(
                                              retaddr,
                                              (void *)v63,
                                              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                                              (const char *)v62);
                                            goto LABEL_57;
                                          }
                                          v64 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                                                  this,
                                                  L"scoreValue",
                                                  &v95);
                                          v3 = v64;
                                          if ( v64 < 0 )
                                          {
                                            v62 = (unsigned int)v64;
                                            v63 = 366LL;
                                            goto LABEL_43;
                                          }
                                          if ( (_BYTE)v95 )
                                          {
                                            v95 = 0LL;
                                            v65 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                                                    this,
                                                    L"scoreValue",
                                                    &v95);
                                            v3 = v65;
                                            if ( v65 < 0 )
                                            {
                                              v66 = (unsigned int)v65;
                                              v67 = 376LL;
                                              goto LABEL_49;
                                            }
                                            v69 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v95 + 128LL))(
                                                    v95,
                                                    v93);
                                            v3 = v69;
                                            if ( v69 < 0 )
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x77,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                                                (const char *)(unsigned int)v69);
                                              v66 = (unsigned int)v3;
                                              v67 = 377LL;
LABEL_49:
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)v67,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
                                                (const char *)v66);
                                              v68 = v95;
                                              if ( v95 )
                                              {
                                                v95 = 0LL;
                                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
                                              }
LABEL_57:
                                              v71 = retaddr;
                                              if ( v3 >= 0 )
                                              {
                                                v72 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v24 + 312LL))(v24);
                                                v74 = retaddr;
                                                if ( v72 >= 0 )
                                                {
                                                  TriggerStateTransitionsFromSetting = Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
                                                                                         this,
                                                                                         v24,
                                                                                         v73);
                                                  v76 = retaddr;
                                                  if ( TriggerStateTransitionsFromSetting >= 0 )
                                                  {
                                                    v77 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                                                            this,
                                                            L"conditionFlags",
                                                            &v90);
                                                    v78 = retaddr;
                                                    if ( v77 >= 0 )
                                                    {
                                                      v79 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v24 + 280LL))(
                                                              v24,
                                                              v90);
                                                      v80 = retaddr;
                                                      if ( v79 >= 0 )
                                                      {
                                                        *(_QWORD *)a2 = v24;
                                                        WindowsDeleteString(v83);
                                                        v83 = 0LL;
                                                        WindowsDeleteString(string);
                                                        string = 0LL;
                                                        WindowsDeleteString(v85);
                                                        v85 = 0LL;
                                                        WindowsDeleteString(v86);
                                                        v86 = 0LL;
                                                        WindowsDeleteString(v87);
                                                        v87 = 0LL;
                                                        WindowsDeleteString(v88);
                                                        v88 = 0LL;
                                                        WindowsDeleteString(v89);
                                                        return 0LL;
                                                      }
LABEL_84:
                                                      wil::details::in1diag3::Throw_Hr(
                                                        v80,
                                                        (void *)0x1A3,
                                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\"
                                                                 "triggermanager\\triggermanagersettings.cpp",
                                                        (const char *)(unsigned int)v79);
                                                      JUMPOUT(0x180074E64LL);
                                                    }
LABEL_83:
                                                    wil::details::in1diag3::Throw_Hr(
                                                      v78,
                                                      (void *)0x1A2,
                                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\t"
                                                               "riggermanager\\triggermanagersettings.cpp",
                                                      (const char *)(unsigned int)v77);
                                                    goto LABEL_84;
                                                  }
LABEL_82:
                                                  wil::details::in1diag3::Throw_Hr(
                                                    v76,
                                                    (void *)0x19F,
                                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\tri"
                                                             "ggermanager\\triggermanagersettings.cpp",
                                                    (const char *)(unsigned int)TriggerStateTransitionsFromSetting);
                                                  goto LABEL_83;
                                                }
LABEL_81:
                                                wil::details::in1diag3::Throw_Hr(
                                                  v74,
                                                  (void *)0x19D,
                                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigg"
                                                           "ermanager\\triggermanagersettings.cpp",
                                                  (const char *)(unsigned int)v72);
                                                goto LABEL_82;
                                              }
LABEL_80:
                                              wil::details::in1diag3::Throw_Hr(
                                                v71,
                                                (void *)0x19C,
                                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\trigger"
                                                         "manager\\triggermanagersettings.cpp",
                                                (const char *)(unsigned int)v3);
                                              goto LABEL_81;
                                            }
                                            v70 = v95;
                                            if ( v95 )
                                            {
                                              v95 = 0LL;
                                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                                            }
                                          }
                                          else
                                          {
                                            v93[0] = 0LL;
                                          }
                                          v3 = 0;
                                          goto LABEL_57;
                                        }
LABEL_79:
                                        wil::details::in1diag3::Throw_Hr(
                                          v61,
                                          (void *)0x199,
                                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanage"
                                                   "r\\triggermanagersettings.cpp",
                                          (const char *)(unsigned int)v60);
                                        goto LABEL_80;
                                      }
LABEL_78:
                                      wil::details::in1diag3::Throw_Hr(
                                        v59,
                                        (void *)0x198,
                                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\"
                                                 "triggermanagersettings.cpp",
                                        (const char *)(unsigned int)v58);
                                      goto LABEL_79;
                                    }
LABEL_77:
                                    wil::details::in1diag3::Throw_Hr(
                                      v57,
                                      (void *)0x195,
                                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\t"
                                               "riggermanagersettings.cpp",
                                      (const char *)(unsigned int)v56);
                                    goto LABEL_78;
                                  }
LABEL_76:
                                  wil::details::in1diag3::Throw_Hr(
                                    v55,
                                    (void *)0x194,
                                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\tri"
                                             "ggermanagersettings.cpp",
                                    (const char *)(unsigned int)Int32);
                                  goto LABEL_77;
                                }
LABEL_75:
                                wil::details::in1diag3::Throw_Hr(
                                  v53,
                                  (void *)0x191,
                                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigg"
                                           "ermanagersettings.cpp",
                                  (const char *)(unsigned int)v52);
                                goto LABEL_76;
                              }
LABEL_74:
                              wil::details::in1diag3::Throw_Hr(
                                v51,
                                (void *)0x190,
                                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\trigger"
                                         "managersettings.cpp",
                                (const char *)(unsigned int)v3);
                              goto LABEL_75;
                            }
                            v50 = v95;
                            if ( v95 )
                            {
                              v95 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
                            }
                          }
                          else
                          {
                            v92 = 0LL;
                          }
                          v3 = 0;
                          goto LABEL_35;
                        }
LABEL_73:
                        wil::details::in1diag3::Throw_Hr(
                          v41,
                          (void *)0x18C,
                          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                          (const char *)(unsigned int)v40);
                        goto LABEL_74;
                      }
LABEL_72:
                      wil::details::in1diag3::Throw_Hr(
                        v38,
                        (void *)0x188,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        (const char *)(unsigned int)v37);
                      goto LABEL_73;
                    }
LABEL_71:
                    wil::details::in1diag3::Throw_Hr(
                      v35,
                      (void *)0x184,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                      (const char *)(unsigned int)v34);
                    goto LABEL_72;
                  }
LABEL_70:
                  wil::details::in1diag3::Throw_Hr(
                    v32,
                    (void *)0x180,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                    (const char *)(unsigned int)v31);
                  goto LABEL_71;
                }
LABEL_69:
                wil::details::in1diag3::Throw_Hr(
                  v29,
                  (void *)0x17C,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                  (const char *)(unsigned int)v28);
                goto LABEL_70;
              }
LABEL_68:
              wil::details::in1diag3::Throw_Hr(
                v26,
                (void *)0x178,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                (const char *)(unsigned int)v25);
              goto LABEL_69;
            }
LABEL_67:
            wil::details::in1diag3::Throw_Hr(
              v21,
              (void *)0x173,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v20);
            goto LABEL_68;
          }
LABEL_66:
          wil::details::in1diag3::Throw_Hr(
            v17,
            (void *)0x170,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)0x80070490LL);
          goto LABEL_67;
        }
LABEL_65:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x16A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)0x80070490LL);
        goto LABEL_66;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x166,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x168,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_65;
  }
  catch ( ... )
  {
    LODWORD(v95) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1A8,
                     (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v81);
    return (unsigned int)v95;
  }
  return result;
}
