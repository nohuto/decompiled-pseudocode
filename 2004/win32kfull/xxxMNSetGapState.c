/*
 * XREFs of xxxMNSetGapState @ 0x1C024AEB4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01FF230 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024B1A0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0235D1C (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02375D0 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v32; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v34; // rax
  _QWORD *result; // rax
  _QWORD v36[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v37; // [rsp+30h] [rbp-30h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h]
  __int128 v39; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, 0LL);
  v38 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  if ( (a3 & 3) == 0 )
    goto LABEL_21;
  if ( !IsMFMWFPWindow((__int64)a1) )
    goto LABEL_21;
  v9 = safe_cast_fnid_to_PMENUWND(v8);
  if ( !v9 )
    goto LABEL_21;
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    goto LABEL_21;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v36, v10);
  if ( !*(_QWORD *)v36[0] )
    goto LABEL_21;
  v11 = MNGetpItem((__int64)v36, a2);
  if ( !v11 )
    goto LABEL_21;
  LODWORD(v39) = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
  DWORD2(v39) = *(_DWORD *)(*(_QWORD *)v11 + 64LL) + *(_DWORD *)(*(_QWORD *)v11 + 72LL);
  DWORD1(v39) = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
  HIDWORD(v39) = *(_DWORD *)(*(_QWORD *)v11 + 68LL) + *(_DWORD *)(*(_QWORD *)v11 + 76LL);
  if ( (a3 & 1) == 0 )
  {
    v16 = MNGetpItem((__int64)v36, a2 + 1);
    v18 = *v17;
    v19 = *(_DWORD *)(*v17 + 4);
    if ( a4 )
    {
      *(_DWORD *)(v18 + 4) = v19 | 0x40000000;
      if ( !v16 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v16 + 4LL) |= 0x80000000;
    }
    else
    {
      *(_DWORD *)(v18 + 4) = v19 & 0xBFFFFFFF;
      if ( !v16 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v16 + 4LL) &= ~0x80000000;
    }
    HIDWORD(v39) += *(_DWORD *)(gpsi + 2172LL);
    goto LABEL_20;
  }
  v12 = MNGetpItem((__int64)v36, a2 - 1);
  v14 = *v13;
  v15 = *(_DWORD *)(*v13 + 4);
  if ( a4 )
  {
    *(_DWORD *)(v14 + 4) = v15 | 0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 4LL) |= 0x40000000u;
LABEL_13:
      DWORD1(v39) -= *(_DWORD *)(gpsi + 2172LL);
    }
  }
  else
  {
    *(_DWORD *)(v14 + 4) = v15 & 0x7FFFFFFF;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 4LL) &= ~0x40000000u;
      goto LABEL_13;
    }
  }
LABEL_20:
  v20 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                 *(_QWORD *)(*(_QWORD *)v36[0] + 40LL),
                                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 116LL))
                  + 68LL);
  DWORD1(v39) -= v20;
  HIDWORD(v39) -= v20;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v37 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v37;
  *((_QWORD *)&v37 + 1) = a1;
  HMLockObject(a1);
  xxxInvalidateRect(a1, (int *)&v39, 1);
  ThreadUnlock1(v23, v22, v24);
LABEL_21:
  CurrentThread = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v28, v27, v29),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v32),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v34 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v34 )
      v26 = *v34;
  }
  if ( v36[0] != gSmartObjNullRef && !--*(_DWORD *)(v36[0] + 8LL) )
  {
    if ( *(_BYTE *)(v36[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v36[0]);
  }
  result = *(_QWORD **)(v26 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v26 + 1464) = result;
  }
  return result;
}
