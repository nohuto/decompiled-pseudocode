/*
 * XREFs of xxxHiliteMenuItem @ 0x1C0248B34
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C01FCC90 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01511B4 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  char v4; // si
  unsigned int TopLevelMenuIndex; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v19; // rcx
  _QWORD v21[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex(a2, a3);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  xxxMNInvertItem(v21, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  if ( v21[0] != gSmartObjNullRef && !--*(_DWORD *)(v21[0] + 8LL) )
  {
    if ( *(_BYTE *)(v21[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v21[0]);
  }
  v19 = *(_QWORD **)(v9 + 1472);
  if ( v19 )
    *(_QWORD *)(v9 + 1472) = *v19;
  return 1LL;
}
