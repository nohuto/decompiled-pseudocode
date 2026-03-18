/*
 * XREFs of ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z @ 0x92328
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?Uninitialize@CWindowGroupManager@@SGXXZ @ 0x19F638 (-Uninitialize@CWindowGroupManager@@SGXXZ.c)
 */

void __thiscall WindowGroupingFeature::UnInitializeWindowGroupFunctionality(void *ecx0)
{
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(ecx0) )
    CWindowGroupManager::Uninitialize();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
}
