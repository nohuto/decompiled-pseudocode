/*
 * XREFs of ?StartWatching@GameInputWatcher@@QEAAJPEBGPEAXP6AX1@Z@Z @ 0x180043D7C
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180043430 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180043F70 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     ??$reset@PEADX@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z @ 0x18007A65C (--$reset@PEADX@-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputWatcher::StartWatching(
        GameInputWatcher *this,
        LPCWSTR lpFileName,
        void *a3,
        void (*a4)(void *))
{
  int v7; // edx
  unsigned int v8; // edi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  PTP_WAIT ThreadpoolWait; // rax
  HANDLE EventW; // rax
  HANDLE FileW; // rax
  void *v14; // rax
  void *v15; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( *((_QWORD *)this + 2) == -1LL )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(GameInputWatcher::TimerCallback, this, 0LL);
    *(_QWORD *)this = ThreadpoolTimer;
    if ( !ThreadpoolTimer )
      goto LABEL_4;
    ThreadpoolWait = CreateThreadpoolWait(GameInputWatcher::WaitCallback, this, 0LL);
    *((_QWORD *)this + 1) = ThreadpoolWait;
    if ( !ThreadpoolWait )
      goto LABEL_4;
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 3) = EventW;
    if ( !EventW )
      goto LABEL_4;
    FileW = CreateFileW(lpFileName, 0x80000020, 7u, 0LL, 3u, 0x42000000u, 0LL);
    *((_QWORD *)this + 2) = FileW;
    if ( FileW == (HANDLE)-1LL )
      goto LABEL_4;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = *((_QWORD *)this + 3);
    v14 = operator new[](0x1000uLL, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<char [0]>::reset<char *,void>((char *)this + 64, v14);
    if ( !*((_QWORD *)this + 8) )
      goto LABEL_4;
    v15 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 15) = GameInputServerProxy::OnModuleUpdated;
    *((_QWORD *)this + 14) = a3;
    if ( ReadDirectoryChangesW(v15, *((LPVOID *)this + 8), 0x1000u, 0, 0x59u, 0LL, (LPOVERLAPPED)this + 1, 0LL) )
    {
      SetThreadpoolWait(*((PTP_WAIT *)this + 1), *((HANDLE *)this + 3), 0LL);
      v8 = 0;
    }
    else
    {
LABEL_4:
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      GameInputWatcher::StopWatching(this);
    }
  }
  else
  {
    v8 = -2147418113;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return v8;
}
