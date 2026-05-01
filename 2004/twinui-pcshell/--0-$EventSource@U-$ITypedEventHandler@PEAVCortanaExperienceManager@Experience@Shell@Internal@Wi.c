/*
 * XREFs of ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1801ADF2C
 * Callers:
 *     ??0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ @ 0x180098D40 (--0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x1801AE080 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x1801B3544 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x1801B7190 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x1801B7388 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x1801C1564 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x1801D2C28 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1801D6A4C (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x1801F5F74 (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0ViewWrapperBase@@QEAA@XZ @ 0x1802CD46C (--0ViewWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
