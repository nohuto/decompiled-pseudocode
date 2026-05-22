/*
 * XREFs of ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180043F70
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180042DA4 (--1GameInputServerProxy@@EEAA@XZ.c)
 *     ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x180043D7C (-StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800440C4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??$reset@PEADX@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z @ 0x18007A65C (--$reset@PEADX@-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z.c)
 */

void __fastcall GameInputWatcher::StopWatching(GameInputWatcher *this)
{
  struct _TP_WAIT *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    SetThreadpoolWait(v2, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 1), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    SetThreadpoolTimer(*(PTP_TIMER *)this, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)this, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)this);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 != (void *)-1LL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 2) = -1LL;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  std::unique_ptr<char [0]>::reset<char *,void>((char *)this + 64, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
