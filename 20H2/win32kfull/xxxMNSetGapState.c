/*
 * XREFs of xxxMNSetGapState @ 0x1C02498AC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0035B38 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01FE3C0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B98 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0234E8C (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0236740 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v37; // rax
  _QWORD *result; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v40; // [rsp+30h] [rbp-30h] BYREF
  __int64 v41; // [rsp+40h] [rbp-20h]
  __int128 v42; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, 0LL);
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  if ( (a3 & 3) == 0 )
    goto LABEL_21;
  if ( !IsMFMWFPWindow((__int64)a1) )
    goto LABEL_21;
  v12 = safe_cast_fnid_to_PMENUWND(v8, v9, v10, v11);
  if ( !v12 )
    goto LABEL_21;
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 )
    goto LABEL_21;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v39, v13);
  if ( !*(_QWORD *)v39[0] )
    goto LABEL_21;
  v14 = MNGetpItem((__int64)v39, a2);
  if ( !v14 )
    goto LABEL_21;
  LODWORD(v42) = *(_DWORD *)(*(_QWORD *)v14 + 64LL);
  DWORD2(v42) = *(_DWORD *)(*(_QWORD *)v14 + 64LL) + *(_DWORD *)(*(_QWORD *)v14 + 72LL);
  DWORD1(v42) = *(_DWORD *)(*(_QWORD *)v14 + 68LL);
  HIDWORD(v42) = *(_DWORD *)(*(_QWORD *)v14 + 68LL) + *(_DWORD *)(*(_QWORD *)v14 + 76LL);
  if ( (a3 & 1) == 0 )
  {
    v19 = MNGetpItem((__int64)v39, a2 + 1);
    v21 = *v20;
    v22 = *(_DWORD *)(*v20 + 4);
    if ( a4 )
    {
      *(_DWORD *)(v21 + 4) = v22 | 0x40000000;
      if ( !v19 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v19 + 4LL) |= 0x80000000;
    }
    else
    {
      *(_DWORD *)(v21 + 4) = v22 & 0xBFFFFFFF;
      if ( !v19 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v19 + 4LL) &= ~0x80000000;
    }
    HIDWORD(v42) += *(_DWORD *)(gpsi + 2172LL);
    goto LABEL_20;
  }
  v15 = MNGetpItem((__int64)v39, a2 - 1);
  v17 = *v16;
  v18 = *(_DWORD *)(*v16 + 4);
  if ( a4 )
  {
    *(_DWORD *)(v17 + 4) = v18 | 0x80000000;
    if ( v15 )
    {
      *(_DWORD *)(*(_QWORD *)v15 + 4LL) |= 0x40000000u;
LABEL_13:
      DWORD1(v42) -= *(_DWORD *)(gpsi + 2172LL);
    }
  }
  else
  {
    *(_DWORD *)(v17 + 4) = v18 & 0x7FFFFFFF;
    if ( v15 )
    {
      *(_DWORD *)(*(_QWORD *)v15 + 4LL) &= ~0x40000000u;
      goto LABEL_13;
    }
  }
LABEL_20:
  v23 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                 *(_QWORD *)(*(_QWORD *)v39[0] + 40LL),
                                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 116LL))
                  + 68LL);
  DWORD1(v42) -= v23;
  HIDWORD(v42) -= v23;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v40;
  *((_QWORD *)&v40 + 1) = a1;
  HMLockObject(a1);
  xxxInvalidateRect(a1, (int *)&v42, 1);
  ThreadUnlock1(v26, v25, v27);
LABEL_21:
  CurrentThread = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v31, v30, v32),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v37 )
      v29 = *v37;
  }
  if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
  {
    if ( *(_BYTE *)(v39[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
  }
  result = *(_QWORD **)(v29 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v29 + 1472) = result;
  }
  return result;
}
