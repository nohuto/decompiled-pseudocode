/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1804766A0
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18009F058 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800A3A28 (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x1801AE640 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1801B371C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801C18C4 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801CE3D8 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x1801D2F27 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x1801D2F3A (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801D302C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801D6D60 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801E29C4 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x18020987C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$20 @ 0x180347BF5 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$21 @ 0x180347C08 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$21.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180348100 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
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
