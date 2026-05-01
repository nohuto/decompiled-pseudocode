/*
 * XREFs of ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x1800E1CC4
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0EDC (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800E1C68 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA?BV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800E2084 (-GetCurrentLanguage@ShellFeedsAvailabilityHelpers@@YA-BV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E22B4 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     ?IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAE1@Z @ 0x1800EDAD0 (-IsFeedsEnabledAtEndPoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@DU-$char_traits@D.c)
 *     ?PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAE@Z @ 0x1800EE01C (-PingFeedsEnablementEndpoint@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_trait.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int IsFeedsEnabledAtEndPoint; // eax
  __int64 v7; // rdx
  CHAR MultiByteStr[16]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v10; // [rsp+30h] [rbp-19h]
  __int64 v11; // [rsp+38h] [rbp-11h]
  _QWORD v12[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v13; // [rsp+50h] [rbp+7h]
  __int64 v14; // [rsp+58h] [rbp+Fh]
  _QWORD v15[4]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  ShellFeedsAvailabilityHelpers::GetCurrentLanguage(v15);
  if ( v15[2] )
  {
    v13 = 0LL;
    v14 = 7LL;
    LOWORD(v12[0]) = 0;
    v5 = ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(v15, v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D9,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
        (const char *)(unsigned int)v5);
LABEL_17:
      std::wstring::_Tidy_deallocate(v12);
      goto LABEL_18;
    }
    if ( !v13 )
    {
      v4 = 1;
      goto LABEL_17;
    }
    v10 = 0LL;
    v11 = 15LL;
    MultiByteStr[0] = 0;
    IsFeedsEnabledAtEndPoint = ShellFeedsAvailabilityHelpers::PingFeedsEnablementEndpoint(v12, MultiByteStr, a2);
    v4 = IsFeedsEnabledAtEndPoint;
    if ( IsFeedsEnabledAtEndPoint >= 0 )
    {
      if ( !v10 || *a2 )
      {
        v4 = 1;
        *a2 = 1;
        goto LABEL_16;
      }
      IsFeedsEnabledAtEndPoint = ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint(MultiByteStr);
      v4 = IsFeedsEnabledAtEndPoint;
      if ( IsFeedsEnabledAtEndPoint >= 0 )
      {
        v4 = 0;
        goto LABEL_16;
      }
      v7 = 491LL;
    }
    else
    {
      v7 = 480LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)IsFeedsEnabledAtEndPoint);
LABEL_16:
    std::string::~string((__int64)MultiByteStr);
    goto LABEL_17;
  }
  v4 = 1;
LABEL_18:
  std::wstring::_Tidy_deallocate(v15);
  return v4;
}
