/*
 * XREFs of ?s_GetBehaviorCharm@CCharmsWindowManager@@CA?AW4CHARM_WINDOW_VISIBILITY_BEHAVIOR@@PEAUHWND__@@@Z @ 0x180165E44
 * Callers:
 *     ?HandleDeactivation@CCharmsWindowManager@@UEAAXXZ @ 0x18007F6B0 (-HandleDeactivation@CCharmsWindowManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCharmsWindowManager::s_GetBehaviorCharm(HWND a1)
{
  unsigned int PropW; // esi
  DWORD WindowThreadProcessId; // ebx

  PropW = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(a1, 0LL);
  if ( WindowThreadProcessId == GetCurrentThreadId() )
    PropW = (unsigned int)GetPropW(a1, L"CharmWindowVisibilityBehavior");
  RemovePropW(a1, L"CharmWindowVisibilityBehavior");
  return PropW;
}
