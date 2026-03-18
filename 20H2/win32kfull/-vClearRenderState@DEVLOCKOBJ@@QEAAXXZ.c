/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A4BE4
 * Callers:
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00A0FA0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00A0FEC (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E7F70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00A7490 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax

  v2 = *((_QWORD *)this + 4);
  if ( v2 && *((_BYTE *)this + 49) && (*((_DWORD *)this + 6) & 0x1000) != 0 && (*(_DWORD *)(v2 + 36) & 0x200) != 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    if ( !*((_QWORD *)this + 7) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v3)
        || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v9 = *ThreadWin32Thread;
          if ( v9 )
            *(_DWORD *)(v9 + 328) &= ~1u;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
}
