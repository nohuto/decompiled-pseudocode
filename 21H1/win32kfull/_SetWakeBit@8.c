/*
 * XREFs of _SetWakeBit@8 @ 0x44776
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _IncPaintCount@4 @ 0x46034 (_IncPaintCount@4.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _ClearSendMessages@4 @ 0x719D2 (_ClearSendMessages@4.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 *     _IPostQuitMessage@8 @ 0xABFB2 (_IPostQuitMessage@8.c)
 *     __ReplyMessage@4 @ 0xC4C9C (__ReplyMessage@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 *     ?SenderDied@@YGXPAUtagSMS@@@Z @ 0xD487A (-SenderDied@@YGXPAUtagSMS@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 *     ?SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z @ 0x14DB36 (-SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YGXPAUtagTIMER@@K@Z @ 0x156134 (-ReadyTimer@@YGXPAUtagTIMER@@K@Z.c)
 *     __DelegateCapturePointers@8 @ 0x15A503 (__DelegateCapturePointers@8.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 * Callees:
 *     _IS_USERCRIT_OWNED_SHAREDONLY@0 @ 0x4159E (_IS_USERCRIT_OWNED_SHAREDONLY@0.c)
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     _WakeWowTask@4 @ 0x155BA7 (_WakeWowTask@4.c)
 *     _SetForegroundPriority@8 @ 0x18543F (_SetForegroundPriority@8.c)
 */

LONG __stdcall SetWakeBit(int a1, int a2)
{
  int v2; // ebx
  LONG result; // eax
  int v4; // edx
  int v5; // ecx

  if ( (*(_BYTE *)(a1 + 264) & 1) == 0 )
  {
    v2 = a2;
    if ( (a2 & 6) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_DWORD *)(*(_DWORD *)(a1 + 236) + 48) = a1;
      UpdateRawMouseMode(*(_DWORD *)(a1 + 236));
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_DWORD *)(a1 + 236));
    if ( (a2 & 0x401) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_DWORD *)(*(_DWORD *)(a1 + 236) + 52) = a1;
    }
    *(_WORD *)(*(_DWORD *)(a1 + 244) + 6) |= a2;
    *(_WORD *)(*(_DWORD *)(a1 + 244) + 4) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 232);
      v5 = *(_DWORD *)(v4 + 8);
      if ( (v5 & 0x400000) != 0 )
      {
        if ( (a2 & 2) == 0
          || (v2 = a2, *(_DWORD *)(_gpsi + 4428) != _gptSSCursor[0])
          || *(_DWORD *)(_gpsi + 4432) != _gptSSCursor[1] )
        {
          *(_DWORD *)(v4 + 8) = v5 & 0xFFBFFFFF;
          SetForegroundPriority(a1, 1);
        }
      }
    }
    result = *(unsigned __int16 *)(*(_DWORD *)(a1 + 244) + 10);
    if ( (result & v2) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 264) & 2) != 0 )
      {
        ++*(_DWORD *)(*(_DWORD *)(a1 + 332) + 4);
        ++*(_DWORD *)(_gpsi + 4440);
        return WakeWowTask(a1);
      }
      else
      {
        return KeSetEvent(*(PRKEVENT *)(a1 + 400), 2, 0);
      }
    }
  }
  return result;
}
