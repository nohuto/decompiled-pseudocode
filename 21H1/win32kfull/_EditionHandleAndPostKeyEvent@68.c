/*
 * XREFs of _EditionHandleAndPostKeyEvent@68 @ 0xA3150
 * Callers:
 *     <none>
 * Callees:
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     _IsProcessedByInputService@4 @ 0xC498C (_IsProcessedByInputService@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     ?GetAppcommandQueue@@YGPAUtagQ@@XZ @ 0x16DB9F (-GetAppcommandQueue@@YGPAUtagQ@@XZ.c)
 */

int __stdcall EditionHandleAndPostKeyEvent(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        _DWORD *a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        unsigned __int16 a11,
        unsigned int a12,
        unsigned int a13,
        void *a14,
        unsigned int a15,
        unsigned __int16 a16,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a17)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v18; // eax
  int v19; // esi
  unsigned __int8 (__stdcall *v20)(_DWORD); // esi
  int v21; // edi
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // eax
  unsigned int v28; // edx
  struct tagQ *AppcommandQueue; // eax
  unsigned int v30; // edi
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  _DWORD *v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // edi
  int v42; // ebx
  int v43; // esi
  int i; // ecx
  int v45; // ecx
  int v46; // esi
  int v47; // esi
  int j; // ecx
  _DWORD *v49; // esi
  int k; // ecx
  _DWORD *v51; // esi
  int m; // ecx
  struct tagQ *v53; // esi
  int n; // ecx
  unsigned int v55; // esi
  int ii; // ecx
  unsigned int v57; // [esp+14h] [ebp-40h]
  struct tagINPUT_MESSAGE_SOURCE *v58; // [esp+18h] [ebp-3Ch]
  int v59; // [esp+24h] [ebp-30h]
  _DWORD *v60; // [esp+28h] [ebp-2Ch] BYREF
  int v61; // [esp+2Ch] [ebp-28h] BYREF
  int v62; // [esp+30h] [ebp-24h] BYREF
  struct tagQ *v63; // [esp+34h] [ebp-20h]
  unsigned int v64; // [esp+38h] [ebp-1Ch]
  unsigned int v65; // [esp+3Ch] [ebp-18h] BYREF
  unsigned int v66; // [esp+40h] [ebp-14h]
  struct tagQMSG *v67; // [esp+44h] [ebp-10h]
  _DWORD v68[3]; // [esp+48h] [ebp-Ch] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 28)
    || (v18 = KeGetCurrentThread(), *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v18) + 252) + 24))
    || a5
    || (_gafAsyncKeyState[4] & 0x10) == 0
    || (a6 != 9 || (a7 & 1) != 0) && (a6 != 27 || (a7 & 2) != 0) )
  {
    if ( !_gpqForeground )
    {
      if ( !a5
        && (*_gpsi & 0x6000) != 0
        && (a6 == 0xAF || a6 == 0xAE || a6 == 0xAD || a6 == 0xB0 || a6 == 0xB1 || a6 == 0xB3 || a6 == 0xB2) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(2, 10, &WPP_7b6843d7872833607704d87654b4b262_Traceguids);
        CInputGlobals::ClearPtiLastWoken(_gpInputGlobals);
        _PostShellHookMsgWorker(
          (struct tagWND *)0xC,
          *(_DWORD *)(_gpsi + 528),
          (unsigned __int16)(a6 - 165) << 16,
          0,
          v57,
          v58);
      }
      return 0;
    }
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v68, _gpqForeground);
    v20 = (unsigned __int8 (__stdcall *)(_DWORD))IsKeyboardDelegationEnabledForThread;
    v65 = a6;
    v59 = a6;
    v21 = *(_DWORD *)(_gpqForeground + 16);
    if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_DWORD *)(_gpqForeground + 52)) )
    {
      v60 = (_DWORD *)_gpqForeground;
      v22 = *(_DWORD *)(_gpqForeground + 64);
      if ( v22 )
        v23 = *(_DWORD *)(v22 + 8);
      else
        v23 = *(_DWORD *)(_gpqForeground + 52);
      if ( HasHidTable(v23) )
      {
        v24 = v22 ? *(_DWORD *)(v22 + 8) : v60[13];
        if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v24 + 232) + 472) + 52) & 0x20) != 0 )
        {
          v25 = v22 ? *(_DWORD *)(v22 + 8) : v60[13];
          if ( !HasHidTable(v25) )
            return 1;
          v26 = v22 ? *(_DWORD *)(v22 + 8) : v60[13];
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v26 + 232) + 472) + 52) & 0x400) == 0 || a6 < 0xA6u || a6 > 0xB7u )
            return 1;
        }
      }
      v20 = (unsigned __int8 (__stdcall *)(_DWORD))IsKeyboardDelegationEnabledForThread;
    }
    if ( a6 == 0xE7 && (a9 & 0x1000) != 0 )
    {
      v59 = ((unsigned __int16)a8 << 16) | a6;
      v27 = 0;
    }
    else
    {
      v27 = a8;
    }
    v60 = v27;
    v66 = ((a10 | (unsigned __int16)v27) << 16) | 1;
    if ( v21 )
    {
      v63 = (struct tagQ *)a16;
      if ( *(_DWORD *)(v21 + 12) == a16
        && (a16 == 256 || a16 == 260)
        && *(_DWORD *)(v21 + 16) == v59
        && !IsProcessedByInputService(v21) )
      {
        v64 = HIWORD(v28);
        if ( *(_WORD *)(v21 + 22) == HIWORD(v28) )
        {
          if ( v20(*(_DWORD *)(_gpqForeground + 52)) || GetKeyboardInputRoutingPolicy() == 1 )
          {
            LOBYTE(v65) = v20(*(_DWORD *)(_gpqForeground + 52)) == 0;
            CKeyboardProcessor::ForwardInputToISM(a1 != 0, (unsigned __int16)v60, a9, a11, a14, a13, v65, a15, a17);
          }
          if ( !v20(*(_DWORD *)(_gpqForeground + 52)) )
          {
            *(_DWORD *)(v21 + 20) = (unsigned __int16)(*(_WORD *)(v21 + 20) + 1) | ((unsigned __int16)v64 << 16);
            WakeSomeone(v63, (struct tagTHREADINFO *)v21, v57, v58);
          }
          return 0;
        }
      }
    }
    if ( (unsigned __int8)(a6 + 90) > 0x11u )
      goto LABEL_71;
    if ( !a5 && _gpqForeground )
    {
      if ( a6 == 0xAF || a6 == 0xAE || a6 == 0xAD )
      {
        AppcommandQueue = GetAppcommandQueue();
        if ( AppcommandQueue )
        {
          v30 = ((unsigned __int16)(a6 - 165) << 16) | (unsigned __int16)GetMouseKeyFlags(AppcommandQueue);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(2, 10, &WPP_7b6843d7872833607704d87654b4b262_Traceguids);
          CInputGlobals::ClearPtiLastWoken(_gpInputGlobals);
          _PostShellHookMsgWorker((struct tagWND *)0xC, *(_DWORD *)(_gpsi + 528), v30, 0, v57, v58);
        }
      }
      else
      {
        PostEventMessageEx((struct tagTHREADINFO *)0xF, 0, 0, 0, v65, a12, v57, v58);
      }
    }
    if ( v20(*(_DWORD *)(_gpqForeground + 52))
      || ((v31 = *(_DWORD *)(_gpqForeground + 64)) == 0
        ? (v32 = *(_DWORD *)(_gpqForeground + 52))
        : (v32 = *(_DWORD *)(v31 + 8)),
          !HasHidTable(v32)
       || (!v31 ? (v33 = *(_DWORD *)(_gpqForeground + 52)) : (v33 = *(_DWORD *)(v31 + 8)),
           (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v33 + 232) + 472) + 52) & 0x20) == 0)) )
    {
LABEL_71:
      if ( v20(*(_DWORD *)(_gpqForeground + 52)) || GetKeyboardInputRoutingPolicy() == 1 )
      {
        LOBYTE(v65) = v20(*(_DWORD *)(_gpqForeground + 52)) == 0;
        CKeyboardProcessor::ForwardInputToISM(a1 != 0, (unsigned __int16)v60, a9, a11, a14, a13, v65, a15, a17);
      }
      if ( !v20(*(_DWORD *)(_gpqForeground + 52)) )
      {
        PostPendingMouseMove(_gpqForeground);
        v60 = (_DWORD *)_gpqForeground;
        v67 = (struct tagQMSG *)a16;
        v62 = 0;
        v61 = 0;
        v65 = 0;
        if ( AdjustPwndPtiPqForDelegation((int *)&v60, &v62, &v61, a16, a12, &v65) )
        {
          v35 = v60;
          v36 = v60[16];
          if ( v36 )
            v37 = *(_DWORD *)(v36 + 8);
          else
            v37 = 0;
          if ( v37 )
            v64 = v37 + 216;
          else
            v64 = gObjDummyLock;
          v38 = v60[12];
          if ( v38 )
            v63 = (struct tagQ *)(v38 + 216);
          else
            v63 = (struct tagQ *)gObjDummyLock;
          v39 = v60[13];
          if ( v39 )
            v40 = (_DWORD *)(v39 + 216);
          else
            v40 = (_DWORD *)gObjDummyLock;
          v41 = v61;
          v60 = v40;
          if ( v61 )
            v61 += 216;
          else
            v61 = gObjDummyLock;
          v42 = gObjDummyLock;
          if ( v62 )
            v42 = v62 + 28;
          v43 = gpsiLock;
          for ( i = 3; i; --i )
            v43 += 4;
          v45 = 3;
          v46 = v42;
          while ( v45 )
          {
            v46 += 4;
            --v45;
          }
          v47 = v61;
          for ( j = 3; j; --j )
            v47 += 4;
          v49 = v35;
          for ( k = 3; k; --k )
            ++v49;
          v51 = v60;
          for ( m = 3; m; --m )
            ++v51;
          v53 = v63;
          for ( n = 3; n; --n )
            v53 = (struct tagQ *)((char *)v53 + 4);
          v55 = v64;
          for ( ii = 3; ii; --ii )
            v55 += 4;
          PostInputMessage(
            _gpqForeground,
            0,
            v67,
            (struct tagWND *)v59,
            v66,
            a13,
            0,
            0,
            a15,
            0,
            a12,
            (struct tagINPUT_MESSAGE_SOURCE *)a14,
            0,
            v65,
            v41);
        }
      }
      return 0;
    }
    return 1;
  }
  memset(v68, 0, sizeof(v68));
  v19 = _gpqForeground;
  if ( !_gpqForeground )
    v19 = *(_DWORD *)(_gptiRit + 236);
  ++*(_DWORD *)(v19 + 292);
  PushW32ThreadLock(v19, v68, (int)UnlockQueue);
  xxxNextWindow(v19, a6);
  PopAndFreeAlwaysW32ThreadLock((int)v68);
  return 0;
}
