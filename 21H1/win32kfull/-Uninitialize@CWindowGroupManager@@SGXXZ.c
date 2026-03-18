/*
 * XREFs of ?Uninitialize@CWindowGroupManager@@SGXXZ @ 0x19F638
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z @ 0x92328 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z.c)
 * Callees:
 *     ?Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z @ 0x19ED5D (-Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z.c)
 */

void __stdcall CWindowGroupManager::Uninitialize()
{
  struct CWindowGroupManager *v0; // esi

  CWindowGroupManager::Cleanup(0);
  v0 = `anonymous namespace'::g_windowGroupManager;
  if ( `anonymous namespace'::g_windowGroupManager )
  {
    if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4) )
      Win32FreePool(*((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4));
    Win32FreePool(v0);
  }
  `anonymous namespace'::g_windowGroupManager = 0;
}
