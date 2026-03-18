/*
 * XREFs of ?EnumPwndDlgChildProc@@YGHPAUtagWND@@J@Z @ 0x1B982C
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     ?IsHelpParent@@YGHPAUtagWND@@@Z @ 0x1B9872 (-IsHelpParent@@YGHPAUtagWND@@@Z.c)
 */

int __stdcall EnumPwndDlgChildProc(struct tagWND *a1, int a2)
{
  struct tagWND *v3; // [esp+0h] [ebp-8h]

  if ( a1 == *(struct tagWND **)a2
    || !IsVisible(a1)
    || !PtInRect((_DWORD *)(*((_DWORD *)a1 + 5) + 52), *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12)) )
  {
    return 1;
  }
  *(_DWORD *)(a2 + 4) = a1;
  return IsHelpParent(v3);
}
