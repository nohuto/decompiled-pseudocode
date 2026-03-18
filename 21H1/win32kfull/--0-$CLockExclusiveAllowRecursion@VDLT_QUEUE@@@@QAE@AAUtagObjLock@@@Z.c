/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     _EditionHandleAndPostKeyEvent@68 @ 0xA3150 (_EditionHandleAndPostKeyEvent@68.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 *     _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0 (_MergeDeferredMessagesOfThreadOnQueue@4.c)
 *     _ProcessSuspendedEventMessage@24 @ 0xADCB2 (_ProcessSuspendedEventMessage@24.c)
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0xEFA58 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z @ 0xEFB5A (-ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z.c)
 *     ?UnblockDeferredInput@@YGXPAUtagTHREADINFO@@@Z @ 0xF1082 (-UnblockDeferredInput@@YGXPAUtagTHREADINFO@@@Z.c)
 *     _EditionIsPointerQueuedMessageCoalescable@124 @ 0xF35BE (_EditionIsPointerQueuedMessageCoalescable@124.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z @ 0x15B280 (-xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z.c)
 *     _NtUserGetRawInputBuffer@12 @ 0x16426F (_NtUserGetRawInputBuffer@12.c)
 *     ?FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z @ 0x16F14F (-FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        _DWORD *this,
        int a2)
{
  int DLT; // eax

  DLT = DLT_QUEUE::getDLT();
  *this = GetDomainLockRef(DLT);
  this[1] = a2;
  *((_WORD *)this + 4) = 0;
  *((_BYTE *)this + 10) = 0;
  return this;
}
