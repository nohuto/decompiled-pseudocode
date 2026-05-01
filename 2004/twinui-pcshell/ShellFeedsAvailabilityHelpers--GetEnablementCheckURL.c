/*
 * XREFs of ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E17D8
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800E0E78 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008E202 (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1800E0938 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@Z @ 0x1800E0C2C (--$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@-$factory_cache_entry@UGlobalizationPref.c)
 *     ?CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0FF4 (-CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E10FC (-CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228@@@details@wil@@QEAA_NXZ @ 0x1800EDB24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801DA874 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18021F444 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18038073C (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=48
__int64 __fastcall ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(_QWORD *a1, __int64 a2)
{
  _WORD *v4; // rax
  unsigned int v5; // esi
  __int64 v6; // r14
  LSTATUS ValueW; // eax
  __int64 v8; // rcx
  bool v9; // sf
  int v10; // eax
  HSTRING v11; // rbx
  __int64 (__fastcall *v12)(HSTRING, PVOID, __int64 *); // rdi
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, HSTRING *); // rdi
  const WCHAR *v18; // rax
  const WCHAR *StringRawBuffer; // rax
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD Src[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v26[16]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v27; // [rsp+90h] [rbp-70h]
  char v28[16]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  _QWORD hstringHeader[2]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i hstringHeader_16; // [rsp+D0h] [rbp-30h]
  _QWORD v32[4]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR sourceString[1024]; // [rsp+100h] [rbp+0h] BYREF

  v4 = (_WORD *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v4 = *(_WORD **)a2;
  v5 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *v4 = 0;
  std::wstring::wstring((__int64)Src, L"https://api.msn.com/v1/News/Feed/Windows?");
  v6 = -1LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33891228>::GetImpl'::`2'::impl) )
  {
    pcbData = 2048;
    std::wstring::wstring((__int64)v32, &szAgent);
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds\\FeedRepositoryState",
               L"FeedsNextRefreshFeedUrl",
               2u,
               0LL,
               sourceString,
               &pcbData);
    v9 = ValueW < 0;
    if ( ValueW > 0 )
      v9 = 1;
    if ( v9 )
    {
      winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::call<_lambda_dbc7052402afa226f98685aad6dda557_ &>(
        v8,
        &v22);
      StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v22, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2 )
        std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    }
    else
    {
      v22 = 0LL;
      hstringHeader_16.m128i_i64[1] = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        (HSTRING_HEADER *)hstringHeader,
        L"Windows.Foundation.Uri",
        0x17u,
        0x16u);
      v10 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
              hstringHeader_16.m128i_i64[1],
              &v22);
      hstringHeader_16.m128i_i64[1] = 0LL;
      if ( v10 >= 0 )
      {
        v23 = 0LL;
        v11 = v22;
        v12 = *(__int64 (__fastcall **)(HSTRING, PVOID, __int64 *))(*(_QWORD *)v22 + 48LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (HSTRING_HEADER *)hstringHeader,
                sourceString,
                v13);
        v15 = v12(v11, v14[1].Reserved.Reserved1, &v23);
        hstringHeader_16.m128i_i64[1] = 0LL;
        if ( v15 >= 0 )
        {
          string = 0LL;
          v16 = v23;
          v17 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 64LL);
          WindowsDeleteString(0LL);
          string = 0LL;
          if ( v17(v16, &string) >= 0 )
          {
            v18 = WindowsGetStringRawBuffer(string, 0LL);
            if ( CompareStringOrdinal(v18, -1, L"msn.cn", -1, 1) == 2 )
              std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
          }
          WindowsDeleteString(string);
          string = 0LL;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
    std::wstring::_Tidy_deallocate(v32);
  }
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  do
    ++v6;
  while ( *((_WORD *)a1 + v6) );
  std::wstring::append(Src);
  std::wstring::append(Src);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_WORD *)v28 = 0;
  ShellFeedsAvailabilityHelpers::CreateGUID(v28);
  if ( si128.m128i_i64[0] )
  {
    std::wstring::append(Src);
    std::wstring::append(Src);
    hstringHeader_16 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(hstringHeader[0]) = 0;
    v27 = hstringHeader_16;
    *(_WORD *)v26 = 0;
    ShellFeedsAvailabilityHelpers::CreateMUID(v26);
    if ( v27.m128i_i64[0] )
    {
      std::wstring::append(Src);
      std::wstring::append(Src);
      std::wstring::append(Src);
      std::wstring::operator=(a2, Src);
    }
    else
    {
      v5 = 1;
    }
    std::wstring::_Tidy_deallocate(v26);
    std::wstring::_Tidy_deallocate(hstringHeader);
  }
  else
  {
    v5 = 1;
  }
  std::wstring::_Tidy_deallocate(v28);
  std::wstring::_Tidy_deallocate(Src);
  return v5;
}
