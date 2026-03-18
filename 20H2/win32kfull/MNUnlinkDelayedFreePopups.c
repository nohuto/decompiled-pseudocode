/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C0221B20
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rax
  _QWORD *result; // rax
  _QWORD v26[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, a1);
  while ( *(_QWORD *)v26[0] )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v27, *(_QWORD *)(*(_QWORD *)v26[0] + 72LL));
    **(_DWORD **)v26[0] &= ~0x10000u;
    if ( *(_QWORD *)v26[0] != a1 )
      **(_DWORD **)v26[0] &= ~0x20000000u;
    *(_QWORD *)(*(_QWORD *)v26[0] + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v26[0] + 64LL) = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v26, *(_QWORD *)v27[0]);
  }
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v10),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v26[0] != gSmartObjNullRef && !--*(_DWORD *)(v26[0] + 8LL) )
  {
    if ( *(_BYTE *)(v26[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v26[0]);
  }
  v14 = *(_QWORD **)(v4 + 1472);
  if ( v14 )
    *(_QWORD *)(v4 + 1472) = *v14;
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v20 = PsGetCurrentProcess(v18, v17, v19),
        v21 = PsGetProcessSessionIdEx(v20),
        v23 = PsGetCurrentThreadProcess(v22),
        v21 == (unsigned int)PsGetProcessSessionIdEx(v23)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( v24 )
      v16 = *v24;
  }
  if ( v27[0] != gSmartObjNullRef && !--*(_DWORD *)(v27[0] + 8LL) )
  {
    if ( *(_BYTE *)(v27[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v27[0]);
  }
  result = *(_QWORD **)(v16 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v16 + 1472) = result;
  }
  return result;
}
