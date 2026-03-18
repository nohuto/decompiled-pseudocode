/*
 * XREFs of _xxxMNLoop@16 @ 0x195C44
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     _IsShellFrameHangResilient@4 @ 0xAEC08 (_IsShellFrameHangResilient@4.c)
 *     __IsChild@8 @ 0xAEE18 (__IsChild@8.c)
 *     __GetMenuState@12 @ 0xBFC42 (__GetMenuState@12.c)
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 */

int __fastcall xxxMNLoop(int *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // eax
  bool v8; // sf
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  BOOL v13; // ecx
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // esi
  PKTHREAD v22; // eax
  int v23; // eax
  int v24; // edx
  struct _LIST_ENTRY *v25; // eax
  _DWORD *v26; // edi
  PKTHREAD v27; // eax
  int v28; // eax
  int SysMenuPtr; // eax
  int v30; // ecx
  int v31[7]; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-28h] BYREF
  int v33; // [esp+30h] [ebp-20h]
  int v34; // [esp+34h] [ebp-1Ch] BYREF
  _DWORD *v35; // [esp+38h] [ebp-18h]
  int v36; // [esp+3Ch] [ebp-14h]
  _DWORD *v37; // [esp+40h] [ebp-10h]
  int v38; // [esp+44h] [ebp-Ch] BYREF
  int v39; // [esp+48h] [ebp-8h]
  int v40; // [esp+4Ch] [ebp-4h]

  v39 = 1;
  memset(v31, 0, sizeof(v31));
  v5 = a2;
  v34 = 0;
  v37 = a2;
  a2[1] |= 4u;
  a2[5] = 0;
  v35 = 0;
  v36 = 0;
  v6 = _gptiCurrent;
  v40 = _gptiCurrent;
  a2[2] = *(_DWORD *)(_gptiCurrent + 416);
  a2[3] = *(_DWORD *)(_gptiCurrent + 420);
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x40u;
  v7 = a2[1];
  if ( (v7 & 1) == 0 )
  {
    v8 = (_GetKeyState(((**(_BYTE **)*a1 & 0x40) != 0) + 1) & 0x8000u) != 0;
    v9 = *(_DWORD **)*a1;
    if ( !v8 )
    {
      if ( (*v9 & 0x800) == 0 && *(_DWORD *)(*(_DWORD *)*a1 + 4) )
      {
        v10 = *(_DWORD **)(*(_DWORD *)*a1 + 4);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v34 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v34;
        v35 = v10;
        HMLockObject(v10);
        v13 = (**(_BYTE **)*a1 & 8) != 0 && (**(_BYTE **)*a1 & 4) == 0;
        xxxSendNotifyMessage(*(_DWORD *)(*(_DWORD *)*a1 + 4), 0x212u, (struct tagWND *)v13, 0, 1u);
        ThreadUnlock1();
        v5 = v37;
      }
      goto LABEL_85;
    }
    if ( (*(_BYTE *)v9 & 8) == 0 && !xxxMNStartMenu(a1, (int)v5, -1) )
      goto LABEL_85;
    if ( (**(_BYTE **)*a1 & 0x40) != 0 )
    {
      v31[2] = 2;
      v14 = 2 * (a4 != 0) + 516;
    }
    else
    {
      v31[2] = 1;
      v14 = 2 * (a4 != 0) + 513;
    }
    v31[1] = v14;
    v31[3] = a3;
    if ( *(_DWORD *)(*(_DWORD *)*a1 + 8) )
      v31[0] = **(_DWORD **)(*(_DWORD *)*a1 + 8);
    else
      v31[0] = 0;
    xxxHandleMenuMessages(v31, v5, (int)a1);
    v7 = v5[1];
  }
  if ( (v7 & 0x100) != 0 )
  {
    xxxMNReleaseCapture(v5);
    v15 = v5[1];
    if ( (v15 & 0x2000000) != 0 )
    {
      --guSFWLockCount;
      v5[1] = v15 & 0xFDFFFFFF;
    }
    return 0;
  }
  if ( (v7 & 4) == 0 )
    goto LABEL_85;
  while ( 1 )
  {
    if ( !xxxInternalGetMessage(v31, 0, 0, 2u, 0) )
      goto LABEL_47;
    if ( (v5[1] & 4) == 0 )
      goto LABEL_85;
    if ( (**(_DWORD **)*a1 & 0x8000) != 0 )
      goto LABEL_85;
    if ( (**(_BYTE **)*a1 & 8) == 0 )
    {
      v17 = *(_DWORD *)(*(_DWORD *)(v6 + 236) + 64);
      if ( v17 != *(_DWORD *)(*(_DWORD *)*a1 + 4)
        && (!v17 || !_IsChild(*(_DWORD *)(*(_DWORD *)(v6 + 236) + 64), *(_DWORD *)(*(_DWORD *)*a1 + 4))) )
      {
        goto LABEL_85;
      }
    }
    if ( (**(_BYTE **)*a1 & 1) == 0 )
      goto LABEL_39;
    v18 = v31[1];
    if ( v31[1] == 515 )
      break;
LABEL_40:
    if ( v18 == 513 || v18 == 516 || v18 == 161 || v18 == 164 )
    {
      v19 = 1;
      goto LABEL_57;
    }
LABEL_44:
    v19 = 0;
    *(_DWORD *)(v40 + 264) |= (unsigned int)&loc_1FFFFC + 4;
    if ( !xxxInternalGetMessage(v31, (struct tagMSG *)v31[1], v31[1], 1u, 0) )
    {
      v20 = *(_DWORD *)(v40 + 264);
      if ( (((unsigned int)&loc_1FFFFC + 4) & v20) != 0 )
      {
        *(_DWORD *)(v40 + 264) = v20 & 0xFFDFFFFF;
LABEL_47:
        if ( (v5[1] & 4) == 0 || (**(_DWORD **)*a1 & 0x8000) != 0 )
          goto LABEL_85;
        if ( ((unsigned int)&loc_20000 & **(_DWORD **)*a1) != 0 )
        {
          MNFlushDestroyedPopups(*(_DWORD *)*a1);
          **(_DWORD **)*a1 &= ~0x20000u;
        }
        if ( v39 )
        {
          if ( *(_DWORD *)(*(_DWORD *)*a1 + 4) )
          {
            v21 = *(_DWORD **)(*(_DWORD *)*a1 + 4);
            v22 = KeGetCurrentThread();
            v23 = W32GetThreadWin32Thread(v22);
            v34 = *(_DWORD *)(v23 + 228);
            *(_DWORD *)(v23 + 228) = &v34;
            v35 = v21;
            HMLockObject(v21);
            if ( *(_DWORD *)(*(_DWORD *)*a1 + 28) )
              v24 = **(_DWORD **)(*(_DWORD *)*a1 + 28);
            else
              v24 = 0;
            xxxSendMessage(*(void **)(*(_DWORD *)*a1 + 4), 2u, v24);
            ThreadUnlock1();
            v5 = v37;
          }
          v39 = 0;
        }
        else
        {
          v38 = 0;
          xxxWaitMessageEx((void *)0x3CFF, (int)&v38);
          if ( IsShellFrameHangResilient(_gptiCurrent) )
          {
            if ( v38 )
            {
              v25 = (struct _LIST_ENTRY *)SlowAppThreadInShellFrame(_gptiCurrent, 0, 0, 1);
              if ( v25 )
                TryDetachShellFrame(_gptiCurrent, v25, v38 == 2, 0);
            }
          }
        }
        goto LABEL_77;
      }
    }
    *(_DWORD *)(v40 + 264) &= ~0x200000u;
LABEL_57:
    if ( xxxCallMsgFilter((unsigned int *)v31, 2) )
    {
      if ( v19 )
        xxxInternalGetMessage(v31, (struct tagMSG *)v31[1], v31[1], 1u, 0);
LABEL_69:
      v39 = 1;
      goto LABEL_77;
    }
    if ( !xxxHandleMenuMessages(v31, v5, (int)a1) )
    {
      xxxTranslateMessage((int)v31, 0);
      xxxDispatchMessage((unsigned int *)v31);
    }
    if ( (v5[1] & 4) == 0 || (**(_DWORD **)*a1 & 0x8000) != 0 || (*(_BYTE *)(*(_DWORD *)(v40 + 236) + 284) & 0x40) != 0 )
      goto LABEL_85;
    if ( v31[1] == 280 )
      goto LABEL_47;
    if ( v31[1] != 275 && v31[1] != 15 )
      goto LABEL_69;
LABEL_77:
    if ( (v5[1] & 4) == 0 )
      goto LABEL_85;
    v6 = v40;
  }
  if ( !*(_DWORD *)(*(_DWORD *)*a1 + 4) )
    goto LABEL_44;
  if ( FindNCHit(*(_DWORD **)(*(_DWORD *)*a1 + 4), v31[3]) != 2 )
  {
LABEL_39:
    v18 = v31[1];
    goto LABEL_40;
  }
  SmartObjStackRefBase<tagMENU>::Init(v32, 0);
  v33 = 0;
  xxxInternalGetMessage(v31, (struct tagMSG *)v31[1], v31[1], 1u, 0);
  if ( (v5[1] & 4) == 0 || (**(_DWORD **)*a1 & 0x8000) != 0 )
    goto LABEL_84;
  if ( !*(_DWORD *)(*(_DWORD *)*a1 + 4) )
  {
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
    goto LABEL_39;
  }
  v26 = *(_DWORD **)(*(_DWORD *)*a1 + 4);
  v27 = KeGetCurrentThread();
  v28 = W32GetThreadWin32Thread(v27);
  v34 = *(_DWORD *)(v28 + 228);
  *(_DWORD *)(v28 + 228) = &v34;
  v35 = v26;
  HMLockObject(v26);
  SysMenuPtr = xxxGetSysMenuPtr(v26);
  v33 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v32, SysMenuPtr);
  v30 = v33;
  if ( !v33 )
    v30 = *(_DWORD *)v32[0];
  if ( (_GetMenuState(v30, 0xF120u, v30) & 3) == 0 )
    _PostMessage((int)v26, 274, 61728, 0);
  ThreadUnlock1();
LABEL_84:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
LABEL_85:
  v5[1] &= 0xFFFFFEFB;
  xxxEndMenuLoop((int)v5, *(_DWORD *)*a1);
  xxxMNReleaseCapture(v5);
  xxxInternalGetMessage(v31, (struct tagMSG *)0x200, 0x200u, 2u, 0);
  return v5[5];
}
