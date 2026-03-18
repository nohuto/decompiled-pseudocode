/*
 * XREFs of ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00BF4B0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C018A030 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018A360 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C018A5F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018A6A0 (-DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018A700 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018AD50 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C018AE00 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018BCDC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C018E3D0 (-GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z.c)
 *     ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C018E530 (-GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C018E850 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 *     ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C018F5B0 (-GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01905F0 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C0192EA0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01931A0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01949A0 (-PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C0196690 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0196970 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C0197DA0 (-SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C01990C0 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 *     ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01997B0 (-SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0199F68 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C019A150 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A9B0 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AB70 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019AC60 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A7288 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01A74FC (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01A843C (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01A8568 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A866C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     GetNextFrameId @ 0x1C01A9470 (GetNextFrameId.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

CInpLockGuardExclusiveIfNeeded *__fastcall CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        CInpLockGuardExclusiveIfNeeded *this,
        struct CInpLockGuard *a2,
        void *a3)
{
  BOOL v4; // r8d

  *(_QWORD *)this = a3;
  if ( a3 == (void *)-1LL )
    a3 = 0LL;
  *((_BYTE *)this + 32) = 0;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 5) = a2;
  v4 = *((_QWORD *)a2 + 4) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 12) = v4;
  if ( !v4 )
    CInpLockGuard::LockExclusive(a2, this);
  return this;
}
