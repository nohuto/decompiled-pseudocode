/*
 * XREFs of LockW32Thread @ 0x1C00BAF00
 * Callers:
 *     xxxQueryInformationThread @ 0x1C007CDC8 (xxxQueryInformationThread.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     xxxCancelTracking @ 0x1C00BF350 (xxxCancelTracking.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0121408 (xxxImmUnloadThreadsLayout.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2790 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E2D90 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3170 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C02110D4 (xxxDrawDragRectEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 */

__int64 __fastcall LockW32Thread(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushW32ThreadLock(a1, a2, (__int64)DereferenceW32Thread);
  if ( a1 )
  {
    result = ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
