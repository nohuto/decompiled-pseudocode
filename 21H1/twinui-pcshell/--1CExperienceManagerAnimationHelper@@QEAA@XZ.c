/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180452660
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180096DF0 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18018A750 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x18018FA3C (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x18019DDB4 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801AA8C8 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x1801AF417 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x1801AF42A (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801AF578 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801B32A0 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801BEF04 (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801E65D8 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$20 @ 0x1803260A1 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$20.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$21 @ 0x1803260B4 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$21.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x1803265B0 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
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
