/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A4A38
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0097BA0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00F4C9C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272D54 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272DFC (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00A7490 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2)
{
  DC *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax

  v4 = *a2;
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 18);
      if ( !v5
        || !*((_BYTE *)this + 161)
        || (v6 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL
        || !*((_BYTE *)this + 137)
        || *v5 != *v6 )
      {
        v7 = *((_DWORD *)v4 + 9);
        if ( (v7 & 0x200) != 0 )
        {
          if ( (v7 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v4)
              || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v13 = *ThreadWin32Thread;
                if ( v13 )
                  *(_DWORD *)(v13 + 328) &= ~1u;
              }
            }
          }
          v14 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v14 && *((_BYTE *)this + 137) && *(_QWORD *)*a2 == *v14 && !*((_QWORD *)this + 22)
            || (v15 = (_QWORD *)*((_QWORD *)this + 18)) != 0LL
            && *((_BYTE *)this + 161)
            && *(_QWORD *)*a2 == *v15
            && !*((_QWORD *)this + 25) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            DC::vClearRendering(*a2);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
