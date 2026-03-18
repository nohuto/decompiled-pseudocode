/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00FEAF4
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00D6418 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C00751F4 (xxxLoadHmodIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D67EC (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     MakeExportSuppressedPfnValid @ 0x1C00FEC00 (MakeExportSuppressedPfnValid.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 CurrentProcess; // rax
  tagDomLock *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v4 != -1 )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 424) + 404LL);
    if ( !_bittest((const int *)&v5, v4) )
    {
      CurrentProcess = PsGetCurrentProcess(v5, v4, v3);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        return 0LL;
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v12);
      if ( !xxxLoadHmodIndex(*((_DWORD *)a1 + 18)) )
      {
        tagDomLock::LockExclusive(v12);
        return 0LL;
      }
      tagDomLock::LockExclusive(v12);
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = *((int *)a1 + 18);
  v8 = *(_QWORD *)(v6 + 424);
  v9 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v8 + 8 * v7 + 408);
  if ( (_DWORD)v7 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v8 + 8 * v7 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v9;
}
