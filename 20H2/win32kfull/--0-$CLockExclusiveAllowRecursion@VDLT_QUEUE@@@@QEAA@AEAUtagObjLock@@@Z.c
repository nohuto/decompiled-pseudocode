/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x1C0029684 (SlowAppThreadInShellFrame.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00BCFB8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     DestroyThreadsMessages @ 0x1C00D7600 (DestroyThreadsMessages.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C00F69FC (MergeDeferredMessagesOfThreadOnQueue.c)
 *     SuspendThreadQueue @ 0x1C010F150 (SuspendThreadQueue.c)
 *     ProcessSuspendedEventMessage @ 0x1C011DBD4 (ProcessSuspendedEventMessage.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C015AD28 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E0ECC (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10D4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FB210 (NtUserGetRawInputBuffer.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C02088EC (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C0208A70 (EditionIsPointerQueuedMessageCoalescable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        __int64 a1,
        __int64 a2)
{
  unsigned int DLT; // eax
  __int64 result; // rax

  DLT = DLT_QUEUE::getDLT(a1);
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
