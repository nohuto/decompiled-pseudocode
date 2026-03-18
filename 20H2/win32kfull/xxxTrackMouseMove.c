/*
 * XREFs of xxxTrackMouseMove @ 0x1C00BAAC4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0012B08 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _SetSystemTimer @ 0x1C0017B98 (_SetSystemTimer.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C001B5B4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ThreadLockExchangeAlways @ 0x1C00D71E0 (ThreadLockExchangeAlways.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011B100 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0129B48 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C012A784 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E14FC (GetActiveTrackPwnd.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D2AC (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024275C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
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
  struct tagWND *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // r10
  struct tagQ *v18; // r11
  NotifyShell *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  NotifyShell *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // r15
  unsigned __int16 *v28; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v41; // r8d
  __int64 ActiveTrackPwnd; // rbx
  int *v43; // rax
  _QWORD v44[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v45; // [rsp+58h] [rbp-19h] BYREF
  __int64 v46; // [rsp+68h] [rbp-9h]
  __int128 v47; // [rsp+70h] [rbp-1h] BYREF
  __int64 v48; // [rsp+80h] [rbp+Fh]
  _QWORD v49[4]; // [rsp+88h] [rbp+17h] BYREF

  v49[2] = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v4 = a3;
  v45 = 0LL;
  v6 = 0;
  v47 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v49[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v49;
  v49[1] = a1;
  HMLockObject(a1);
  if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v49);
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (NotifyShell **)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v17 = *(_QWORD *)(v11 + 16);
    v18 = *(struct tagQ **)(v17 + 432);
    if ( *(struct tagQ **)(gptiCurrent + 432LL) == v18 )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx(
        (struct tagTHREADINFO *)v17,
        v18,
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
    PushW32ThreadLock(v7, &v47, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v19 = *v10;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v45 = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = &v45;
    *((_QWORD *)&v45 + 1) = v19;
    HMLockObject(v19);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v10, *(unsigned int *)(v7 + 192), v6);
    ThreadUnlock1(v22, v21, v23);
    v4 = a3;
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, &v47, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v25 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v26 = v25;
    if ( v25 )
    {
      v27 = *v25;
      if ( *v25 )
      {
        v28 = IsTooltipHittest(a1, (unsigned __int16)a2);
        CurrentThread = KeGetCurrentThread();
        v30 = v28;
        if ( v28 )
        {
          v35 = W32GetThreadWin32Thread((__int64)CurrentThread);
          *(_QWORD *)&v45 = *(_QWORD *)(v35 + 416);
          *(_QWORD *)(v35 + 416) = &v45;
          *((_QWORD *)&v45 + 1) = v27;
          HMLockObject(v27);
          v36 = *v26;
          v26[6] = v30;
          if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v36, 0LL, 0LL, 0LL, 0, 0, 1175);
            v37 = xxxShowTooltip((struct tagTOOLTIPWND *)v26);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v26, 1, *((_DWORD *)v26 + 2));
            v37 = 1;
          }
          if ( v37 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v31 = W32GetThreadWin32Thread((__int64)CurrentThread);
          *(_QWORD *)&v45 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v45;
          *((_QWORD *)&v45 + 1) = v27;
          HMLockObject(v27);
          xxxResetTooltip((struct tagTOOLTIPWND *)v26);
        }
        ThreadUnlock1(v33, v32, v34);
        v10 = (NotifyShell **)(v7 + 184);
      }
    }
  }
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)v7, (const struct tagDESKTOP *)0x40) )
  {
    if ( (struct tagWND *)v11 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_8;
      v24 = a1;
    }
    else
    {
      v24 = *v10;
      if ( !*v10 )
      {
LABEL_25:
        if ( a2 - 10 <= 1
          && !ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)8) )
        {
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)a2, v41);
        }
        goto LABEL_8;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v24, v12);
    goto LABEL_25;
  }
LABEL_8:
  if ( (struct tagWND *)v11 != a1 )
  {
    v44[0] = v10;
    v44[1] = a1;
    HMAssignmentLock(v44);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        if ( ActiveTrackPwnd )
        {
          v43 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v43, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(&v47);
  return ThreadUnlock1(v14, v13, v15);
}
