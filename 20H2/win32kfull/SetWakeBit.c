/*
 * XREFs of SetWakeBit @ 0x1C00D4F30
 * Callers:
 *     _ReplyMessage @ 0x1C00023B0 (_ReplyMessage.c)
 *     IPostQuitMessage @ 0x1C000B7A4 (IPostQuitMessage.c)
 *     xxxSystemTimerProc @ 0x1C00190C0 (xxxSystemTimerProc.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C002DCDC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     SendMsgCleanup @ 0x1C007EE60 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C007F3DC (xxxReceiverDied.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C00BE604 (_PostThreadMessageEx.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ClearSendMessages @ 0x1C00D37C8 (ClearSendMessages.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00D5034 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00F661C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E0B1C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EA934 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C0210FC0 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C023E010 (IncPaintCount.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00D4CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     UpdateRawMouseMode @ 0x1C00D5378 (UpdateRawMouseMode.c)
 *     SetForegroundPriority @ 0x1C0223220 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int v6; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 488);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 88LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 432));
    if ( (a2 & 0x401) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 96LL) = a1;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 424);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 4960LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4964LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v5 + 12) = v6 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 448);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 736), 2, 0);
  }
  return v2;
}
