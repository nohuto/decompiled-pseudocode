/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180475D00
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800A0428 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800A578C (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1801AE218 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1801B332C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801C1434 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801CDF48 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x1801D2A97 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x1801D2AAA (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801D2B9C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801D6680 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801E22E4 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x18020902C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$20 @ 0x180347195 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$21 @ 0x1803471A8 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$21.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803476A0 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(v1);
}
