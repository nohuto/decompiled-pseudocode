/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C006DEE0
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C003CC7C (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxSetWindowRgn @ 0x1C005BAD0 (xxxSetWindowRgn.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0064780 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C006A7D4 (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011A6C0 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C01505E0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0023BF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetWindowGroupBand @ 0x1C0024248 (SetWindowGroupBand.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     xxxSetTrayWindow @ 0x1C00338B4 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     GreClientRgnUpdatedStable @ 0x1C006A32C (GreClientRgnUpdatedStable.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006DBA8 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006DC54 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006DE98 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C006E5F0 (DestroySMWP.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     xxxDoSyncPaint @ 0x1C00EFEE4 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C01082EC (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0108724 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rdi
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagWND *v22; // r14
  int v23; // ebx
  char valid; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // r15d
  int v29; // ebx
  struct _KTHREAD *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 result; // rax
  struct tagCVR *v42; // rbx
  int v43; // r14d
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rbx
  struct tagWND *v59; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v62; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rax
  HWND v68; // [rsp+30h] [rbp-49h] BYREF
  __int128 v69; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall *v70)(_QWORD); // [rsp+48h] [rbp-31h]
  __int64 v71; // [rsp+50h] [rbp-29h]
  __int128 v72; // [rsp+58h] [rbp-21h] BYREF
  __int64 v73; // [rsp+68h] [rbp-11h]
  __int128 v74; // [rsp+70h] [rbp-9h] BYREF
  __int64 v75; // [rsp+80h] [rbp+7h]
  _QWORD v76[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v77; // [rsp+E0h] [rbp+67h] BYREF
  int v78; // [rsp+F0h] [rbp+77h]
  int v79; // [rsp+F8h] [rbp+7Fh]

  v68 = 0LL;
  v77 = 0;
  v3 = a1;
  v78 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_43;
  if ( !(unsigned int)ValidateSmwp(a1, &v77) )
    goto LABEL_43;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_43;
  v5 = *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v5 || !*(_QWORD *)(v5 + 24) )
    goto LABEL_43;
  v6 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)v3 + 5);
      v9 = *(_QWORD *)(v7 + v8);
      if ( v9 && *(_DWORD *)(v7 + v8 + 152) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(_HMObjectFromHandle(v9) + 40) + 236LL) != *(_DWORD *)(v7 + v8 + 152) )
        {
          v58 = *((_QWORD *)v3 + 5);
          v59 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v7 + v58));
          SetWindowGroupBand(v59, *(_DWORD *)(v7 + v58 + 152), 0);
        }
        *(_DWORD *)(v7 + *((_QWORD *)v3 + 5) + 152) = 0;
      }
      ++v6;
      v7 += 168LL;
    }
    while ( v6 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v10 = *(_QWORD *)(v5 + 24);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 24);
  }
  if ( v5 != v11 )
  {
LABEL_17:
    *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v72;
    *((_QWORD *)&v72 + 1) = v5;
    HMLockObject(v5);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      PushW32ThreadLock((__int64)v3, &v69, (__int64)UnrefAndDestroySMWP);
      v78 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v13)
        || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v62),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
      }
      *(_QWORD *)&v69 = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(v15 + 16) = &v69;
      v70 = DestroySMWP;
      *((_QWORD *)&v69 + 1) = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1200LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v68) )
    {
      LOBYTE(v20) = 1;
      v22 = (struct tagWND *)HMValidateHandleNoSecure(v68, v20);
      *(_QWORD *)&v74 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v74;
      *((_QWORD *)&v74 + 1) = v22;
      if ( v22 )
        HMLockObject(v22);
      v23 = *(_DWORD *)(gptiCurrent + 892LL);
      v79 = v23;
      v71 = gptiForeground;
      valid = zzzBltValidBits((__int64)v3);
      LOBYTE(v27) = -(valid & 1);
      v28 = (valid & 1) != 0 ? v77 : 0;
      v77 = v28;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v45 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v46 = 168 * v45;
          do
          {
            v47 = *((_QWORD *)v3 + 5);
            v46 -= 168LL;
            --v45;
            v27 = *(_QWORD *)(v46 + v47);
            if ( v27 )
            {
              if ( (*(_DWORD *)(v46 + v47 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v25) = 1;
                v48 = HMValidateHandleNoSecure(v27, v25);
                if ( v48 )
                {
                  v49 = *(_QWORD *)(gptiCurrent + 408LL);
                  v76[2] = 0LL;
                  v76[0] = v49;
                  *(_QWORD *)(gptiCurrent + 408LL) = v76;
                  v76[1] = v48;
                  HMLockObject(v48);
                  v51 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v46 + v51 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v46 + v51 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x15u, *(_QWORD *)(v46 + v51));
                    }
                    else
                    {
                      PostShellHookMessages(1uLL, *(_QWORD *)(v46 + v51));
                      xxxCallHook(1, *(_QWORD *)(v46 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v52 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v52 + v46 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2uLL, *(_QWORD *)(v52 + v46));
                    xxxCallHook(2, *(_QWORD *)(v46 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    v52 = *((_QWORD *)v3 + 5);
                  }
                  if ( (*(_DWORD *)(v46 + v52 + 32) & 0x40000000) != 0 )
                  {
                    v53 = *(_DWORD *)(v46 + v52 + 156);
                    if ( (v53 & 8) != 0 )
                    {
                      v54 = 23;
                    }
                    else
                    {
                      if ( (v53 & 0x10) == 0 )
                      {
                        xxxSetTrayWindow(*(_QWORD *)(v48 + 24), (unsigned __int64 *)v48);
                        v52 = *((_QWORD *)v3 + 5);
                      }
                      v54 = 19;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v54, *(_QWORD *)(v46 + v52));
                  }
                  if ( *(int *)(v46 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 448LL), (unsigned __int64 *)1);
                  ThreadUnlock1(v51, v50, v52);
                }
              }
            }
          }
          while ( v45 );
          v23 = v79;
        }
        v28 = v77;
      }
      if ( gptiCurrent == v71 )
      {
        if ( v23 )
        {
          if ( !*(_DWORD *)(gptiCurrent + 892LL)
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
          {
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v25) = 4;
              WPP_RECORDER_SF_q(v27, v25, 2, 10, (__int64)&WPP_567953575c7d35a2d5e9b6ebfede4bc7_Traceguids, gptiCurrent);
            }
          }
        }
      }
      v29 = 0;
      if ( v22 )
        v29 = xxxSwpActivate(v22);
      if ( v28 )
        xxxDoSyncPaint(v5, 4LL);
      ThreadUnlock1(v27, v25, v26);
      if ( v29 )
      {
        v55 = *(_QWORD *)(gptiCurrent + 424LL);
        v56 = *(_QWORD *)(v55 + 120);
        if ( v56 )
        {
          SetOrClrWF(0LL, v56, 257LL, 1LL);
          v55 = *(_QWORD *)(gptiCurrent + 424LL);
        }
        v57 = *(_QWORD *)(v55 + 128);
        if ( v57 )
          SetOrClrWF(0LL, v57, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v3);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1200LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v31 = KeGetCurrentThread();
    v32 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v21)
      || (v64 = PsGetCurrentProcess(v34, v33, v35),
          v65 = PsGetProcessSessionIdEx(v64),
          v67 = PsGetCurrentThreadProcess(v66),
          v65 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v31);
      if ( v36 )
        v32 = *v36;
    }
    *(_QWORD *)(v32 + 16) = v69;
    ThreadUnlock1(v38, v37, v39);
    if ( v78 )
    {
      v44 = HMUnlockObject(v3);
      if ( !v44 )
        return 1LL;
      v40 = v44;
LABEL_44:
      DestroySMWP(v40);
      return 1LL;
    }
LABEL_43:
    v40 = (__int64)v3;
    goto LABEL_44;
  }
  result = (__int64)ZOrderByOwner(v3);
  v3 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( a2 )
    {
      v42 = *(struct tagCVR **)(result + 40);
      v43 = *(_DWORD *)(result + 28);
      while ( --v43 >= 0 )
      {
        if ( *(_QWORD *)v42 && !ValidateWindowPos(v42, 0LL) )
          *(_QWORD *)v42 = 0LL;
        v42 = (struct tagCVR *)((char *)v42 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_17;
  }
  return result;
}
