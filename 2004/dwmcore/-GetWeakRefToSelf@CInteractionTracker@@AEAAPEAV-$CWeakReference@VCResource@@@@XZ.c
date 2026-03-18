/*
 * XREFs of ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1801CB154
 * Callers:
 *     _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801C8EC8 (_lambda_2149ae26af8bda672c72659e191929ce_--operator().c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CF7EC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801D0FAC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18009C3A8 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

struct CWeakResourceReference *__fastcall CInteractionTracker::GetWeakRefToSelf(struct CWeakResourceReference **a1)
{
  struct CWeakResourceReference **v1; // rbx
  struct CWeakResourceReference *result; // rax
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 8;
  result = a1[8];
  if ( !result )
  {
    *v1 = 0LL;
    v3 = CWeakReference<CVisual>::Create((struct CResource *)a1, a1 + 8);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
    return *v1;
  }
  return result;
}
