/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C024B1A0
 * Callers:
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0237458 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02375D0 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // r12
  unsigned int v10; // r13d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r9
  int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  unsigned int v26; // eax
  BOOL v27; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v38; // rax
  _QWORD *result; // rax
  _QWORD v40[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v41[4]; // [rsp+30h] [rbp-20h] BYREF

  v41[2] = 0LL;
  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v41[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v41;
  v41[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  v9 = (struct tagWND *)*v3;
  v10 = *(_DWORD *)(a1 + 88);
  v11 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v12 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( !IsMFMWFPWindow(v12) || (v16 = safe_cast_fnid_to_PMENUWND(v14)) == 0 || (v13 = *(_QWORD *)(v16 + 8)) == 0 )
  {
    *(_DWORD *)(a1 + 88) = -1;
    *v3 = 0LL;
    return (_QWORD *)ThreadUnlock1(v14, v13, v15);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v40, v13);
  v17 = MNGetpItem((__int64)v40, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  if ( v17 )
  {
    v21 = MNGetpItemFromIndex(
            *(_QWORD *)(*(_QWORD *)v40[0] + 40LL),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v40[0] + 40LL) + 116LL));
    v18 = *v22;
    v23 = *(_DWORD *)(*v22 + 68);
    v20 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v21 + 68LL) + v24);
    v19 = gpsi;
    v25 = *(_DWORD *)(gpsi + 2172LL);
    if ( (int)v20 > v23 + v25 )
    {
      if ( (int)v20 >= v23 + *(_DWORD *)(v18 + 76) - v25 )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  if ( v9 != (struct tagWND *)*v3 )
    goto LABEL_23;
  v26 = *(_DWORD *)(a1 + 88) - v10;
  if ( v26 != -1 )
  {
    if ( v26 )
    {
      if ( v26 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
        goto LABEL_24;
LABEL_23:
      *(_DWORD *)(a1 + 92) |= 4u;
      xxxMNSetGapState(v9, v10, v11, 0);
      xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
      goto LABEL_24;
    }
    v27 = v11 != *(_DWORD *)(a1 + 92);
LABEL_22:
    if ( !v27 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 92) != 2 || v11 != 1 )
  {
    v27 = 1;
    goto LABEL_22;
  }
LABEL_24:
  ThreadUnlock1(v19, v18, v20);
  CurrentThread = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v30)
    || (CurrentProcess = PsGetCurrentProcess(v32, v31, v33),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v38 )
      v29 = *v38;
  }
  if ( v40[0] != gSmartObjNullRef && !--*(_DWORD *)(v40[0] + 8LL) )
  {
    if ( *(_BYTE *)(v40[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v40[0]);
  }
  result = *(_QWORD **)(v29 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v29 + 1464) = result;
  }
  return result;
}
