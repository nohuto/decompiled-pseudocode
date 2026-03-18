/*
 * XREFs of _xxxSwitchToThisWindow@8 @ 0x11FBE
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 */

int __stdcall xxxSwitchToThisWindow(struct tagQ *a1, int a2)
{
  int v2; // esi
  int v3; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // [esp+0h] [ebp-14h]
  struct tagINPUT_MESSAGE_SOURCE *v8; // [esp+4h] [ebp-10h]
  _DWORD v9[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( _gpqForeground )
  {
    if ( !a2 )
    {
      v9[2] = 0;
      v2 = *(_DWORD *)(_gpqForeground + 64);
      if ( v2 )
      {
        if ( _GetNextQueueWindow(v2, 0, 1) )
        {
          v3 = *(_DWORD *)(v2 + 20);
          if ( (*(_BYTE *)(v3 + 16) & 8) == 0 && (*(_BYTE *)(v3 + 12) & 0x20) == 0 )
          {
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v9[0] = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = v9;
            v9[1] = v2;
            HMLockObject(v2);
            xxxSetWindowPos(v2, 1, 0, 0, 0, 0, 16403);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2, 0, 1);
  if ( a2 && (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0x20) != 0 && !IsThreadHung(*((_DWORD *)a1 + 2), 0) )
    PostEventMessageEx((struct tagTHREADINFO *)7, a1, 0x112u, (struct tagWND *)0xF120, 0, 0, v7, v8);
  return 1;
}
