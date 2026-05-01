/*
 * XREFs of ?RemoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@0@Z @ 0x1800FEE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CVirtualDesktopManager::RemoveDesktop(
        __int64 a1,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  return CVirtualDesktopManager::RemoveDesktop((CVirtualDesktopManager *)(a1 - 16), a2, a3);
}
