/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0089050
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0108D64 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0089A04 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v4; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rdi
  signed int v7; // esi
  __int64 v8; // r9
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // ebx
  int v22; // ebx
  int v23; // r10d
  unsigned int v24; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v27; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v29[4]; // [rsp+30h] [rbp-38h] BYREF

  v29[2] = 0LL;
  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v6 = v4;
  if ( v4 && (*((_DWORD *)v4 + 20) & 8) != 0 && *((_QWORD *)v4 + 14) )
  {
    if ( gdwLastAniTick )
    {
      v7 = 0;
      v8 = *((int *)v4 + 30);
      v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - 100 * *(_DWORD *)(*((_QWORD *)v4 + 14) + 4 * v8) / 6u
         - gdwLastAniTick;
      if ( v9 >= 0 )
        v7 = v9;
    }
    else
    {
      LODWORD(v8) = *((_DWORD *)v4 + 30);
      v7 = 0;
    }
    v10 = 0;
    if ( (int)v8 + 1 < *((_DWORD *)v6 + 23) )
      v10 = v8 + 1;
    v11 = 0LL;
    *((_DWORD *)v6 + 30) = v10;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v5)
      || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v27),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v29[0] = *(_QWORD *)(v11 + 408);
    *(_QWORD *)(v11 + 408) = v29;
    v29[1] = v6;
    HMLockObject(v6);
    if ( a3 )
      zzzUpdateCursorImage();
    v19 = *((_QWORD *)v6 + 14);
    v20 = (unsigned int)(100 * *(_DWORD *)(v19 + 4LL * v10));
    LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v20) >> 32;
    v21 = (unsigned int)v20 / 6;
    if ( (int)((unsigned int)v20 / 6) <= v7 )
    {
      v23 = *((_DWORD *)v6 + 23);
      LODWORD(v18) = *((_DWORD *)v6 + 30);
      do
      {
        v24 = v18 + 1;
        v7 -= v21;
        v18 = 0LL;
        if ( (int)v24 < v23 )
          v18 = v24;
        *((_DWORD *)v6 + 30) = v18;
        v20 = (unsigned int)(100 * *(_DWORD *)(v19 + 4LL * (int)v18));
        LODWORD(v17) = (2863311531u * (unsigned __int64)(unsigned int)v20) >> 32;
        v21 = (unsigned int)v20 / 6;
      }
      while ( (int)((unsigned int)v20 / 6) <= v7 );
    }
    ThreadUnlock1(v20, v17, v18);
    v22 = v21 - v7;
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
    if ( (gdwRITdemonLockState & 1) != 0 )
      v22 = 864000000;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)InternalSetTimer(
                                                            0,
                                                            WPP_MAIN_CB.Dpc.DeferredRoutine,
                                                            v22,
                                                            (unsigned int)zzzAnimateCursor,
                                                            (gdwRITdemonLockState & 1) != 0 ? 0x36EE80 : 0,
                                                            20);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
