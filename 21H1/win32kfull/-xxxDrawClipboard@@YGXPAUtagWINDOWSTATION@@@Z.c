/*
 * XREFs of ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559
 * Callers:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 *     _xxxSetClipboardViewer@4 @ 0x183220 (_xxxSetClipboardViewer@4.c)
 * Callees:
 *     ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220 (-CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

void __thiscall xxxDrawClipboard(int this)
{
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagWND **v5; // ecx
  struct tagWND *v6; // eax
  unsigned int i; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  *(_DWORD *)(this + 32) &= ~0x40u;
  if ( !*(_DWORD *)(this + 44) )
  {
    v2 = *(_DWORD *)(this + 52);
    if ( v2 )
    {
      v12[2] = 0;
      *(_DWORD *)(this + 44) = _gptiCurrent;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v12;
      v12[1] = v2;
      HMLockObject(v2);
      v5 = *(struct tagWND ***)(this + 56);
      v6 = 0;
      if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
      {
        if ( v5 )
          v6 = *v5;
        xxxSendMessage(*(void **)(this + 52), (unsigned int)v6, 0);
      }
      else
      {
        if ( v5 )
          v6 = *v5;
        xxxSendNotifyMessage(*(_DWORD *)(this + 52), 0x308u, v6, 0, 1u);
      }
      ThreadUnlock1();
      *(_DWORD *)(this + 44) = 0;
    }
  }
  for ( i = *(_DWORD *)(this + 80); i; i = *(_DWORD *)(i + 140) )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(i + 8) + 232);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 496);
      v10 = *(_DWORD *)(v8 + 500);
    }
    else
    {
      v9 = 0;
      v10 = 0;
    }
    v11 = CountNumClipFormatForIL(this, i, v9, v10);
    _PostMessage(i, 797, v11, 0);
  }
}
