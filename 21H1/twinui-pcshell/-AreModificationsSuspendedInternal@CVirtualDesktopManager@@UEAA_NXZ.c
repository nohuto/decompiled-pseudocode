/*
 * XREFs of ?AreModificationsSuspendedInternal@CVirtualDesktopManager@@UEAA_NXZ @ 0x180416110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopManager::AreModificationsSuspendedInternal(CVirtualDesktopManager *this)
{
  return *((_DWORD *)this + 40) != 0;
}
