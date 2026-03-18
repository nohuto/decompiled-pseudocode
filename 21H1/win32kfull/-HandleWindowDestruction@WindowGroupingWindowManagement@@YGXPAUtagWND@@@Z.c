/*
 * XREFs of ?HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z @ 0x19F1FB
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?HandleWindowInGroupDestruction@CWindowGroupManager@@QAEXPAUtagWND@@@Z @ 0x19F245 (-HandleWindowInGroupDestruction@CWindowGroupManager@@QAEXPAUtagWND@@@Z.c)
 */

void __thiscall WindowGroupingWindowManagement::HandleWindowDestruction(struct tagWND *ecx0)
{
  int v2; // eax
  int v3; // ecx
  CWindowGroupManager *v4; // ecx
  _BYTE v5[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v2 )
    v3 = ***(_DWORD ***)(v2 + 4);
  else
    v3 = -1;
  if ( anonymous_namespace_::GroupManagementEnabledForDesktop((void *)v3) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    CWindowGroupManager::HandleWindowInGroupDestruction(v4, ecx0);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  }
}
