/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(int a1, unsigned int a2, int a3)
{
  int TopLevelWindow; // esi
  bool v6; // bl
  _DWORD *i; // ecx
  struct tagWND *TopLevelHostForComponent; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  const struct tagWND *v12; // [esp+0h] [ebp-24h]
  int v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+10h] [ebp-14h] BYREF
  _DWORD v15[2]; // [esp+14h] [ebp-10h] BYREF
  unsigned __int8 v16; // [esp+1Eh] [ebp-6h]
  char v17; // [esp+1Fh] [ebp-5h]

  v17 = 1;
  if ( !(_WORD)a2 )
  {
    v16 = 0;
LABEL_3:
    TopLevelWindow = a1;
    v6 = xxxSendMessage(a2, a3) != 0;
    goto LABEL_4;
  }
  v16 = 1;
  if ( !CoreWindowProp::IsComponent(v12) )
    goto LABEL_3;
  TopLevelWindow = a1;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v12);
  if ( TopLevelHostForComponent )
    TopLevelWindow = _GetTopLevelWindow(TopLevelHostForComponent);
  if ( TopLevelWindow && _gpqForegroundPrev && *(_DWORD *)(_gpqForegroundPrev + 68) != TopLevelWindow )
  {
    v15[1] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v14 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v14;
    v15[0] = TopLevelWindow;
    HMLockObject(TopLevelWindow);
    v6 = xxxSendNotifyMessage(TopLevelWindow, 134, a2, 0, 1) != 0;
    ThreadUnlock1();
  }
  else
  {
    v6 = v17;
  }
LABEL_4:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  if ( (*(_BYTE *)(TopLevelWindow + 196) & 8) != 0 )
  {
    for ( i = *(_DWORD **)(TopLevelWindow + 60); i; i = (_DWORD *)i[12] )
    {
      if ( (*(_BYTE *)(i[5] + 147) & 1) != 0 && i[2] == *(_DWORD *)(TopLevelWindow + 8) )
      {
        QueueNotifyTransformableMessage((struct tagWND *)v16, 0, 1u, 0, (int)v12, v13);
        break;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  return v6;
}
