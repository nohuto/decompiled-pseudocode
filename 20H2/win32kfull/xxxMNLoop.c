/*
 * XREFs of xxxMNLoop @ 0x1C0234598
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     SlowAppThreadInShellFrame @ 0x1C0029684 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x1C002CDA8 (IsShellFrameHangResilient.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     xxxGetSysMenuPtr @ 0x1C005C1EC (xxxGetSysMenuPtr.c)
 *     _GetMenuState @ 0x1C007C6EC (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0108870 (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C0119040 (FindNCHit.c)
 *     _IsChild @ 0x1C0122214 (_IsChild.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E23E8 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E673C (xxxCallMsgFilter.c)
 *     MNFlushDestroyedPopups @ 0x1C0221670 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0233850 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C023A63C (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  int v9; // eax
  __int16 KeyState; // ax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 *v19; // rax
  int v20; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  struct _LARGE_STRING *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  struct tagTHREADINFO *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 SysMenuPtr; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int128 v41; // [rsp+38h] [rbp-29h] BYREF
  __int64 v42; // [rsp+48h] [rbp-19h]
  _QWORD v43[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1h]
  __int64 v45[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v46; // [rsp+78h] [rbp+17h]
  __int128 v47; // [rsp+88h] [rbp+27h]
  int v48; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v42 = 0LL;
  *(_OWORD *)v45 = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x40u;
  v9 = *(_DWORD *)(a2 + 8);
  if ( (v9 & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v11 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v11 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v12 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v41 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v41;
        *((_QWORD *)&v41 + 1) = v12;
        HMLockObject(v12);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v14 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v14 = 0LL;
        xxxSendNotifyMessage(*(_QWORD *)(**a1 + 8), 0x212u, v14, 0LL, 1);
        ThreadUnlock1(v16, v15, v17);
      }
      goto LABEL_84;
    }
    if ( (*v11 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_84:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage(v45, 0LL, 0x200u, 0x200u, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v46 = 2LL;
      v18 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v46 = 1LL;
      v18 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v45[1]) = v18;
    v19 = *a1;
    *((_QWORD *)&v46 + 1) = a3;
    if ( *(_QWORD *)(*v19 + 16) )
      v45[0] = **(_QWORD **)(**a1 + 16);
    else
      v45[0] = 0LL;
    xxxHandleMenuMessages((__int64)v45, a2, a1);
    v9 = *(_DWORD *)(a2 + 8);
  }
  if ( (v9 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_84;
      if ( !(unsigned int)xxxInternalGetMessage(v45, 0LL, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v22 != *(_QWORD *)(**a1 + 8)
          && (!v22
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_84;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v23 = v45[1];
      if ( LODWORD(v45[1]) == 515 )
        break;
LABEL_38:
      if ( v23 == 513 || v23 == 516 || v23 == 161 || v23 == 164 )
      {
        v24 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      v24 = 0;
      if ( !(unsigned int)xxxInternalGetMessage(v45, 0LL, v45[1], v45[1], 1, 0) )
      {
        v25 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v25 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v25 & 0xFFDFFFFF;
LABEL_60:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_84;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v26 = *(_QWORD *)(**a1 + 8);
              v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v41 = *(_QWORD *)(v27 + 416);
              *(_QWORD *)(v27 + 416) = &v41;
              *((_QWORD *)&v41 + 1) = v26;
              HMLockObject(v26);
              if ( *(_QWORD *)(**a1 + 56) )
                v28 = **(struct _LARGE_STRING ***)(**a1 + 56);
              else
                v28 = 0LL;
              xxxSendMessage(*(_QWORD *)(**a1 + 8), 0x121u, 2uLL, v28);
              ThreadUnlock1(v30, v29, v31);
            }
            v5 = 0;
          }
          else
          {
            v32 = *(_QWORD *)(a2 + 96) == 0LL;
            v48 = 0;
            xxxWaitMessageEx(15615LL, !v32, (enum SLEEP_STATUS *)&v48);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v48 )
              {
                v33 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v33 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v33, v48 == 2, 0);
              }
            }
          }
          goto LABEL_75;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v45, 2) )
      {
        if ( v24 )
          xxxInternalGetMessage(v45, 0LL, v45[1], v45[1], 1, 0);
LABEL_59:
        v5 = 1;
        goto LABEL_75;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v45, a2, a1) )
      {
        xxxTranslateMessage((__int64)v45, 0);
        xxxDispatchMessage(v45);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x40) != 0 )
      {
        goto LABEL_84;
      }
      if ( LODWORD(v45[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v45[1]) != 275 && LODWORD(v45[1]) != 15 )
        goto LABEL_59;
LABEL_75:
      v9 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), SDWORD2(v46)) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v43, 0LL);
      v44 = 0LL;
      xxxInternalGetMessage(v45, 0LL, v45[1], v45[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_83;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v34 = *(_QWORD **)(**a1 + 8);
        v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v41 = *(_QWORD *)(v35 + 416);
        *(_QWORD *)(v35 + 416) = &v41;
        *((_QWORD *)&v41 + 1) = v34;
        HMLockObject(v34);
        SysMenuPtr = xxxGetSysMenuPtr(v34);
        v44 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v43, SysMenuPtr);
        v37 = v44;
        if ( !v44 )
          v37 = *(_QWORD *)v43[0];
        if ( (GetMenuState(v37, 0xF120u) & 3) == 0 )
          PostMessage((int)v34, 274, 61728, 0);
        ThreadUnlock1(v39, v38, v40);
LABEL_83:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
        goto LABEL_84;
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
    }
LABEL_37:
    v23 = v45[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v20 & 0xFDFFFFFF;
  }
  return 0LL;
}
