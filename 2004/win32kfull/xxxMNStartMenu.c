/*
 * XREFs of xxxMNStartMenu @ 0x1C022302C
 * Callers:
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     ThreadLockMenuNoModify @ 0x1C005E1E4 (ThreadLockMenuNoModify.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MNPositionSysMenu @ 0x1C01487A8 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02221C8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C0234488 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C02374B0 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023B4CC (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C023BE44 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024FDDC (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  BOOL v6; // edi
  _DWORD **v7; // rax
  unsigned __int64 *v8; // r14
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ecx
  __int64 v11; // r8
  struct tagMENU *InitMenuParam; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD v33[2]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 *v34; // [rsp+40h] [rbp-19h]
  __int128 v35; // [rsp+48h] [rbp-11h] BYREF
  __int64 v36; // [rsp+58h] [rbp-1h]
  _QWORD v37[3]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v38; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+88h] [rbp+2Fh]
  int v40; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v6 = 0;
  v36 = 0LL;
  v39 = 0LL;
  v7 = (_DWORD **)*a1;
  v34 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_45;
  v8 = *(unsigned __int64 **)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
  *((_QWORD *)&v35 + 1) = v8;
  if ( v8 )
    HMLockObject(v8);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v10 = *(_DWORD *)(a2 + 8) & 0xFFFFFFBF | ((_GetKeyState(1LL) & 0x8000u) != 0LL ? 0x40 : 0);
  *(_DWORD *)(a2 + 8) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(v10 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage((unsigned __int64)v8, 0x20u, *v8, (struct _LARGE_STRING *)2);
  if ( (**(_DWORD **)*a1 & 1) != 0 )
  {
    v40 = 0;
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v8, &v40);
    SmartObjStackRefBase<tagMENU>::operator=(v33, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v14, v13, v15);
      goto LABEL_45;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v33);
    **(_DWORD **)*a1 = (v40 != 0 ? 4 : 0) | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v40 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v8, 0);
      v34 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v33, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v33);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v17 = xxxGetInitMenuParam((struct tagWND *)v8, 0LL);
    else
      v17 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v34 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v33, (__int64)v17);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v33) )
    {
      v18 = 0LL;
    }
    else
    {
      v19 = v34;
      if ( !v34 )
        v19 = *(unsigned __int64 **)v33[0];
      v18 = *v19;
    }
    xxxSendMessage((unsigned __int64)v8, 0x116u, v18, 0LL);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v20 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v21 = *(_QWORD **)(*(_QWORD *)v20 + 40LL);
LABEL_27:
      MNPositionSysMenu((__int64)v8, v21, v11);
      goto LABEL_28;
    }
    if ( (**(_DWORD **)v20 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), &v38);
      SmartObjStackRefBase<tagMENU>::Init(v37, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v37[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v8, v37);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v37);
      v22 = *(_QWORD *)(*((_QWORD *)&v38 + 1) + 40LL);
      *(_DWORD *)(v22 + 40) &= ~0x200u;
      ThreadUnlock1(v22, v23, v24);
      v21 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v25 + 40) & 0x20000000) == 0 )
      goto LABEL_37;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v26) < 0 )
      {
LABEL_37:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x10000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x8000000) != 0 )
          *(_DWORD *)(a2 + 8) |= 0x20000u;
        goto LABEL_41;
      }
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100000u;
    }
    *(_DWORD *)(a2 + 8) |= 0x400u;
    goto LABEL_37;
  }
LABEL_41:
  if ( (**(_DWORD **)*a1 & 4) != 0 )
    v28 = -1;
  else
    v28 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (struct tagWND *)v8, v28, 0, 0);
  ThreadUnlock1(v30, v29, v31);
  v6 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_45:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v33);
  return v6;
}
