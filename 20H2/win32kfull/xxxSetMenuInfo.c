/*
 * XREFs of xxxSetMenuInfo @ 0x1C00341B4
 * Callers:
 *     xxxSetMenuInfo @ 0x1C00341B4 (xxxSetMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1C0078CB0 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C01170B0 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C00341B4 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNGetPopupFromMenu @ 0x1C00363BC (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02492B4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  int v4; // r12d
  int v5; // r13d
  int v6; // eax
  unsigned int v7; // r15d
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  _QWORD *v23; // rcx
  __int64 v25; // rsi
  __int64 ThreadWin32Thread; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v33[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v34; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+40h] [rbp-20h]
  _BYTE v36[16]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v37; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, 0LL);
  v4 = 0;
  v5 = 0;
  v35 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  v34 = 0LL;
  v7 = 1;
  if ( (v6 & 0x10) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 1) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = *(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(a2 + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    v5 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v7 = 5;
  }
  v8 = *(_DWORD *)(a2 + 4);
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 48LL) = *(_DWORD *)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( (v8 & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 16LL) = *(_QWORD *)(a2 + 32);
    v8 = *(_DWORD *)(a2 + 4);
  }
  if ( v8 < 0 )
  {
    v9 = a1[2];
    v10 = 0;
    if ( !v9 )
      v9 = (_QWORD *)**a1;
    v11 = MNGetpItemFromIndex(v9, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > v12 )
    {
      do
      {
        if ( !v11 )
          break;
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v36, v13);
          v37 = 0LL;
          v25 = *(_QWORD *)(v11 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v34 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v34;
          *((_QWORD *)&v34 + 1) = v25;
          if ( v25 )
            HMLockObject(v25);
          xxxSetMenuInfo(v36, a2);
          ThreadUnlock1(v28, v27, v29);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
        }
        v14 = a1[2];
        ++v10;
        if ( !v14 )
          v14 = (_QWORD *)**a1;
        v11 = MNGetpItemFromIndex(v14, v10);
      }
      while ( v10 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
  }
  else if ( !v5 )
  {
    goto LABEL_25;
  }
  v15 = a1[2];
  if ( !v15 )
    v15 = (_QWORD *)**a1;
  v16 = MNGetPopupFromMenu(v15, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v33, v16);
  if ( *(_QWORD *)v33[0] )
    xxxMNUpdateShownMenu(v33, 0LL, v7);
LABEL_25:
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v22 )
      v18 = *v22;
  }
  if ( v33[0] != gSmartObjNullRef && !--*(_DWORD *)(v33[0] + 8LL) )
  {
    if ( *(_BYTE *)(v33[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v33[0]);
  }
  v23 = *(_QWORD **)(v18 + 1472);
  if ( v23 )
    *(_QWORD *)(v18 + 1472) = *v23;
  return 1LL;
}
