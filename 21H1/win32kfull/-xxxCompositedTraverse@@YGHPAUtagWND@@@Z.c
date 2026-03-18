/*
 * XREFs of ?xxxCompositedTraverse@@YGHPAUtagWND@@@Z @ 0x19D7D9
 * Callers:
 *     ?xxxCompositedTraverse@@YGHPAUtagWND@@@Z @ 0x19D7D9 (-xxxCompositedTraverse@@YGHPAUtagWND@@@Z.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     ?xxxCompositedTraverse@@YGHPAUtagWND@@@Z @ 0x19D7D9 (-xxxCompositedTraverse@@YGHPAUtagWND@@@Z.c)
 */

int __thiscall xxxCompositedTraverse(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagWND *v9; // [esp+0h] [ebp-14h]
  _DWORD v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v10[2] = 0;
  v3 = this[5];
  if ( *(_DWORD *)(v3 + 92) || (*(_BYTE *)(v3 + 9) & 0x10) != 0 )
  {
    xxxSendMessage(this, 0, 0);
    v2 = 1;
  }
  v4 = this[15];
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_DWORD *)(v4 + 48);
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v10;
  v10[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    do
    {
      if ( xxxCompositedTraverse(v9) )
        v2 = 1;
      v5 = *(_DWORD *)(v5 + 52);
    }
    while ( ThreadLockExchange(v5, (int)v10) && v5 );
  }
  ThreadUnlock1();
  return v2;
}
