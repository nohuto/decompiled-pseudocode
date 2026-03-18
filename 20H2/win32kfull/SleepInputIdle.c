/*
 * XREFs of SleepInputIdle @ 0x1C007EBB4
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C007E9C8 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall SleepInputIdle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 CurrentProcessWin32Process; // rdi
  struct _KEVENT *v6; // rcx
  __int64 v7; // rdx

  if ( (*(_DWORD *)(a1 + 488) & 0x1000) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 616) + 24LL) )
      return;
    EtwTraceSleepInputIdle(0LL, a1);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 24LL);
    v6 = *(struct _KEVENT **)(v7 + 32);
    if ( v6 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v7 + 32) = 0LL;
      return;
    }
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(v4 + 328) )
  {
    *(_QWORD *)(v4 + 328) = a1;
    v4 = *(_QWORD *)(a1 + 424);
  }
  if ( *(_QWORD *)(v4 + 328) == a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
    EtwTraceSleepInputIdle(0LL, a1);
    v6 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
    if ( v6 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
      return;
    }
LABEL_11:
    if ( v6 )
      KeClearEvent(v6);
  }
}
