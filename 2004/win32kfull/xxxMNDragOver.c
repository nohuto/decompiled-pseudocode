/*
 * XREFs of xxxMNDragOver @ 0x1C024AC44
 * Callers:
 *     NtUserMNDragOver @ 0x1C01FF2D0 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C02373F8 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v29; // rax
  _QWORD *v30; // rcx
  _QWORD v32[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, 0LL);
  v34 = 0LL;
  v33 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v5
    && (v6 = *(_DWORD *)(v5 + 8), (v6 & 0x400) != 0)
    && (v7 = *(_QWORD **)(gptiCurrent + 600LL),
        *(_DWORD *)(v5 + 8) = v6 | 0x8000,
        (MenuStateWindow = (__int64 *)GetMenuStateWindow(v7)) != 0LL) )
  {
    ++*(_DWORD *)(v5 + 40);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v33 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
    *((_QWORD *)&v33 + 1) = MenuStateWindow;
    HMLockObject(MenuStateWindow);
    xxxCallHandleMenuMessages(v5, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
    ThreadUnlock1(v11, v10, v12);
    if ( IsMFMWFPWindow(*(_QWORD *)(v5 + 80))
      && (v14 = safe_cast_fnid_to_PMENUWND(v13)) != 0
      && (v15 = *(_QWORD *)(v14 + 8)) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v32, v15);
      if ( *(_QWORD *)(*(_QWORD *)v32[0] + 40LL) )
        v16 = **(_QWORD **)(*(_QWORD *)v32[0] + 40LL);
      else
        v16 = 0LL;
      *(_QWORD *)(a2 + 8) = v16;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
      if ( *(_QWORD *)(*(_QWORD *)v32[0] + 8LL) )
        v17 = **(_QWORD **)(*(_QWORD *)v32[0] + 8LL);
      else
        v17 = 0LL;
      *(_QWORD *)(a2 + 24) = v17;
      v18 = *(_DWORD *)(v5 + 92);
      *(_DWORD *)a2 = v18;
      if ( (v18 & 2) != 0 )
        ++*(_DWORD *)(a2 + 16);
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
  }
  else
  {
    v19 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v29 )
      v21 = *v29;
  }
  if ( v32[0] != gSmartObjNullRef && !--*(_DWORD *)(v32[0] + 8LL) )
  {
    if ( *(_BYTE *)(v32[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v32[0]);
  }
  v30 = *(_QWORD **)(v21 + 1464);
  if ( v30 )
    *(_QWORD *)(v21 + 1464) = *v30;
  return v19;
}
