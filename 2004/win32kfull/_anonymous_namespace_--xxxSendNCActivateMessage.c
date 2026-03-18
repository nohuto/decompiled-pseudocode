/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F0578 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  bool v6; // bp
  unsigned __int64 v7; // r14
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 i; // r10
  _QWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+80h] [rbp+8h] BYREF

  v6 = 1;
  if ( !(_WORD)a2 )
  {
    v7 = 0LL;
LABEL_3:
    TopLevelWindow = a1;
    v6 = xxxSendMessage(a1, 134LL, a2, a3) != 0;
    goto LABEL_4;
  }
  v7 = 1LL;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
    goto LABEL_3;
  TopLevelWindow = a1;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(struct tagWND **)(gpqForegroundPrev + 128LL) != TopLevelWindow )
  {
    v13[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v13;
    v13[1] = TopLevelWindow;
    HMLockObject(TopLevelWindow);
    v6 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
    ThreadUnlock1();
  }
LABEL_4:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( (*((_DWORD *)TopLevelWindow + 81) & 8) != 0 )
  {
    for ( i = *((_QWORD *)TopLevelWindow + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 235LL) & 1) != 0 && *(_QWORD *)(i + 16) == *((_QWORD *)TopLevelWindow + 2) )
      {
        QueueNotifyTransformableMessage((struct tagWND *)i, 0x2FCu, v7, 0LL, 1, 0);
        break;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  return v6;
}
