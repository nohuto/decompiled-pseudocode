/*
 * XREFs of ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YGJK@Z @ 0x19F2DD
 * Callers:
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?Initialize@CWindowGroupManager@@SGJK@Z @ 0x19F29A (-Initialize@CWindowGroupManager@@SGJK@Z.c)
 */

int __thiscall WindowGroupingFeature::InitializeWindowGroupFunctionality(void *ecx0)
{
  int v2; // esi
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v4);
  if ( `anonymous namespace'::g_windowGroupManager )
    v2 = *(_DWORD *)`anonymous namespace'::g_windowGroupManager != (_DWORD)ecx0 ? 0xC0000001 : 0;
  else
    v2 = CWindowGroupManager::Initialize(ecx0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v4);
  return v2;
}
