/*
 * XREFs of ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066
 * Callers:
 *     ?SetTopmostEnum@@YGXPAUtagWND@@HH@Z @ 0x176E4 (-SetTopmostEnum@@YGXPAUtagWND@@HH@Z.c)
 *     ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066 (-SetTopmost@@YGXPAUtagWND@@HH@Z.c)
 * Callees:
 *     ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066 (-SetTopmost@@YGXPAUtagWND@@HH@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _NextOwnedWindow@12 @ 0x1C8E4 (_NextOwnedWindow@12.c)
 */

void __userpurge SetTopmost(int a1@<ecx>, struct tagWND *a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  SetOrClrWF(772, 1);
  if ( !a2 )
  {
    while ( NextOwnedWindow(*(_DWORD *)(a1 + 56)) )
      SetTopmost(0, v5, v6);
  }
}
