/*
 * XREFs of ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD4F0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z @ 0x1801717EC (-TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1800BDBFC (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDF70 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 */

bool __fastcall ViewHelper::IsViewPartOfForegroundApplication(
        struct ViewHierarchyWithWindowManager *this,
        unsigned int a2)
{
  unsigned int ActiveViewInstanceId; // eax
  unsigned int TopLevelHostView; // ebx

  ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(this);
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(this, ActiveViewInstanceId);
  return ViewHierarchyWithWindowManager::GetTopLevelHostView(this, a2) == TopLevelHostView;
}
