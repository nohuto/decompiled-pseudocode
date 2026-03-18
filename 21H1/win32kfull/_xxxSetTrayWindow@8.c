/*
 * XREFs of _xxxSetTrayWindow@8 @ 0x13758
 * Callers:
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _xxxRemoveFullScreen@4 @ 0x7202E (_xxxRemoveFullScreen@4.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

int __fastcall xxxSetTrayWindow(int a1, int *a2)
{
  int v3; // esi
  int result; // eax
  int *v5; // esi
  int v6; // [esp-8h] [ebp-14h]
  int v7; // [esp-4h] [ebp-10h]

  if ( a2 == (int *)1 )
  {
    v5 = *(int **)(a1 + 48);
    if ( v5 )
      v3 = *v5;
    else
      v3 = 0;
  }
  else
  {
    v3 = 0;
    if ( a2 )
      v3 = *a2;
    v7 = (int)a2;
    v6 = a1 + 48;
    HMAssignmentLock(a1, a2);
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 96) )
    PostShellHookMessages(*(_WORD *)(_gpDispInfo + 88) != 0 ? 32772 : 4, v3, v6, v7);
  result = *(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8);
  if ( (result & 0x800) != 0 )
    return xxxCallHook(*(_WORD *)(_gpDispInfo + 88) != 0, 0xAu, v6, v7);
  return result;
}
