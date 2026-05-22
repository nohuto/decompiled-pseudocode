/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800F3760
 * Callers:
 *     ?OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A4C0 (-OnActivationConfigurationInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000A5C0 (-OnActivationControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000BF30 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C050 (-OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C170 (-OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C290 (-OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C3B0 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C4D0 (-OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C5F0 (-OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C710 (-OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C830 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C940 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CA50 (-OnDragManagerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CB60 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CC70 (-OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CD80 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CE90 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CFA0 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180013D70 (-OnActivationListenerInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x180001F44 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
    a3 + 2,
    *(_QWORD **)(a1 + 8),
    a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
