/*
 * XREFs of _xxxEndDeferWindowPosEx@8 @ 0x34486
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxProcessSetWindowPosEvent@4 @ 0x16FEA (_xxxProcessSetWindowPosEvent@4.c)
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 *     _NtUserEndDeferWindowPosEx@8 @ 0xA42C4 (_NtUserEndDeferWindowPosEx@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     _xxxSetTrayWindow@8 @ 0x13758 (_xxxSetTrayWindow@8.c)
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?xxxSwpActivate@@YGHPAUtagWND@@@Z @ 0x1A230 (-xxxSwpActivate@@YGHPAUtagWND@@@Z.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     _GreClientRgnUpdatedStable@4 @ 0x334D6 (_GreClientRgnUpdatedStable@4.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _DestroySMWP@4 @ 0x349E4 (_DestroySMWP@4.c)
 *     ?ValidateSmwp@@YGHPAUtagSMWP@@PAH@Z @ 0x35120 (-ValidateSmwp@@YGHPAUtagSMWP@@PAH@Z.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50 (-ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxDoSyncPaint@8 @ 0x7348A (_xxxDoSyncPaint@8.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     ?AsyncWindowPos@@YGXPAUtagSMWP@@@Z @ 0xA4AAA (-AsyncWindowPos@@YGXPAUtagSMWP@@@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __fastcall xxxEndDeferWindowPosEx(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int result; // eax
  _DWORD *v16; // edi
  int v17; // eax
  bool v18; // zf
  int *ThreadWin32Thread; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // edx
  PKTHREAD v37; // edi
  int *v38; // eax
  int v39; // eax
  struct tagSMWP *v40; // [esp+0h] [ebp-68h]
  struct tagSMWP *v41; // [esp+0h] [ebp-68h]
  struct tagSMWP *v42; // [esp+0h] [ebp-68h]
  int *v43; // [esp+4h] [ebp-64h]
  struct tagWND *v44; // [esp+4h] [ebp-64h]
  int v45; // [esp+4h] [ebp-64h]
  int v46; // [esp+Ch] [ebp-5Ch]
  int v47; // [esp+Ch] [ebp-5Ch]
  int v48; // [esp+Ch] [ebp-5Ch]
  int v49; // [esp+10h] [ebp-58h]
  int v51; // [esp+1Ch] [ebp-4Ch]
  int v52; // [esp+24h] [ebp-44h]
  PKTHREAD CurrentThread; // [esp+28h] [ebp-40h]
  int *v54; // [esp+28h] [ebp-40h]
  int v55; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v56; // [esp+30h] [ebp-38h]
  int v57; // [esp+38h] [ebp-30h] BYREF
  int v58; // [esp+3Ch] [ebp-2Ch]
  int (__stdcall *v59)(int); // [esp+40h] [ebp-28h]
  int v60; // [esp+44h] [ebp-24h] BYREF
  int v61; // [esp+48h] [ebp-20h]
  int v62; // [esp+4Ch] [ebp-1Ch]
  int v63; // [esp+50h] [ebp-18h] BYREF
  int v64; // [esp+54h] [ebp-14h]
  int v65; // [esp+58h] [ebp-10h]
  _DWORD v66[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v2 = a1;
  v63 = 0;
  v3 = 0;
  v64 = 0;
  v65 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  if ( !*(_DWORD *)(a1 + 16) || !ValidateSmwp(v40, v43) )
    goto LABEL_93;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_7:
    v6 = 0;
  }
  else
  {
    v6 = *(_DWORD **)(v2 + 24);
    while ( !*v6 )
    {
      ++v5;
      v6 += 32;
      if ( v5 >= v4 )
        goto LABEL_7;
    }
  }
  if ( !v6 )
    goto LABEL_93;
  v7 = *(_DWORD *)(_HMObjectFromHandle(*v6) + 56);
  v49 = v7;
  if ( !v7 || !*(_DWORD *)(v7 + 12) )
    goto LABEL_93;
  v8 = 0;
  v46 = 0;
  if ( *(int *)(v2 + 16) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v2 + 24);
      v52 = v10;
      if ( *(_DWORD *)(v9 + v10) && *(_DWORD *)(v9 + v10 + 116) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(_HMObjectFromHandle(*(_DWORD *)(v9 + v10)) + 20) + 148) != *(_DWORD *)(v9 + v10 + 116) )
        {
          v11 = _HMObjectFromHandle(*(_DWORD *)(v9 + *(_DWORD *)(v2 + 24)));
          SetWindowGroupBand(v11, 0);
          v3 = 0;
        }
        *(_DWORD *)(v9 + *(_DWORD *)(v2 + 24) + 116) = 0;
        v8 = v46;
      }
      ++v8;
      v9 += 128;
      v46 = v8;
    }
    while ( v8 < *(_DWORD *)(v2 + 16) );
    v7 = v49;
  }
  if ( a2 )
    AsyncWindowPos(v41);
  v12 = *(_DWORD *)(v7 + 12);
  v13 = 0;
  if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 4);
    if ( v14 )
      v13 = *(_DWORD *)(v14 + 12);
  }
  if ( v7 == v13 )
  {
    result = (int)ZOrderByOwner((struct tagSMWP *)v2);
    v2 = result;
    if ( !result )
      return result;
    if ( a2 )
    {
      v16 = *(_DWORD **)(result + 24);
      v17 = *(_DWORD *)(result + 16);
      while ( 1 )
      {
        v47 = --v17;
        if ( v17 < 0 )
          break;
        if ( *v16 )
        {
          v18 = ValidateWindowPos(v41, v44) == 0;
          v17 = v47;
          if ( v18 )
            *v16 = 0;
        }
        v16 += 32;
      }
      AsyncWindowPos(v41);
    }
  }
  v60 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v60;
  v61 = v49;
  HMLockObject(v49);
  if ( (*(_BYTE *)(v2 + 12) & 2) != 0 )
  {
    HMLockObject(v2);
    PushW32ThreadLock(v2, &v57, UnrefAndDestroySMWP);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) == 0 )
      v20 = 0;
    else
      v20 = *ThreadWin32Thread;
    v57 = *(_DWORD *)(v20 + 8);
    *(_DWORD *)(v20 + 8) = &v57;
    v58 = v2;
    v59 = DestroySMWP;
  }
  ++*(_DWORD *)(_gptiCurrent + 676);
  *(_DWORD *)(v2 + 12) |= 4u;
  if ( xxxCalcValidRects(v41, (HWND *)v44) )
  {
    LOBYTE(v21) = 1;
    v22 = HMValidateHandleNoSecure(0, v21);
    v63 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v63;
    v56 = (_DWORD *)v22;
    v64 = v22;
    if ( v22 )
      HMLockObject(v22);
    v55 = *(_DWORD *)(_gptiCurrent + 508);
    if ( (zzzBltValidBits((_DWORD *)v2) & 2) != 0 )
      GenerateMouseMove(0);
    if ( (*(_BYTE *)(v2 + 12) & 1) != 0 )
    {
      v23 = *(_DWORD *)(v2 + 16);
      if ( v23 )
      {
        v24 = v23 << 7;
        do
        {
          v25 = *(_DWORD *)(v2 + 24);
          v24 -= 128;
          v48 = v24;
          v52 = v23 - 1;
          v26 = *(_DWORD *)(v24 + v25);
          if ( v26 && (*(_DWORD *)(v24 + v25 + 24) & 0xF0000000) != 0 )
          {
            LOBYTE(v25) = 1;
            v27 = HMValidateHandleNoSecure(v26, v25);
            v54 = (int *)v27;
            if ( v27 )
            {
              v66[0] = *(_DWORD *)(_gptiCurrent + 228);
              v66[2] = 0;
              *(_DWORD *)(_gptiCurrent + 228) = v66;
              v66[1] = v27;
              HMLockObject(v27);
              v28 = *(_DWORD *)(v2 + 24);
              v29 = v48;
              if ( (*(_DWORD *)(v48 + v28 + 24) & 0x10000000) != 0 )
              {
                if ( (*(_BYTE *)(v48 + v28 + 120) & 8) != 0 )
                {
                  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 21, *(_DWORD *)(v48 + v28));
                }
                else
                {
                  PostShellHookMessages();
                  xxxCallHook(0, 0xAu, (int)v42, v45);
                }
                v29 = v48;
              }
              v30 = *(_DWORD *)(v2 + 24);
              if ( (*(_DWORD *)(v30 + v29 + 24) & 0x20000000) != 0 )
              {
                PostShellHookMessages();
                xxxCallHook(0, 0xAu, (int)v42, v45);
                v30 = *(_DWORD *)(v2 + 24);
                v29 = v48;
              }
              if ( (*(_DWORD *)(v29 + v30 + 24) & 0x40000000) != 0 )
              {
                v31 = *(_DWORD *)(v29 + v30 + 120);
                if ( (v31 & 8) != 0 )
                {
                  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 23, *(_DWORD *)(v29 + v30));
                }
                else
                {
                  if ( (v31 & 0x10) == 0 )
                  {
                    xxxSetTrayWindow(v54[3], v54);
                    v30 = *(_DWORD *)(v2 + 24);
                    v29 = v48;
                  }
                  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 19, *(_DWORD *)(v29 + v30));
                }
              }
              if ( *(int *)(v48 + *(_DWORD *)(v2 + 24) + 24) < 0 )
                xxxSetTrayWindow(*(_DWORD *)(_gptiCurrent + 248), (int *)1);
              ThreadUnlock1();
            }
            v24 = v48;
          }
          v23 = v52;
        }
        while ( v52 );
      }
    }
    if ( _gptiCurrent == _gptiForeground )
    {
      if ( v55 )
      {
        if ( !*(_DWORD *)(_gptiCurrent + 508) && !IsImmersiveAppRestricted(*(_DWORD *)(_gptiCurrent + 232)) )
        {
          *(_DWORD *)(_gptiCurrent + 264) |= 0x20u;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v32) = 4;
            WPP_RECORDER_SF_q(v33, v32, 2u, 10, (int)&WPP_567953575c7d35a2d5e9b6ebfede4bc7_Traceguids, _gptiCurrent);
          }
        }
      }
    }
    v51 = 0;
    if ( v56 )
      v51 = xxxSwpActivate(v56);
    ThreadUnlock1();
    if ( v51 )
    {
      v34 = *(_DWORD *)(_gptiCurrent + 236);
      v35 = *(_DWORD *)(v34 + 64);
      if ( v35 )
      {
        SetOrClrWF(0, v35, 0x101u, 1);
        v34 = *(_DWORD *)(_gptiCurrent + 236);
      }
      v36 = *(_DWORD *)(v34 + 68);
      if ( v36 )
        SetOrClrWF(0, v36, 0x101u, 1);
    }
    xxxSendChangedMsgs(v42);
  }
  v18 = (*(_DWORD *)(_gptiCurrent + 676))-- == 1;
  if ( v18 )
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    GreClientRgnUpdatedStable((int)v42);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  }
  v37 = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    v38 = (int *)PsGetThreadWin32Thread(v37);
    if ( v38 )
      v3 = *v38;
  }
  *(_DWORD *)(v3 + 8) = v58;
  ThreadUnlock1();
  if ( v52 )
  {
    v39 = HMUnlockObject(v2);
    if ( v39 )
      DestroySMWP(v39);
  }
  else
  {
LABEL_93:
    DestroySMWP(v2);
  }
  return 1;
}
