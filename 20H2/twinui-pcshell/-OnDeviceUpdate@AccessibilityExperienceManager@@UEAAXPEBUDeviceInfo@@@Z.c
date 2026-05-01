/*
 * XREFs of ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x180370070
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180370B10 (-Show@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceUpdate(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
      AccessibilityExperienceManager::Show(
        (AccessibilityExperienceManager *)((char *)this - 8),
        *((_BYTE *)a2 + 1548) == 1);
  }
}
