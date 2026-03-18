/*
 * XREFs of xxxEndMenuLoop @ 0x1C0233850
 * Callers:
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C00792C4 (xxxDWP_DoNCActivate.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0249E54 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v27; // rax
  _QWORD *result; // rax
  __int64 *v29; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v30[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v31[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v29, a2);
  if ( (*(_DWORD *)*v29 & 8) != 0 )
  {
    if ( (*(_DWORD *)*v29 & 0x80000) == 0 )
      xxxMNCancel(a1, 0, 0);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( (v4 & 0x20) != 0 )
    {
      v30[2] = 0LL;
      v5 = *(_QWORD *)(*v29 + 8);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v30;
      v30[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*v29 + 8), 0);
      ThreadUnlock1(v8, v7, v9);
      v4 = *(_DWORD *)(a1 + 8);
    }
    if ( (v4 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
  {
    v3 = *v29;
    if ( *(_QWORD *)(*v29 + 8) )
    {
      v10 = *(_QWORD *)(*v29 + 8);
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 432LL);
      if ( v11 == gpqForeground && *(_QWORD *)(v11 + 120) == v10 )
      {
        v12 = 1;
        v13 = 1;
      }
      else
      {
        v12 = 0;
        v13 = 2;
      }
      v31[2] = 0LL;
      v3 = (*(unsigned __int8 *)(*(_QWORD *)(v10 + 40) + 16LL) >> 6) & 1;
      if ( (_DWORD)v3 != v12 )
      {
        v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v31[0] = *(_QWORD *)(v14 + 416);
        *(_QWORD *)(v14 + 416) = v31;
        v31[1] = v10;
        HMLockObject(v10);
        xxxDWP_DoNCActivate(v10, v13, 1LL);
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v3)
    || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v27 )
      v19 = *v27;
  }
  if ( v29 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v29 + 2) )
  {
    if ( *((_BYTE *)v29 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v29);
  }
  result = *(_QWORD **)(v19 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v19 + 1472) = result;
  }
  return result;
}
