/*
 * XREFs of ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800765D4
 * Callers:
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180076870 (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_::_ApplyX_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_ @ 0x18007BED0 (std--_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_--_ApplyX_bool_std--shared_ptr_Cr.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180033064 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B134 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x180072590 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180073EAC (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800AB414 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B05D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(char *Src, __int64 a2)
{
  unsigned __int64 v3; // r8
  void **v4; // rbx
  __int64 v5; // rdi
  const WCHAR *v6; // rax
  PVOID Reserved1; // rdx
  const WCHAR *v8; // rcx
  int v9; // r14d
  const WCHAR *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HSTRING string; // [rsp+38h] [rbp-99h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  const WCHAR *v16; // [rsp+48h] [rbp-89h] BYREF
  HSTRING v17; // [rsp+50h] [rbp-81h] BYREF
  __int64 v18[3]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19[5]; // [rsp+70h] [rbp-61h] BYREF
  void *v20[2]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v22; // [rsp+B0h] [rbp-21h]
  void *v23[3]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v24; // [rsp+D0h] [rbp-1h]
  HSTRING_HEADER v25; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+1Fh]

  v19[3] = -2LL;
  v19[4] = a2;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  if ( *(_WORD *)Src )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)&Src[2 * v3] );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign(v20, Src, v3);
  CreativeFramework::CommonHelper::StringUtils::SplitString(v19, v20, L"|");
  if ( v22 >= 8 )
    operator delete(v20[0]);
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v4 = (void **)v19[0];
  v5 = v19[1];
  while ( v4 != (void **)v5 )
  {
    v24 = 7LL;
    v23[2] = 0LL;
    LOWORD(v23[0]) = 0;
    std::wstring::assign(v23, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    CreativeFramework::CommonHelper::StringUtils::SplitString(v18, v23, L";");
    v6 = (const WCHAR *)v18[0];
    if ( *(_QWORD *)(v18[0] + 24) >= 8uLL )
      v6 = *(const WCHAR **)v18[0];
    v16 = v6;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v16)[1].Reserved.Reserved1;
    Windows::Services::TargetedContent::Internal::DecodeBase64String(&string, (__int64)Reserved1);
    v26 = 0LL;
    v8 = (const WCHAR *)(v18[0] + 32);
    if ( *(_QWORD *)(v18[0] + 56) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v8);
    v10 = (const WCHAR *)(v18[0] + 64);
    if ( *(_QWORD *)(v18[0] + 88) >= 8uLL )
      v10 = *(const WCHAR **)v10;
    LODWORD(v15) = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(v10);
    LODWORD(v16) = v9;
    v17 = string;
    v11 = *(_QWORD *)(a2 + 24);
    if ( !v11 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, HSTRING *, const WCHAR **, __int64 *))(*(_QWORD *)v11 + 16LL))(
            v11,
            &v17,
            &v16,
            &v15) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      std::vector<std::wstring>::~vector<std::wstring>(v18);
      if ( v24 >= 8 )
        operator delete(v23[0]);
      break;
    }
    WindowsDeleteString(string);
    string = 0LL;
    std::vector<std::wstring>::~vector<std::wstring>(v18);
    if ( v24 >= 8 )
      operator delete(v23[0]);
    v4 += 4;
  }
  std::vector<std::wstring>::~vector<std::wstring>(v19);
  v13 = *(_QWORD *)(a2 + 24);
  if ( v13 )
  {
    LOBYTE(v12) = v13 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
}
