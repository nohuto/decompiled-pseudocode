/*
 * XREFs of ?GetDesktops@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIObjectArray@@@Z @ 0x1800FEDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::GetDesktops(__int64 a1, struct IObjectArray **a2)
{
  return CVirtualDesktopManager::GetDesktops((CVirtualDesktopManager *)(a1 - 16), a2);
}
