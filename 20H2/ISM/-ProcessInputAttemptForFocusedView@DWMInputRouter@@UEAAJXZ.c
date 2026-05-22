/*
 * XREFs of ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1801388F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1800BD69C (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180103820 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 */

__int64 __fastcall DWMInputRouter::ProcessInputAttemptForFocusedView(DWMInputRouter *this)
{
  __int64 v1; // rbx
  unsigned int ActiveViewInstanceId; // eax

  v1 = *((_QWORD *)this + 36);
  ActiveViewInstanceId = *(_DWORD *)(v1 + 72);
  if ( !ActiveViewInstanceId )
    ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(*(ViewHierarchyWithWindowManager **)(v1 + 64));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v1 + 64), ActiveViewInstanceId);
  return 0LL;
}
