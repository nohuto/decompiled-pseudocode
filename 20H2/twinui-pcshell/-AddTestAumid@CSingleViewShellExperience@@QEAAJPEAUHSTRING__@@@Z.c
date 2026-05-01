/*
 * XREFs of ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180473CF4
 * Callers:
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1800A2FC0 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z @ 0x1800A3060 (-RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1800A9B38 (-RuntimeClassInitialize@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAAJPEAUIServiceProvid.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B06C0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B4E7C (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C0294 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801C5C98 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801CC6EC (-RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801CF1EC (-RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D15C8 (-RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D49AC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D9220 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801DECE0 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801E4A50 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801F0B18 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1801F8B04 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180016310 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x1804749E4 (-RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z.c)
 *     ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ @ 0x18047649C (-IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ.c)
 */

__int64 __fastcall CSingleViewShellExperience::AddTestAumid(CSingleViewShellExperience *this, HSTRING a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( ExperienceManagerUtils::IsPreReleaseExperience(this) )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v3 = -2147023654;
      v4 = 208LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 21, &v9);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v3 = CSingleViewShellExperience::RegisterAumid(
           this,
           *((HSTRING *)this + 21),
           (struct EventRegistrationToken *)this + 22);
    if ( v3 < 0 )
    {
      v4 = 210LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
