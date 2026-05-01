/*
 * XREFs of ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180082F4C
 * Callers:
 *     ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180081F98 (-HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180083024 (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18008299C (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 */

void __fastcall HampSlsBlockerTreeDeleteCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  HampSlsBlockerEntryCleanup((struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
