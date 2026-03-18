/*
 * XREFs of _LockW32Thread@8 @ 0x3C2F8
 * Callers:
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _xxxCancelTracking@0 @ 0x17842 (_xxxCancelTracking@0.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxQueryInformationThread@16 @ 0xCF7F4 (_xxxQueryInformationThread@16.c)
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     ?xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z @ 0x14EEFD (-xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z.c)
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 *     _xxxImmActivateThreadsLayout@12 @ 0x14F6B9 (_xxxImmActivateThreadsLayout@12.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

LONG_PTR __fastcall LockW32Thread(LONG_PTR a1, LONG_PTR *a2)
{
  int v4; // ebx
  int *ThreadWin32Thread; // eax
  LONG_PTR result; // eax
  PKTHREAD CurrentThread; // [esp+Ch] [ebp-4h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  result = *(_DWORD *)(v4 + 8);
  *a2 = result;
  *(_DWORD *)(v4 + 8) = a2;
  a2[1] = a1;
  a2[2] = (LONG_PTR)DereferenceW32Thread;
  if ( a1 )
  {
    result = ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  }
  return result;
}
