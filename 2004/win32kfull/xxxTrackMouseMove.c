/*
 * XREFs of xxxTrackMouseMove @ 0x1C0057D90
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00229B0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0056670 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C0057148 (xxxHotTrack.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0057164 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C00571AC (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C00582F4 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     _SetSystemTimer @ 0x1C006024C (_SetSystemTimer.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchangeAlways @ 0x1C010B5D0 (ThreadLockExchangeAlways.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D2C18 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E21BC (GetActiveTrackPwnd.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023E54C (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02439FC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  int v4; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned int v9; // edx
  NotifyShell **v10; // r12
  __int64 v11; // r13
  unsigned int v12; // r8d
  struct tagWND *v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // r10
  struct tagQ *v20; // r11
  NotifyShell *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  NotifyShell *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // r15
  unsigned __int16 *v30; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v43; // r8d
  __int64 ActiveTrackPwnd; // rax
  int v45; // ebx
  _DWORD *v46; // rax
  _QWORD v47[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v48; // [rsp+58h] [rbp-19h] BYREF
  __int64 v49; // [rsp+68h] [rbp-9h]
  __int128 v50; // [rsp+70h] [rbp-1h] BYREF
  __int64 v51; // [rsp+80h] [rbp+Fh]
  _QWORD v52[4]; // [rsp+88h] [rbp+17h] BYREF

  v52[2] = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v4 = a3;
  v48 = 0LL;
  v6 = 0;
  v50 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v52[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v52;
  v52[1] = a1;
  HMLockObject(a1);
  if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v52);
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (NotifyShell **)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v19 = *(_QWORD *)(v11 + 16);
    v20 = *(struct tagQ **)(v19 + 424);
    if ( *(struct tagQ **)(gptiCurrent + 424LL) == v20 )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx(
        (struct tagTHREADINFO *)v19,
        v20,
        0xBu,
        (struct tagWND *)v11,
        v9,
        *(int *)(v7 + 192),
        1024LL,
        0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || v4 != 512 )
      v6 |= 0x100u;
    if ( (struct tagWND *)v11 != a1 || (a2 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, &v50, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v21 = *v10;
    v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v48 = *(_QWORD *)(v22 + 408);
    *(_QWORD *)(v22 + 408) = &v48;
    *((_QWORD *)&v48 + 1) = v21;
    HMLockObject(v21);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v10, *(unsigned int *)(v7 + 192), v6);
    ThreadUnlock1(v24, v23, v25);
    v4 = a3;
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, &v50, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v27 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v28 = v27;
    if ( v27 )
    {
      v29 = *v27;
      if ( *v27 )
      {
        v30 = IsTooltipHittest(a1, (unsigned __int16)a2);
        CurrentThread = KeGetCurrentThread();
        v32 = v30;
        if ( v30 )
        {
          v37 = W32GetThreadWin32Thread(CurrentThread);
          *(_QWORD *)&v48 = *(_QWORD *)(v37 + 408);
          *(_QWORD *)(v37 + 408) = &v48;
          *((_QWORD *)&v48 + 1) = v29;
          HMLockObject(v29);
          v38 = *v28;
          v28[6] = v32;
          if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v38, 0, 0, 1175);
            v39 = xxxShowTooltip((struct tagTOOLTIPWND *)v28);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v28, 1, *((_DWORD *)v28 + 2));
            v39 = 1;
          }
          if ( v39 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v33 = W32GetThreadWin32Thread(CurrentThread);
          *(_QWORD *)&v48 = *(_QWORD *)(v33 + 408);
          *(_QWORD *)(v33 + 408) = &v48;
          *((_QWORD *)&v48 + 1) = v29;
          HMLockObject(v29);
          xxxResetTooltip((struct tagTOOLTIPWND *)v28);
        }
        ThreadUnlock1(v35, v34, v36);
        v10 = (NotifyShell **)(v7 + 184);
      }
    }
  }
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)v7, (const struct tagDESKTOP *)0x40, v12) )
  {
    if ( (struct tagWND *)v11 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_8;
      v26 = a1;
    }
    else
    {
      v26 = *v10;
      if ( !*v10 )
      {
LABEL_25:
        if ( a2 - 10 <= 1
          && !ShellWindowManagement::BehaviorEnabled(
                *((ShellWindowManagement **)a1 + 3),
                (const struct tagDESKTOP *)8,
                v14) )
        {
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)a2, v43);
        }
        goto LABEL_8;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v26, v13);
    goto LABEL_25;
  }
LABEL_8:
  if ( (struct tagWND *)v11 != a1 )
  {
    v47[0] = v10;
    v47[1] = a1;
    HMAssignmentLock(v47);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        v45 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v46 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v45, 65527, *v46, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(&v50);
  return ThreadUnlock1(v16, v15, v17);
}
