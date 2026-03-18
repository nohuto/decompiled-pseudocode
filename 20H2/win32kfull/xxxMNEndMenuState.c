/*
 * XREFs of xxxMNEndMenuState @ 0x1C0221D60
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015CBE4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0221300 (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C0221670 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C02218F8 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0221B20 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0221F50 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-20h] BYREF
  void **v19[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, 0LL);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_DWORD **)a1);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *(_QWORD *)a1);
      **(_DWORD **)v18[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, *(_QWORD *)a1);
      MNFreePopup(v19, v3, v4, v5);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( !*(_QWORD *)v18[0] || (v2 = *(_QWORD *)v18[0], (**(_DWORD **)v18[0] & 0x40000000) != 0) )
    {
      if ( *(_QWORD *)v18[0] )
      {
        v2 = *(_QWORD *)v18[0];
        **(_DWORD **)v18[0] &= ~0x20000000u;
      }
    }
    else if ( *(void *const *)v18[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v6 = *(_QWORD *)v18[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v18[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v6);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8LL) )
  {
    if ( *(_BYTE *)(v18[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
  }
  result = *(_QWORD **)(v8 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v8 + 1472) = result;
  }
  return result;
}
