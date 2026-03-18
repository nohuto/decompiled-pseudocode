/*
 * XREFs of ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652
 * Callers:
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     ?_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z @ 0xF505E (-_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 *     ?IsSetWindowShowStateMaximize@@YGHE@Z @ 0x1A0637 (-IsSetWindowShowStateMaximize@@YGHE@Z.c)
 */

bool __userpurge xxxSetWindowShowState@<al>(
        char a1@<dl>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned __int8 a4,
        struct tagRECT *a5)
{
  _DWORD *v5; // esi
  BOOL v7; // ecx
  _DWORD *Prop; // eax
  int v10; // edx
  _DWORD v12[2]; // [esp+18h] [ebp-8h] BYREF

  v5 = a2;
  v12[0] = a2;
  v7 = (*(_BYTE *)(a2[5] + 23) & 0x20) != 0 || IsSemiMaximized(a2);
  if ( (a1 == 16 || a1 == 18 || a1 == 20) && !v7 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (_DWORD *)_GetProp((int)v5, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    if ( Prop )
    {
      *Prop = *(_DWORD *)a3;
      Prop[1] = *((_DWORD *)a3 + 1);
      Prop[2] = *((_DWORD *)a3 + 2);
      Prop[3] = *((_DWORD *)a3 + 3);
      v5 = (_DWORD *)v12[0];
    }
    else if ( !CkptRestore((int)v5, (int)a3) )
    {
      UserSetLastError((struct _NT_TIB *)8);
      return 0;
    }
  }
  if ( IsSetWindowShowStateMaximize(a1) && (*(_BYTE *)(v5[5] + 23) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
    NotifyShell::TrackedWindowPosChanged(v5, 1);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
    return 1;
  }
  return _ShowWindowAsync((int)v5, (struct tagQMSG *)1, v10, a3 != 0 ? (struct tagWND *)4 : 0) != 0;
}
