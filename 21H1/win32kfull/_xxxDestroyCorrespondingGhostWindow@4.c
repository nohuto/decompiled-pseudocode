/*
 * XREFs of _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxHandleHealthyWindow@4 @ 0x170876 (_xxxHandleHealthyWindow@4.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 */

int __thiscall xxxDestroyCorrespondingGhostWindow(_DWORD *this)
{
  int v1; // esi
  unsigned int v3; // eax
  _DWORD *v4; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  __int16 v7; // ax
  int v9; // [esp+10h] [ebp-10h]
  _DWORD v10[3]; // [esp+14h] [ebp-Ch] BYREF

  v1 = 0;
  v9 = 0;
  v3 = InternalRemoveProp((int)this, *(_WORD *)(_gpsi + 500), 1);
  if ( v3 )
  {
    if ( v3 == -1 )
    {
      if ( !IsNonImmersiveBand(this) )
        PostShellHookMessages();
      v3 = 0;
    }
  }
  else
  {
    v3 = InternalRemoveProp((int)this, *(_WORD *)(_gpsi + 978), 1);
    if ( !v3 )
      return v1;
    v9 = 1;
  }
  v1 = 1;
  if ( v3 )
  {
    v4 = (_DWORD *)HMValidateHandleNoSecure(v3, 1);
    v1 = 1;
    if ( v4 )
    {
      v10[2] = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v10;
      v10[1] = v4;
      HMLockObject(v4);
      if ( IsGhostWindow(v4) )
      {
        if ( v9 )
          v7 = *(_WORD *)(_gpsi + 978);
        else
          v7 = *(_WORD *)(_gpsi + 500);
        InternalRemoveProp((int)v4, v7, 1);
        xxxHideGhostWindow((int)v4, (int)this);
        v1 = 1;
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1();
    }
  }
  return v1;
}
