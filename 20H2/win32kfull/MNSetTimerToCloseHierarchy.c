/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C0236944
 * Callers:
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_DWORD ***a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v18; // rcx
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
  v5 = **a1;
  if ( (*v5 & 0x20) == 0 )
    goto LABEL_5;
  v2 = **a1;
  if ( (*v2 & 0x4000) == 0 )
  {
    v6 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)**a1 + 3), (__int64)v5, v3, v4);
    if ( !v6 || (SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, *(_QWORD *)(v6 + 8)), !*(_QWORD *)v20[0]) )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_10;
    }
    if ( !InternalSetTimer(*((_QWORD *)**a1 + 2), 0xFFFFLL, *(&WPP_MAIN_CB.ActiveThreadCount + 1), 0LL, 0, 16) )
    {
      v7 = -1;
      goto LABEL_10;
    }
    ***a1 |= 0x4000u;
    v2 = *(_DWORD **)v20[0];
    **(_DWORD **)v20[0] |= 0x1000u;
  }
  v7 = 1;
LABEL_10:
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  if ( v20[0] != gSmartObjNullRef && !--*(_DWORD *)(v20[0] + 8LL) )
  {
    if ( *(_BYTE *)(v20[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v20[0]);
  }
  v18 = *(_QWORD **)(v9 + 1472);
  if ( v18 )
    *(_QWORD *)(v9 + 1472) = *v18;
  return v7;
}
