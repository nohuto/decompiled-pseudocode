/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00795B8
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C001C188 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FACFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0274364 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0274408 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2, __int64 a3, __int64 a4)
{
  DC *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax

  v6 = *a2;
  if ( *a2 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 13);
      if ( !v7
        || !*((_BYTE *)this + 121)
        || (v8 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL
        || !*((_BYTE *)this + 97)
        || *v7 != *v8 )
      {
        v9 = *((_DWORD *)v6 + 9);
        if ( (v9 & 0x200) != 0 )
        {
          if ( (v9 & 0x4000) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v6)
              || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v15 = *ThreadWin32Thread;
                if ( v15 )
                  *(_DWORD *)(v15 + 328) &= ~1u;
              }
            }
          }
          v16 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v16 && *((_BYTE *)this + 97) && *(_QWORD *)*a2 == *v16 && !*((_QWORD *)this + 17)
            || (v17 = (_QWORD *)*((_QWORD *)this + 13)) != 0LL
            && *((_BYTE *)this + 121)
            && *(_QWORD *)*a2 == *v17
            && !*((_QWORD *)this + 20) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v7, a3, a4);
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
