/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00428B0
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0091238 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     MakeExportSuppressedPfnValid @ 0x1C00429BC (MakeExportSuppressedPfnValid.c)
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C009160C (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // edx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 CurrentProcess; // rax
  tagDomLock *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = *((_DWORD *)a1 + 18);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL);
    if ( !_bittest(&v4, v3) )
    {
      CurrentProcess = PsGetCurrentProcess();
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        return 0LL;
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v11);
      if ( !xxxLoadHmodIndex(*((unsigned int *)a1 + 18)) )
      {
        tagDomLock::LockExclusive(v11);
        return 0LL;
      }
      tagDomLock::LockExclusive(v11);
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v5 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = *((int *)a1 + 18);
  v7 = *(_QWORD *)(v5 + 416);
  v8 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 408);
  if ( (_DWORD)v6 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v8;
}
