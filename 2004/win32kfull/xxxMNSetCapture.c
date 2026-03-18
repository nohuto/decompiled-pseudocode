/*
 * XREFs of xxxMNSetCapture @ 0x1C023BE44
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v10[2] = 0LL;
  v4 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v10;
  v10[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxCapture(gptiCurrent, *(struct tagWND **)(**(_QWORD **)a1 + 8LL), 4);
  ThreadUnlock1(v7, v6, v8);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v9 = *(_QWORD *)(gpqForeground + 112LL);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == gptiCurrent )
        xxxWindowEvent(0x80000004, (struct tagWND *)v9, 0, 1u, 0x21u);
    }
  }
}
