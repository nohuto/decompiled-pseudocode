/*
 * XREFs of xxxMNCancel @ 0x1C0236FD4
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0233850 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235BEC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNButtonUp @ 0x1C0236EBC (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0249E54 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0115900 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023A63C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 */

__int64 *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r12
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r8d
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v32; // rax
  __int64 *result; // rax
  unsigned int v34; // [rsp+50h] [rbp-39h]
  _QWORD v35[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v36; // [rsp+68h] [rbp-21h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h]
  __int128 v38; // [rsp+80h] [rbp-9h] BYREF
  __int64 v39; // [rsp+90h] [rbp+7h]
  _QWORD v40[9]; // [rsp+98h] [rbp+Fh] BYREF

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, *(_QWORD *)a1);
  v34 = **(_DWORD **)v35[0];
  v7 = (v34 >> 3) & 1;
  v8 = (v34 >> 2) & 1;
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v39 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  **(_DWORD **)v35[0] |= 0x8000u;
  v9 = *(_QWORD *)(a1 + 32);
  if ( gptiCurrent == v9 )
  {
    v9 = *(_QWORD *)v35[0];
    if ( (**(_DWORD **)v35[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v35[0] |= 0x80000u;
      v10 = *(_QWORD *)(*(_QWORD *)v35[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v36;
      *((_QWORD *)&v36 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      xxxMNCloseHierarchy(*(_QWORD *)v35[0], a1);
      xxxMNSelectItem(v35, a1);
      v12 = v35[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v13 = *(_QWORD *)(*(_QWORD *)v12 + 8LL);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v38 = *(_QWORD *)(v14 + 416);
      *(_QWORD *)(v14 + 416) = &v38;
      *((_QWORD *)&v38 + 1) = v13;
      if ( v13 )
        HMLockObject(v13);
      xxxMNReleaseCapture(a1);
      if ( v7 )
      {
        xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v35[0] + 16LL), -4, 0, 0);
        v16 = *(_QWORD *)v35[0];
        if ( *(_QWORD *)(*(_QWORD *)v35[0] + 16LL) )
          xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)v35[0] + 16LL));
      }
      if ( v13 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v40, 0LL);
        v40[2] = -1LL;
        xxxSendMenuSelect(v13, 0, (unsigned int)v40, -1, a1);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v40);
        if ( v8 )
          v18 = -1;
        else
          v18 = (v34 & 1) != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (struct tagWND *)v13, v18, 0, 0);
        if ( (v34 & 0x800) == 0 )
        {
          v19 = v7 && !v8;
          xxxSendMessage(v13, 0x212u, v19, 0LL);
        }
        if ( a2 )
        {
          xxxPlayEventSound(6LL);
          *(_DWORD *)(a1 + 24) = v5;
          if ( (v34 & 0x100) == 0 )
          {
            if ( v8 || !v7 || (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 21LL) & 1) != 0 )
            {
              PostTransformableMessage((struct tagWND *)v13, a2, v5, (__int64)a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(v13, a2, v5, a4, 0, 0, 0LL, 1, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v16, v15, v17);
      ThreadUnlock1(v21, v20, v22);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
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
  result = *(__int64 **)(v24 + 1472);
  if ( result )
  {
    result = (__int64 *)*result;
    *(_QWORD *)(v24 + 1472) = result;
  }
  return result;
}
