/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C
 * Callers:
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0032E34 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     DestroyThreadsMessages @ 0x1C00B3070 (DestroyThreadsMessages.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     SuspendThreadQueue @ 0x1C010D6B0 (SuspendThreadQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C0112A5C (MergeDeferredMessagesOfThreadOnQueue.c)
 *     SlowAppThreadInShellFrame @ 0x1C011AC54 (SlowAppThreadInShellFrame.c)
 *     ProcessSuspendedEventMessage @ 0x1C011CB20 (ProcessSuspendedEventMessage.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0157ED0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E1B8C (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     _DelegateCapturePointers @ 0x1C01F0934 (_DelegateCapturePointers.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1D44 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     NtUserGetRawInputBuffer @ 0x1C01FC080 (NtUserGetRawInputBuffer.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C020975C (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C02098E0 (EditionIsPointerQueuedMessageCoalescable.c)
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
