/*
 * XREFs of __GetMenuState@12 @ 0xBFC42
 * Callers:
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 */

int __fastcall _GetMenuState(int a1, unsigned int a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = MNLookUpItem(a1, a2, 0, 0);
  if ( !v3 )
    return -1;
  v4 = v3[2];
  v5 = *(_DWORD *)*v3 | *(_DWORD *)(*v3 + 4);
  if ( v4 )
    return (*(_DWORD *)(*(_DWORD *)(v4 + 20) + 24) << 8) + (v5 & 0xEF | 0x10);
  return v5;
}
