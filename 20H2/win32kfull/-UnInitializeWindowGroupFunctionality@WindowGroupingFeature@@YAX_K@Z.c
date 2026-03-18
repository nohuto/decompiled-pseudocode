/*
 * XREFs of ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C007F010
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012C0C0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C0240788 (-Uninitialize@CWindowGroupManager@@SAXXZ.c)
 */

void __fastcall WindowGroupingFeature::UnInitializeWindowGroupFunctionality(WindowGroupingFeature *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(this) )
    CWindowGroupManager::Uninitialize();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v2);
}
