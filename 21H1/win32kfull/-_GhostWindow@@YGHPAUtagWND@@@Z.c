/*
 * XREFs of ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z @ 0xC2514 (-_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ?SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z @ 0xC205C (-SendAsyncSGHOSTINFO@@YGHQAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z @ 0xC229C (-SetGhostProp@@YGHPAUtagWND@@PAUHWND__@@@Z.c)
 */

int __thiscall _GhostWindow(_DWORD *this)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v4; // edx
  HANDLE ThreadProcessId; // eax
  _DWORD *v6; // eax
  struct _KTHREAD *v8; // [esp-4h] [ebp-34h]
  struct _KTHREAD *v9; // [esp-4h] [ebp-34h]
  struct tagWND *v10; // [esp+0h] [ebp-30h]
  struct _GHOSTINFO *v11; // [esp+0h] [ebp-30h]
  HWND v12; // [esp+4h] [ebp-2Ch]
  _DWORD v13[8]; // [esp+10h] [ebp-20h] BYREF

  v2 = 0;
  if ( SetGhostProp(v10, v12) )
  {
    v3 = this[2];
    if ( IsNonImmersiveBand(this) )
    {
      v8 = *(struct _KTHREAD **)v3;
      v13[6] = 0;
      v13[7] = 0;
      v13[2] = 1;
      v13[3] = v4;
      ThreadProcessId = PsGetThreadProcessId(v8);
      v9 = *(struct _KTHREAD **)v3;
      v13[4] = ThreadProcessId;
      v13[5] = PsGetThreadId(v9);
      v2 = SendAsyncSGHOSTINFO(v11);
    }
    else
    {
      PostShellHookMessagesEx(51, v4, 0);
      v2 = 1;
    }
    if ( v2 )
    {
      if ( *(int *)(v3 + 264) >= 0 )
      {
        v13[1] = 0;
        v6 = *(_DWORD **)(v3 + 232);
        v13[0] = 4;
        PsSetProcessFaultInformation(*v6, v13);
        *(_DWORD *)(v3 + 264) |= 0x80000000;
      }
    }
    else
    {
      InternalRemoveProp((int)this, *(_WORD *)(_gpsi + 500), 1);
    }
  }
  return v2;
}
