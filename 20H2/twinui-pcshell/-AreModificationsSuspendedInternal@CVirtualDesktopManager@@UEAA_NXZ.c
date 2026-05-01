/*
 * XREFs of ?AreModificationsSuspendedInternal@CVirtualDesktopManager@@UEAA_NXZ @ 0x180439420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopManager::AreModificationsSuspendedInternal(CVirtualDesktopManager *this)
{
  return *((_DWORD *)this + 40) != 0;
}
