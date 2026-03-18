/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0234EC0
 * Callers:
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v16; // rcx
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, **a1);
  if ( (**(_DWORD **)v19[0] & 1) == 0 )
  {
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v19[0] & 2) != 0 )
      {
        v1 = *(_QWORD *)v19[0];
        if ( *(_QWORD *)(*(_QWORD *)v19[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, *(_QWORD *)(*(_QWORD *)v19[0] + 64LL));
          break;
        }
      }
      v4 = *(_QWORD *)v19[0];
      if ( *(_QWORD *)(*(_QWORD *)v19[0] + 32LL) )
      {
        v18 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v19[0] + 32LL), v1, v2, v3);
        if ( v18 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, *(_QWORD *)(v18 + 8));
          if ( *(_QWORD *)v19[0] )
            continue;
        }
      }
      v5 = 0;
      goto LABEL_3;
    }
  }
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL);
  v5 = *(_DWORD *)(v4 + 48);
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v13),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
  {
    if ( *(_BYTE *)(v19[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
  }
  v16 = *(_QWORD **)(v7 + 1472);
  if ( v16 )
    *(_QWORD *)(v7 + 1472) = *v16;
  return v5;
}
