/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0237C24
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F1D38 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v28; // rax
  _QWORD *v29; // rcx
  _QWORD v31[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  char v34; // [rsp+A0h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, 0LL);
  v33 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  v32 = 0LL;
  if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_18;
  v7 = *(_QWORD **)(v6 + 608);
  v8 = v7 ? *v7 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v31, v8);
  if ( !*(_QWORD *)v31[0] )
    goto LABEL_18;
  v4 = *(_QWORD *)v31[0];
  if ( !*(_QWORD *)(*(_QWORD *)v31[0] + 8LL) )
    goto LABEL_18;
  v9 = xxxMNFindWindowFromPoint(v31, &v34, a2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 || v9 )
    goto LABEL_18;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
  v11 = v10 ? *v10 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v31, v11);
  if ( *(_QWORD *)v31[0] && (v4 = *(_QWORD *)v31[0], *(_QWORD *)(*(_QWORD *)v31[0] + 8LL)) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v31[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v32;
    *((_QWORD *)&v32 + 1) = v12;
    HMLockObject(v12);
    v14 = 1;
    v15 = *(_QWORD *)(*(_QWORD *)v31[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v15, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
LABEL_18:
    v14 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v22, v21, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v28 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v28 )
      v20 = *v28;
  }
  if ( v31[0] != gSmartObjNullRef && !--*(_DWORD *)(v31[0] + 8LL) )
  {
    if ( *(_BYTE *)(v31[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v31[0]);
  }
  v29 = *(_QWORD **)(v20 + 1472);
  if ( v29 )
    *(_QWORD *)(v20 + 1472) = *v29;
  return v14;
}
