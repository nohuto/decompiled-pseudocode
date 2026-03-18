/*
 * XREFs of xxxSetMenuInfo @ 0x1C0063014
 * Callers:
 *     xxxLoadSysMenu @ 0x1C005EC0C (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     NtUserThunkedMenuInfo @ 0x1C0115B60 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     MNGetPopupFromMenu @ 0x1C00A287C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 **a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // r12d
  int v6; // r13d
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // eax
  __int64 *v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  _QWORD *v24; // rcx
  __int64 v26; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v35[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 v37; // [rsp+40h] [rbp-20h]
  _BYTE v38[16]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v39; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, 0LL);
  v5 = 0;
  v6 = 0;
  v37 = 0LL;
  v7 = *(_DWORD *)(a2 + 4);
  v36 = 0LL;
  v8 = 1;
  if ( (v7 & 0x10) != 0 )
  {
    v5 = 1;
    v4 = **a1;
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(v4 + 40) + 40LL)) & 0xFC000000;
    v7 = *(_DWORD *)(a2 + 4);
  }
  if ( (v7 & 1) != 0 )
  {
    v5 = 1;
    v4 = **a1;
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 52LL) = *(_DWORD *)(a2 + 12);
    v7 = *(_DWORD *)(a2 + 4);
  }
  if ( (v7 & 2) != 0 )
  {
    v6 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 24LL) = *(_QWORD *)(a2 + 16);
    v4 = **a1;
    if ( (*(_BYTE *)(v4 + 124) & 3) != 0 )
      v8 = 5;
  }
  v9 = *(_DWORD *)(a2 + 4);
  if ( (v9 & 4) != 0 )
  {
    v4 = **a1;
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 48LL) = *(_DWORD *)(a2 + 24);
    v9 = *(_DWORD *)(a2 + 4);
  }
  if ( (v9 & 8) != 0 )
  {
    v4 = **a1;
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + 16LL) = *(_QWORD *)(a2 + 32);
    v9 = *(_DWORD *)(a2 + 4);
  }
  if ( v9 < 0 )
  {
    v10 = a1[2];
    v11 = 0;
    if ( !v10 )
      v10 = (__int64 *)**a1;
    v12 = MNGetpItemFromIndex(v10, 0LL);
    v4 = **a1;
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 44LL) > v13 )
    {
      do
      {
        if ( !v12 )
          break;
        v14 = *(_QWORD *)(v12 + 16);
        if ( v14 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v38, v14);
          v39 = 0LL;
          v26 = *(_QWORD *)(v12 + 16);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v36;
          *((_QWORD *)&v36 + 1) = v26;
          if ( v26 )
            HMLockObject(v26);
          xxxSetMenuInfo(v38, a2);
          ThreadUnlock1(v29, v28, v30);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v38);
        }
        v15 = a1[2];
        ++v11;
        if ( !v15 )
          v15 = (__int64 *)**a1;
        v12 = MNGetpItemFromIndex(v15, v11);
        v4 = **a1;
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(v4 + 40) + 44LL) );
    }
  }
  if ( v5 )
  {
    *(_DWORD *)(**a1 + 64) = 0;
    *(_DWORD *)(**a1 + 68) = 0;
  }
  else if ( !v6 )
  {
    goto LABEL_25;
  }
  v16 = a1[2];
  if ( !v16 )
    v16 = (__int64 *)**a1;
  v17 = MNGetPopupFromMenu(v16, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v35, v17);
  if ( *(_QWORD *)v35[0] )
    xxxMNUpdateShownMenu(v35, 0LL, v8);
LABEL_25:
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v23 )
      v19 = *v23;
  }
  if ( v35[0] != gSmartObjNullRef && !--*(_DWORD *)(v35[0] + 8LL) )
  {
    if ( *(_BYTE *)(v35[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v35[0]);
  }
  v24 = *(_QWORD **)(v19 + 1464);
  if ( v24 )
    *(_QWORD *)(v19 + 1464) = *v24;
  return 1LL;
}
