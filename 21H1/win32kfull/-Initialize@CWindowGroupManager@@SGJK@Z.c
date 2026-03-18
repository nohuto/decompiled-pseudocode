/*
 * XREFs of ?Initialize@CWindowGroupManager@@SGJK@Z @ 0x19F29A
 * Callers:
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YGJK@Z @ 0x19F2DD (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YGJK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CWindowGroupManager::Initialize(void *this)
{
  struct CWindowGroupManager *v2; // eax

  v2 = (struct CWindowGroupManager *)Win32AllocPool(20, 1836541781);
  if ( v2 )
  {
    *(_DWORD *)v2 = this;
    *((_DWORD *)v2 + 1) = 1;
    *((_DWORD *)v2 + 2) = 0;
    *((_DWORD *)v2 + 4) = 0;
    *((_DWORD *)v2 + 3) = 0;
  }
  else
  {
    v2 = 0;
  }
  `anonymous namespace'::g_windowGroupManager = v2;
  return v2 != 0 ? 0 : -1073741801;
}
