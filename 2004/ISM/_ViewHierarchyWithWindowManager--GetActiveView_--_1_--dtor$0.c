/*
 * XREFs of _ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor$0 @ 0x1800BD6F7
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x1800870A8 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall ViewHierarchyWithWindowManager::GetActiveView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher(*(winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher **)(a2 + 104));
  }
}
