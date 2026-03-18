/*
 * XREFs of xxxMNStartMenu @ 0x1C022219C
 * Callers:
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     xxxGetSysMenu @ 0x1C007C474 (xxxGetSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C00FB424 (ThreadLockMenuNoModify.c)
 *     MNPositionSysMenu @ 0x1C014AD98 (MNPositionSysMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C0221338 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxUserModeCallback @ 0x1C02335F8 (xxxUserModeCallback.c)
 *     LockPopupMenu @ 0x1C0236620 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C023A63C (xxxMNReleaseCapture.c)
 *     xxxMNSetCapture @ 0x1C023AFB4 (xxxMNSetCapture.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4 (xxxMNRecomputeBarIfNeeded.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(__int64 *a1, __int64 a2, int a3)
{
  BOOL v6; // edi
  _DWORD **v7; // rax
  unsigned __int64 *v8; // r14
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct tagMENU *InitMenuParam; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 SysMenu; // rax
  struct tagMENU *v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // r9d
  __int64 CurrentProcessWin32Process; // r15
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD v34[2]; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 *v35; // [rsp+40h] [rbp-19h]
  __int128 v36; // [rsp+48h] [rbp-11h] BYREF
  __int64 v37; // [rsp+58h] [rbp-1h]
  _QWORD v38[3]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v39; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v40; // [rsp+88h] [rbp+2Fh]
  int v41; // [rsp+C0h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v34, 0LL);
  v6 = 0;
  v37 = 0LL;
  v40 = 0LL;
  v7 = (_DWORD **)*a1;
  v35 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  if ( (**v7 & 0x8000) != 0 || !*(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    goto LABEL_45;
  v8 = *(unsigned __int64 **)(*(_QWORD *)*a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v36;
  *((_QWORD *)&v36 + 1) = v8;
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
    v41 = 0;
    InitMenuParam = xxxGetInitMenuParam((struct tagWND *)v8, &v41);
    SmartObjStackRefBase<tagMENU>::operator=(v34, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v34) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      ThreadUnlock1(v15, v14, v16);
      goto LABEL_45;
    }
    LockPopupMenu(a1, *(_QWORD *)*a1 + 40LL, v34);
    v11 = v41 != 0 ? 4 : 0;
    **(_DWORD **)*a1 = v11 | **(_DWORD **)*a1 & 0xFFFFFFFB;
    if ( !v41 )
    {
      SysMenu = xxxGetSysMenu((struct tagWND *)v8, 0);
      v35 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v34, SysMenu);
      LockPopupMenu(a1, *(_QWORD *)*a1 + 48LL, v34);
    }
  }
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (**(_DWORD **)*a1 >> 1)) & 2;
  if ( (**(_DWORD **)*a1 & 0x800) == 0 )
  {
    if ( (**(_DWORD **)*a1 & 8) != 0 && (**(_DWORD **)*a1 & 4) != 0 )
      v18 = xxxGetInitMenuParam((struct tagWND *)v8, 0LL);
    else
      v18 = *(struct tagMENU **)(*(_QWORD *)*a1 + 40LL);
    v35 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v34, (__int64)v18);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v34) )
    {
      v19 = 0LL;
    }
    else
    {
      v20 = v35;
      if ( !v35 )
        v20 = *(unsigned __int64 **)v34[0];
      v19 = *v20;
    }
    xxxSendMessage((unsigned __int64)v8, 0x116u, v19, 0LL);
  }
  if ( (**(_DWORD **)*a1 & 8) == 0 )
  {
    v21 = *a1;
    if ( (**(_DWORD **)*a1 & 4) != 0 )
    {
      v22 = *(_QWORD **)(*(_QWORD *)v21 + 40LL);
LABEL_27:
      MNPositionSysMenu((__int64)v8, v22, v12);
      goto LABEL_28;
    }
    if ( (**(_DWORD **)v21 & 1) != 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
    {
      ThreadLockMenuNoModify(*(_QWORD *)(*(_QWORD *)*a1 + 40LL), &v39);
      SmartObjStackRefBase<tagMENU>::Init(v38, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
      v38[2] = 0LL;
      xxxMNRecomputeBarIfNeeded(v8, v38);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v38);
      v23 = *(_QWORD *)(*((_QWORD *)&v39 + 1) + 40LL);
      *(_DWORD *)(v23 + 40) &= ~0x200u;
      ThreadUnlock1(v23, v24, v25);
      v22 = *(_QWORD **)(*(_QWORD *)*a1 + 48LL);
      goto LABEL_27;
    }
  }
LABEL_28:
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
    if ( (*(_DWORD *)(v26 + 40) & 0x20000000) == 0 )
      goto LABEL_37;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26, v11, v12);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100000) == 0 )
    {
      if ( (int)xxxUserModeCallback(99, 0, 0, v27) < 0 )
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
    v29 = -1;
  else
    v29 = (**(_DWORD **)*a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, (struct tagWND *)v8, v29, 0, 0);
  ThreadUnlock1(v31, v30, v32);
  v6 = (**(_DWORD **)*a1 & 0x8000) == 0;
LABEL_45:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v34);
  return v6;
}
