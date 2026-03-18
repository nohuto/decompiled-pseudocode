/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0249B98
 * Callers:
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02365C8 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0236740 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C02498AC (xxxMNSetGapState.c)
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
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 *v23; // r9
  int v24; // r9d
  int v25; // r8d
  int v26; // r10d
  unsigned int v27; // eax
  BOOL v28; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v39; // rax
  _QWORD *result; // rax
  _QWORD v41[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v42[4]; // [rsp+30h] [rbp-20h] BYREF

  v42[2] = 0LL;
  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v42[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v42;
  v42[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  v9 = (struct tagWND *)*v3;
  v10 = *(_DWORD *)(a1 + 88);
  v11 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v12 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( !IsMFMWFPWindow(v12)
    || (v17 = safe_cast_fnid_to_PMENUWND(v14, v13, v15, v16)) == 0
    || (v13 = *(_QWORD *)(v17 + 8)) == 0 )
  {
    *(_DWORD *)(a1 + 88) = -1;
    *v3 = 0LL;
    return (_QWORD *)ThreadUnlock1(v14, v13, v15);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v41, v13);
  v18 = MNGetpItem((__int64)v41, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  if ( v18 )
  {
    v22 = MNGetpItemFromIndex(
            *(_QWORD *)(*(_QWORD *)v41[0] + 40LL),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v41[0] + 40LL) + 116LL));
    v19 = *v23;
    v24 = *(_DWORD *)(*v23 + 68);
    v21 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 68LL) + v25);
    v20 = gpsi;
    v26 = *(_DWORD *)(gpsi + 2172LL);
    if ( (int)v21 > v24 + v26 )
    {
      if ( (int)v21 >= v24 + *(_DWORD *)(v19 + 76) - v26 )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  if ( v9 != (struct tagWND *)*v3 )
    goto LABEL_23;
  v27 = *(_DWORD *)(a1 + 88) - v10;
  if ( v27 != -1 )
  {
    if ( v27 )
    {
      if ( v27 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
        goto LABEL_24;
LABEL_23:
      *(_DWORD *)(a1 + 92) |= 4u;
      xxxMNSetGapState(v9, v10, v11, 0);
      xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
      goto LABEL_24;
    }
    v28 = v11 != *(_DWORD *)(a1 + 92);
LABEL_22:
    if ( !v28 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 92) != 2 || v11 != 1 )
  {
    v28 = 1;
    goto LABEL_22;
  }
LABEL_24:
  ThreadUnlock1(v20, v19, v21);
  CurrentThread = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v31)
    || (CurrentProcess = PsGetCurrentProcess(v33, v32, v34),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v39 )
      v30 = *v39;
  }
  if ( v41[0] != gSmartObjNullRef && !--*(_DWORD *)(v41[0] + 8LL) )
  {
    if ( *(_BYTE *)(v41[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v41[0]);
  }
  result = *(_QWORD **)(v30 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v30 + 1472) = result;
  }
  return result;
}
