/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C0007E00
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagTHREADINFO **a1, int a2)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v8[2] = 0LL;
      v5 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) )
        {
          v6 = *(_QWORD *)(v5 + 40);
          if ( (*(_BYTE *)(v6 + 24) & 8) == 0 && (*(_BYTE *)(v6 + 20) & 0x20) == 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v8;
            v8[1] = v5;
            HMLockObject(v5);
            xxxSetWindowPos((struct tagWND *)v5, 0, 0, 16403);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL);
  if ( a2 && (*((_BYTE *)a1[5] + 31) & 0x20) != 0 && !(unsigned int)IsThreadHung(a1[2], 0LL) )
    PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), 7u, (struct tagWND *)a1, 0x112u, 0xF120uLL, 0LL, 0LL);
  return 1LL;
}
