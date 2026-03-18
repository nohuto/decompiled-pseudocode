/*
 * XREFs of _xxxUpdateThreadsWindows@12 @ 0x17804C
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxUpdateWindows@8 @ 0x1A0618 (_xxxUpdateWindows@8.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C (-xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 */

int __fastcall xxxUpdateThreadsWindows(int a1, int a2, int a3)
{
  struct tagWND *v6; // [esp+0h] [ebp-1Ch]
  unsigned int v7; // [esp+4h] [ebp-18h]
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v8[2] = 0;
  v8[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v8;
  v8[1] = 0;
  while ( a2 )
  {
    ThreadLockExchangeAlways(a2, (int)v8);
    if ( *(_DWORD *)(a2 + 8) == a1 )
      xxxInternalUpdateWindow(v6, v7);
    else
      xxxUpdateOtherThreadsWindows(a2, a3);
    a2 = *(_DWORD *)(a2 + 48);
  }
  return ThreadUnlock1();
}
