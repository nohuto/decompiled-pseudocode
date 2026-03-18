/*
 * XREFs of _HandleDisplayChangeForInactiveDesktops@8 @ 0x9ABB2
 * Callers:
 *     _xxxBroadcastModernAppRedraw@0 @ 0x181592 (_xxxBroadcastModernAppRedraw@0.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

int __stdcall HandleDisplayChangeForInactiveDesktops(int a1, int a2)
{
  int result; // eax
  int i; // esi

  result = *(_DWORD *)(a1 + 20);
  for ( i = *(_DWORD *)(result + 8); i; i = *(_DWORD *)(i + 16) )
  {
    if ( i != a1 )
    {
      if ( a2 )
        result = PostIAMShellHookMessageEx(i, 35, 0);
      *(_DWORD *)(i + 24) |= 0x20u;
    }
  }
  return result;
}
