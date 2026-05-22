/*
 * XREFs of ?WaitCallback@GameInputWatcher@@AEAAXXZ @ 0x180043510
 * Callers:
 *     ?WaitCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180043650 (-WaitCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GameInputWatcher::WaitCallback(GameInputWatcher *this)
{
  struct _OVERLAPPED *lpOverlapped; // rbp
  unsigned int *i; // rbx
  struct _TP_TIMER *v4; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+60h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+68h] [rbp+10h] BYREF

  lpOverlapped = (struct _OVERLAPPED *)((char *)this + 32);
  if ( GetOverlappedResult(*((HANDLE *)this + 2), (LPOVERLAPPED)this + 1, &NumberOfBytesTransferred, 1) )
  {
    for ( i = (unsigned int *)*((_QWORD *)this + 8); ; i = (unsigned int *)((char *)i + *i) )
    {
      *((_WORD *)i + ((unsigned __int64)i[2] >> 1) + 6) = 0;
      if ( (i[1] == 1 || i[1] == 3)
        && (!(unsigned int)_o__wcsicmp(i + 3, L"GameInput.dll")
         || !(unsigned int)_o__wcsicmp(i + 3, L"GameInputRedist.dll")) )
      {
        v4 = *(struct _TP_TIMER **)this;
        pftDueTime = (struct _FILETIME)-10000000LL;
        SetThreadpoolTimer(v4, &pftDueTime, 0, 0x3E8u);
        return;
      }
      if ( !*i )
        break;
    }
    if ( ReadDirectoryChangesW(*((HANDLE *)this + 2), *((LPVOID *)this + 8), 0x1000u, 0, 0x59u, 0LL, lpOverlapped, 0LL) )
      SetThreadpoolWait(*((PTP_WAIT *)this + 1), *((HANDLE *)this + 3), 0LL);
  }
}
