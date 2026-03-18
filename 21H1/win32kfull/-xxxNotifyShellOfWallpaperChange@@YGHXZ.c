/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YGHXZ @ 0xE6432
 * Callers:
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 */

size_t __stdcall xxxNotifyShellOfWallpaperChange()
{
  size_t v0; // esi
  int v1; // eax
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v0 = 0;
  v1 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v1 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(v1 + 4) + 84);
    if ( v2 )
    {
      v6[2] = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v6[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v6;
      v6[1] = v2;
      HMLockObject(v2);
      v0 = xxxSendNotifyMessage(v2, 0x34u, (struct tagWND *)4, 0, 1u);
      ThreadUnlock1();
    }
  }
  return v0;
}
