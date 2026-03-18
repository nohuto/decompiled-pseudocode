/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079750
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00758C0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C007590C (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00EB920 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax

  v5 = *((_QWORD *)this + 4);
  if ( v5 && *((_BYTE *)this + 49) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v5 + 36) & 0x200) != 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    if ( !*((_QWORD *)this + 7) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v6)
        || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v12 = *ThreadWin32Thread;
          if ( v12 )
            *(_DWORD *)(v12 + 328) &= ~1u;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
}
