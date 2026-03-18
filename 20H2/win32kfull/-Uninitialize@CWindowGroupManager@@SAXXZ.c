/*
 * XREFs of ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C0240788
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C007F010 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 * Callees:
 *     ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C023FBF4 (-Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z.c)
 */

void __fastcall CWindowGroupManager::Uninitialize(__int64 a1)
{
  struct CWindowGroupManager *v1; // rbx
  __int64 v2; // rcx

  CWindowGroupManager::Cleanup(a1, 0);
  v1 = `anonymous namespace'::g_windowGroupManager;
  if ( `anonymous namespace'::g_windowGroupManager )
  {
    v2 = *((_QWORD *)`anonymous namespace'::g_windowGroupManager + 3);
    if ( v2 )
      Win32FreePool(v2);
    Win32FreePool(v1);
  }
  `anonymous namespace'::g_windowGroupManager = 0LL;
}
