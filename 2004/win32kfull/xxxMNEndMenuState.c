/*
 * XREFs of xxxMNEndMenuState @ 0x1C0222BF0
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015920C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0222190 (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C0222500 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C0222788 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02229B0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  void *const *v16[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, 0LL);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_DWORD **)a1);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, *(_QWORD *)a1);
      **(_DWORD **)v15[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, *(_QWORD *)a1);
      MNFreePopup(v16);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( !*(_QWORD *)v15[0] || (v2 = *(_QWORD *)v15[0], (**(_DWORD **)v15[0] & 0x40000000) != 0) )
    {
      if ( *(_QWORD *)v15[0] )
      {
        v2 = *(_QWORD *)v15[0];
        **(_DWORD **)v15[0] &= ~0x20000000u;
      }
    }
    else if ( *(void *const *)v15[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v3 = *(_QWORD *)v15[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v15[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v3);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v11),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  if ( v15[0] != gSmartObjNullRef && !--*(_DWORD *)(v15[0] + 8LL) )
  {
    if ( *(_BYTE *)(v15[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v15[0]);
  }
  result = *(_QWORD **)(v5 + 1464);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v5 + 1464) = result;
  }
  return result;
}
