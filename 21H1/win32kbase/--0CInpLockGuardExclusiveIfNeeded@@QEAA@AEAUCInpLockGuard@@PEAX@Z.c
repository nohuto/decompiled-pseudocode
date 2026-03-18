/*
 * XREFs of ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0051490 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0192250 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0192580 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0192810 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01928C0 (-DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0192920 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0192F70 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0193020 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0193EFC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01965F0 (-GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z.c)
 *     ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C0196750 (-GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0196A70 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 *     ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C01977D0 (-GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0198810 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C019B0D0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C019B3C0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C019CBC0 (-PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C019E8B0 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EB90 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C019FFC0 (-SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C01A1320 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 *     ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01A1A10 (-SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01A21C8 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C01A23B0 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A2C10 (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2DD0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01A2EC0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AF368 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01AF5DC (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01B051C (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01B0648 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01B074C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     GetNextFrameId @ 0x1C01B1550 (GetNextFrameId.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
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
