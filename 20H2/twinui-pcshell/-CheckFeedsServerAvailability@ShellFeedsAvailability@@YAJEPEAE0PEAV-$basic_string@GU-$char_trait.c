/*
 * XREFs of ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0EDC
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E15FC (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800625F8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800E144C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800E1CC4 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800E2084 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800EDF04 (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::CheckFeedsServerAvailability(char a1, _BYTE *a2, bool *a3, char *a4)
{
  const unsigned __int16 *v8; // r8
  unsigned int v9; // r9d
  BYTE *v10; // rdx
  int v11; // eax
  ShellFeedsAvailabilityHelpers *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int8 IsNetworkConnectivityAvailable; // al
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned __int8 v20[8]; // [rsp+20h] [rbp-58h] BYREF
  BYTE *lpData[4]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(lpData);
  v10 = (BYTE *)lpData;
  if ( lpData[3] >= (BYTE *)8 )
    v10 = lpData[0];
  v11 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"osLocale", v10, v8, v9);
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( *a2 || a1 )
    {
      IsNetworkConnectivityAvailable = ShellFeedsAvailabilityHelpers::IsNetworkConnectivityAvailable(v12);
      *a3 = IsNetworkConnectivityAvailable == 0;
      if ( IsNetworkConnectivityAvailable )
      {
        v20[0] = 0;
        v20[1] = 0;
        v11 = ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer(
                (ShellFeedsAvailabilityHelpers *)&v20[1],
                v20,
                v16);
        v13 = v11;
        if ( v11 < 0 )
        {
          v14 = 143LL;
          goto LABEL_10;
        }
        v17 = v20[0];
        *a3 = v20[0];
        if ( !v17 )
        {
          v18 = v20[1];
          *a2 = v20[1];
          if ( !v18 )
            std::wstring::assign(a4, L"FeedsNotPresentOnServer", 0x17uLL);
        }
      }
    }
    v13 = 0;
    goto LABEL_15;
  }
  v14 = 129LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v11);
LABEL_15:
  std::wstring::_Tidy_deallocate(lpData);
  return v13;
}
