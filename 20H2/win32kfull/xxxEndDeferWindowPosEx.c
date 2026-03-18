/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C00472F4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002E46C (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C004B0D8 (xxxSetWindowPosAndBand.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0092950 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowRgn @ 0x1C0105FB0 (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011B490 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0152DE0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D796C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     xxxDoSyncPaint @ 0x1C001ACA0 (xxxDoSyncPaint.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002B4F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     GreClientRgnUpdatedStable @ 0x1C0041C1C (GreClientRgnUpdatedStable.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     DestroySMWP @ 0x1C0047A10 (DestroySMWP.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047B3C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0047B84 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047C30 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00BEF88 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00C8500 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C0109530 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
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
  struct tagWND *v58; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v61; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rcx
  __int64 v66; // rax
  HWND v67; // [rsp+30h] [rbp-49h] BYREF
  __int128 v68; // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall *v69)(_QWORD); // [rsp+48h] [rbp-31h]
  __int64 v70; // [rsp+50h] [rbp-29h]
  __int128 v71; // [rsp+58h] [rbp-21h] BYREF
  __int64 v72; // [rsp+68h] [rbp-11h]
  __int128 v73; // [rsp+70h] [rbp-9h] BYREF
  __int64 v74; // [rsp+80h] [rbp+7h]
  _QWORD v75[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v76; // [rsp+E0h] [rbp+67h] BYREF
  int v77; // [rsp+F0h] [rbp+77h]
  int v78; // [rsp+F8h] [rbp+7Fh]

  v67 = 0LL;
  v76 = 0;
  v3 = a1;
  v77 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_43;
  if ( !(unsigned int)ValidateSmwp(a1, &v76) )
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
          v58 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v7 + *((_QWORD *)v3 + 5)));
          SetWindowGroupBand(v58);
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
    *(_QWORD *)&v71 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v71;
    *((_QWORD *)&v71 + 1) = v5;
    HMLockObject(v5);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      PushW32ThreadLock(v3, &v68, UnrefAndDestroySMWP);
      v77 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v13)
        || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v61),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
      }
      *(_QWORD *)&v68 = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(v15 + 16) = &v68;
      v69 = DestroySMWP;
      *((_QWORD *)&v68 + 1) = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1208LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v67) )
    {
      LOBYTE(v20) = 1;
      v22 = (struct tagWND *)HMValidateHandleNoSecure(v67, v20);
      *(_QWORD *)&v73 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v73;
      *((_QWORD *)&v73 + 1) = v22;
      if ( v22 )
        HMLockObject(v22);
      v23 = *(_DWORD *)(gptiCurrent + 900LL);
      v78 = v23;
      v70 = gptiForeground;
      valid = zzzBltValidBits(v3);
      LOBYTE(v27) = -(valid & 1);
      v28 = (valid & 1) != 0 ? v76 : 0;
      v76 = v28;
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
                  v49 = *(_QWORD *)(gptiCurrent + 416LL);
                  v75[2] = 0LL;
                  v75[0] = v49;
                  *(_QWORD *)(gptiCurrent + 416LL) = v75;
                  v75[1] = v48;
                  HMLockObject(v48);
                  v51 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v46 + v51 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v46 + v51 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x15u, *(_QWORD *)(v46 + v51));
                    }
                    else
                    {
                      PostShellHookMessages(1LL, *(_QWORD *)(v46 + v51));
                      xxxCallHook(1, *(_QWORD *)(v46 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v52 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v52 + v46 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2LL, *(_QWORD *)(v52 + v46));
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
                        xxxSetTrayWindow(*(_QWORD *)(v48 + 24), v48);
                        v52 = *((_QWORD *)v3 + 5);
                      }
                      v54 = 19;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v54, *(_QWORD *)(v46 + v52));
                  }
                  if ( *(int *)(v46 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 456LL), 1LL);
                  ThreadUnlock1(v51, v50, v52);
                }
              }
            }
          }
          while ( v45 );
          v23 = v78;
        }
        v28 = v76;
      }
      if ( gptiCurrent == v70 )
      {
        if ( v23 )
        {
          if ( !*(_DWORD *)(gptiCurrent + 900LL)
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
          {
            *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
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
        xxxDoSyncPaint(v5, 4u);
      ThreadUnlock1(v27, v25, v26);
      if ( v29 )
      {
        v55 = *(_QWORD *)(gptiCurrent + 432LL);
        v56 = *(_QWORD *)(v55 + 120);
        if ( v56 )
        {
          SetOrClrWF(0LL, v56, 257LL, 1LL);
          v55 = *(_QWORD *)(gptiCurrent + 432LL);
        }
        v57 = *(_QWORD *)(v55 + 128);
        if ( v57 )
          SetOrClrWF(0LL, v57, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v3);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1208LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v31 = KeGetCurrentThread();
    v32 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v21)
      || (v63 = PsGetCurrentProcess(v34, v33, v35),
          v64 = PsGetProcessSessionIdEx(v63),
          v66 = PsGetCurrentThreadProcess(v65),
          v64 == (unsigned int)PsGetProcessSessionIdEx(v66)) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v31);
      if ( v36 )
        v32 = *v36;
    }
    *(_QWORD *)(v32 + 16) = v68;
    ThreadUnlock1(v38, v37, v39);
    if ( v77 )
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
        if ( *(_QWORD *)v42 && !(unsigned int)ValidateWindowPos(v42, 0LL) )
          *(_QWORD *)v42 = 0LL;
        v42 = (struct tagCVR *)((char *)v42 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_17;
  }
  return result;
}
