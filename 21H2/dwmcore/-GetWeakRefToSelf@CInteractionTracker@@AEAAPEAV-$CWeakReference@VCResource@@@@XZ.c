/*
 * XREFs of ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x18021B274
 * Callers:
 *     _lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator() @ 0x180218C14 (_lambda_532e28217b0c2aa3dc63221d13b9d2f4_--operator().c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x18021F8EC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180220EF4 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct CWeakResourceReference *__fastcall CInteractionTracker::GetWeakRefToSelf(struct CWeakResourceReference **a1)
{
  struct CWeakResourceReference **v1; // rbx
  struct CWeakResourceReference *result; // rax
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 9;
  result = a1[9];
  if ( !result )
  {
    *v1 = 0LL;
    v3 = CWeakReference<CResource>::Create((struct CResource *)a1, a1 + 9);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
    return *v1;
  }
  return result;
}
