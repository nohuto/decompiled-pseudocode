/*
 * XREFs of ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x180212AD4
 * Callers:
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180212740 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801415C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState(
        TwinUI::Cortana::CCortanaWNFService *this,
        char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = RtlQueryWnfStateData(&v8, WNF_TMCN_ISTABLETMODE, TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback, this);
  if ( v4 < 0 )
  {
    v5 = 167LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v5,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v4);
  }
  if ( !a2 )
  {
    v4 = RtlQueryWnfStateData(
           &v8,
           WNF_SHEL_LOCKSCREEN_ACTIVE,
           TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback,
           this);
    if ( v4 < 0 )
    {
      v5 = 178LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v5,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v4);
    }
    v4 = RtlQueryWnfStateData(
           &v8,
           WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
           TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback,
           this);
    if ( v4 < 0 )
    {
      v5 = 186LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v5,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v4);
    }
    v4 = RtlQueryWnfStateData(
           &v8,
           WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
           TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback,
           this);
    if ( v4 < 0 )
    {
      v5 = 194LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v5,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v4);
    }
  }
  return 0LL;
}
