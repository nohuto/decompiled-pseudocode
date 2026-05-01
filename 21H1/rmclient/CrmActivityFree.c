/*
 * XREFs of CrmActivityFree @ 0x180003D20
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180003D60 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

BOOLEAN __fastcall CrmActivityFree(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  CrmpActivityContextCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
