/*
 * XREFs of _xxxHandleHealthyWindow@4 @ 0x170876
 * Callers:
 *     _xxxSetWindowPosAndBand@32 @ 0x33008 (_xxxSetWindowPosAndBand@32.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _xxxHandleHealthyThread@4 @ 0x1707E9 (_xxxHandleHealthyThread@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 */

int __thiscall xxxHandleHealthyWindow(_DWORD *this)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = 0;
  if ( _GetProp((int)this, *(unsigned __int16 *)(_gpsi + 500), 1) )
  {
    v6[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v6[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v6;
    v6[1] = this;
    HMLockObject(this);
    v2 = xxxDestroyCorrespondingGhostWindow(this);
    ThreadUnlock1();
  }
  return v2;
}
