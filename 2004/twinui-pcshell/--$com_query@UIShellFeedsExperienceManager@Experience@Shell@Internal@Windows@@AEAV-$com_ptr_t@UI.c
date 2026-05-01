/*
 * XREFs of ??$com_query@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIShellFeedsExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x1800DC0F0
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1800DC9F0 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@W4ShellFeedsButtonInteraction@9456@PEAUHSTRING__@@@Z @ 0x1800DCAA0 (-NotifyTaskbarButtonInteraction@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRING__@@@Z @ 0x1800DCB70 (-Poke@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAUHSTRIN.c)
 *     ?PrelaunchTimerTicked@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1800DCC20 (-PrelaunchTimerTicked@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@.c)
 *     ?SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJW4ShellFeedsButtonType@Experience@456@URect@Foundation@6@@Z @ 0x1800DEFE0 (-SetPositioningAnchorRect@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(*(_QWORD *)*a2 + 24LL))(
         *a2,
         &GUID_8617eebb_3124_4776_bded_a0bde75455bb,
         a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800DC13ALL);
  }
  return a1;
}
