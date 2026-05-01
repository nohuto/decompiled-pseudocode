/*
 * XREFs of ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180088ACC
 * Callers:
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180088AA0 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800A7CE0 (-BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ.c)
 *     ?HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x1801C2BF0 (-HotKeyInvoked@CToastCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Window.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801C680C (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x1801D32A0 (-BringToForeground@CStartExperienceManager@@UEAAJXZ.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801D5700 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::BringToForeground(CSingleViewShellExperience *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  if ( *((_DWORD *)this + 10) != 2 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 72LL))(*((_QWORD *)this + 10));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
