/*
 * XREFs of ?InputHostHiding@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800A0330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800A00CC (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::InputHostHiding(__int64 a1)
{
  return CBaseTrayFlyoutExperienceManager::HandleInputHostVisibilityChanged((CBaseTrayFlyoutExperienceManager *)(a1 - 24));
}
