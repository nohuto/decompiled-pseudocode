/*
 * XREFs of ?FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z @ 0xD3976
 * Callers:
 *     ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0 (-CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z @ 0x19ED5D (-Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z.c)
 */

void __thiscall WindowGroupingManagement::FreeEmptyGroups(void *ecx0)
{
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop(ecx0) )
    CWindowGroupManager::Cleanup(1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
}
