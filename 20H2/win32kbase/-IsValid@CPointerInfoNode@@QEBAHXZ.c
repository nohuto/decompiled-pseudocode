/*
 * XREFs of ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0185E10 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?BreakEditionParentNotifyLoop@CTouchProcessor@@QEAAHPEAX@Z @ 0x1C0186270 (-BreakEditionParentNotifyLoop@CTouchProcessor@@QEAAHPEAX@Z.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01866FC (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C0187808 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018A360 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C018B230 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018B7C4 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C018B97C (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018C2EC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C018DF78 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GetContactVisualizationPointerEventInt@CTouchProcessor@@QEAAPEBUtagPOINTEREVENTINT@@PEAXPEAH@Z @ 0x1C018E340 (-GetContactVisualizationPointerEventInt@CTouchProcessor@@QEAAPEBUtagPOINTEREVENTINT@@PEAXPEAH@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C018E38C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C018E3D0 (-GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C018EAE0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C018ECC0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018EFB0 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C018F2A0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C018F810 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C018FF80 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C018FFF0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0190568 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01905F0 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0190E30 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0191C24 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01927F8 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019291C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0192D70 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C0192EA0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C0192FDC (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019303C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01930E4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0193144 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0193928 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0194254 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0194FB4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0196C1C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199538 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0199884 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C019A150 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019A3D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A794 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019AC60 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C019B1D8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPointerInfoNode::IsValid(CPointerInfoNode *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*(_DWORD *)this & 0x2000) == 0 )
    return *((_DWORD *)this + 43) != 0;
  return v1;
}
