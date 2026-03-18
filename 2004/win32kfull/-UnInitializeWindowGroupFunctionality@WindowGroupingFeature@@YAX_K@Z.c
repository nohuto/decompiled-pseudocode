/*
 * XREFs of ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C00BEC38
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C012A030 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00BEDD0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C0241A28 (-Uninitialize@CWindowGroupManager@@SAXXZ.c)
 */

void __fastcall WindowGroupingFeature::UnInitializeWindowGroupFunctionality(WindowGroupingFeature *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(this) )
    CWindowGroupManager::Uninitialize();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v2);
}
