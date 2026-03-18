/*
 * XREFs of _xxxHandleDestroyGhostWindow@4 @ 0x170727
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 */

int __thiscall xxxHandleDestroyGhostWindow(void *this)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  __int16 v7; // ax
  _DWORD v9[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  v3 = InternalRemoveProp((int)this, *(_WORD *)(_gpsi + 500), 1);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((int)this, *(_WORD *)(_gpsi + 978), 1);
    if ( !v3 )
      return 0;
    v2 = 1;
  }
  v4 = HMValidateHandleNoSecure(v3, 1);
  if ( v4 )
  {
    v9[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v9[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v9;
    v9[1] = v4;
    HMLockObject(v4);
    if ( v2 )
      v7 = *(_WORD *)(_gpsi + 978);
    else
      v7 = *(_WORD *)(_gpsi + 500);
    InternalRemoveProp(v4, v7, 1);
    xxxHideGhostWindow((int)this, v4);
    ThreadUnlock1();
  }
  return 0;
}
