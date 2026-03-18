/*
 * XREFs of _xxxProcessNotifyWinEvent@4 @ 0x143A2
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxFlushDeferredWindowEvents@0 @ 0x458CC (_xxxFlushDeferredWindowEvents@0.c)
 * Callees:
 *     _xxxClientCallWinEventProc@12 @ 0x145FC (_xxxClientCallWinEventProc@12.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x146E8 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     ?xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z @ 0x147EA (-xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32SetCurrentThreadDpiAwarenessContext@4 @ 0x6B6B0 (_W32SetCurrentThreadDpiAwarenessContext@4.c)
 *     ?RemoveNotify@@YGXPAUtagNOTIFY@@@Z @ 0xA3C88 (-RemoveNotify@@YGXPAUtagNOTIFY@@@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __thiscall xxxProcessNotifyWinEvent(_DWORD *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v12; // eax
  int v13; // esi
  PKTHREAD v14; // eax
  int v15; // eax
  void (__stdcall *EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // eax
  int v17; // esi
  struct tagNOTIFY *v18; // [esp+0h] [ebp-30h]
  struct tagINPUT_MESSAGE_SOURCE *v19; // [esp+4h] [ebp-2Ch]
  _DWORD v20[3]; // [esp+10h] [ebp-20h] BYREF
  int ProcessInformation; // [esp+1Ch] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-10h]
  tagDomLock *v23; // [esp+24h] [ebp-Ch] BYREF
  _BYTE v24[4]; // [esp+28h] [ebp-8h] BYREF
  int v25; // [esp+2Ch] [ebp-4h]

  v20[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = this[10];
  v5 = ThreadWin32Thread;
  v25 = 0;
  v6 = this[2];
  if ( (v4 & 0xC) == 4 || (*(_BYTE *)(ThreadWin32Thread + 264) & 0xD) != 0 )
    goto LABEL_11;
  if ( !(unsigned __int8)Enforced() )
  {
    v7 = *(_DWORD *)(v5 + 232);
    v8 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232);
    if ( (*(_DWORD *)(v8 + 424) != *(_DWORD *)(v7 + 424) || *(_DWORD *)(v8 + 428) != *(_DWORD *)(v7 + 428))
      && (*(_DWORD *)(v5 + 264) & 0x400000) == 0 )
    {
      goto LABEL_11;
    }
  }
  v9 = *(_DWORD **)(v6 + 8);
  if ( v9[58] != *(_DWORD *)(v5 + 232) )
  {
    if ( (unsigned __int8)IsRestricted(*v9) )
      goto LABEL_11;
  }
  if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(*(_DWORD *)(v6 + 8) + 232) + 496, *(_DWORD *)(v5 + 232) + 496) )
  {
    v25 = 1;
LABEL_11:
    v10 = *(_DWORD *)(v6 + 8);
    v23 = *(tagDomLock **)(v10 + 236);
    v22 = *(_DWORD *)(v6 + 12);
    if ( v25 )
      EtwTraceUIPIEventHookError(this, v10, v5);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
    this[10] |= 0xCu;
    if ( !v23
      || *(_DWORD *)(v6 + 8) == _gptiRit
      || (*(_BYTE *)(v6 + 24) & 1) != 0
      || !PostEventMessageEx((struct tagTHREADINFO *)0xC, 0, 0, 0, (unsigned int)this, 0, (int)v18, v19) )
    {
      RemoveNotify(v18);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
    return v22;
  }
  v25 = 0;
  if ( (!*(_DWORD *)(v6 + 32) || !*(_DWORD *)(v6 + 28)) && !IsImmersiveBroker(*(_DWORD *)(*(_DWORD *)(v6 + 8) + 232)) )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232);
    if ( *(int *)(v12 + 8) >= 0 && v12 != *(_DWORD *)(v5 + 232) && (*(_DWORD *)(v12 + 464) & 0x100) == 0 )
    {
      if ( IsImmersiveAppRestricted(*(_DWORD *)(v5 + 232)) )
        goto LABEL_11;
      v22 = 0;
      ProcessInformation = 6;
      if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0) < 0
        || (v22 & 1) != 0 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( (*(_BYTE *)(v6 + 24) & 1) != 0 )
  {
    v13 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v14 = KeGetCurrentThread();
    v15 = W32GetThreadWin32Thread(v14);
    v20[0] = *(_DWORD *)(v15 + 228);
    *(_DWORD *)(v15 + 228) = v20;
    v20[1] = v6;
    HMLockObject(v6);
    this[11] = v5;
    if ( (*(_BYTE *)(v6 + 24) & 8) != 0 )
      EventProc = xxxGetEventProc(v18);
    else
      EventProc = *(void (__stdcall **)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v6 + 36);
    v25 = (int)EventProc;
    if ( EventProc )
    {
      v17 = W32SetCurrentThreadDpiAwarenessContext(*(_DWORD *)(v6 + 48));
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v23);
      xxxClientCallWinEventProc(this);
      tagDomLock::LockExclusive(v23);
      W32SetCurrentThreadDpiAwarenessContext(v17);
    }
    this[11] = 0;
    v13 = *(_DWORD *)(v6 + 12);
    ThreadUnlock1();
  }
  RemoveNotify(v18);
  return v13;
}
