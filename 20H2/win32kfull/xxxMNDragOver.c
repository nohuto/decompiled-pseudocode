/*
 * XREFs of xxxMNDragOver @ 0x1C024963C
 * Callers:
 *     NtUserMNDragOver @ 0x1C01FE460 (NtUserMNDragOver.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0236568 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 *MenuStateWindow; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v32; // rax
  _QWORD *v33; // rcx
  _QWORD v35[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, 0LL);
  v37 = 0LL;
  v36 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v5
    && (v6 = *(_DWORD *)(v5 + 8), (v6 & 0x400) != 0)
    && (v7 = *(_QWORD **)(gptiCurrent + 608LL),
        *(_DWORD *)(v5 + 8) = v6 | 0x8000,
        (MenuStateWindow = (__int64 *)GetMenuStateWindow(v7)) != 0LL) )
  {
    ++*(_DWORD *)(v5 + 40);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v36;
    *((_QWORD *)&v36 + 1) = MenuStateWindow;
    HMLockObject(MenuStateWindow);
    xxxCallHandleMenuMessages(v5, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
    ThreadUnlock1(v11, v10, v12);
    if ( IsMFMWFPWindow(*(_QWORD *)(v5 + 80))
      && (v17 = safe_cast_fnid_to_PMENUWND(v14, v13, v15, v16)) != 0
      && (v18 = *(_QWORD *)(v17 + 8)) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v35, v18);
      if ( *(_QWORD *)(*(_QWORD *)v35[0] + 40LL) )
        v19 = **(_QWORD **)(*(_QWORD *)v35[0] + 40LL);
      else
        v19 = 0LL;
      *(_QWORD *)(a2 + 8) = v19;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
      if ( *(_QWORD *)(*(_QWORD *)v35[0] + 8LL) )
        v20 = **(_QWORD **)(*(_QWORD *)v35[0] + 8LL);
      else
        v20 = 0LL;
      *(_QWORD *)(a2 + 24) = v20;
      v21 = *(_DWORD *)(v5 + 92);
      *(_DWORD *)a2 = v21;
      if ( (v21 & 2) != 0 )
        ++*(_DWORD *)(a2 + 16);
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
  }
  else
  {
    v22 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v26, v25, v27),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v32 )
      v24 = *v32;
  }
  if ( v35[0] != gSmartObjNullRef && !--*(_DWORD *)(v35[0] + 8LL) )
  {
    if ( *(_BYTE *)(v35[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v35[0]);
  }
  v33 = *(_QWORD **)(v24 + 1472);
  if ( v33 )
    *(_QWORD *)(v24 + 1472) = *v33;
  return v22;
}
