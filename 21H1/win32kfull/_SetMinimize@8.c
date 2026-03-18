/*
 * XREFs of _SetMinimize@8 @ 0xB4ABE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DecVisWindows@4 @ 0x1CC58 (_DecVisWindows@4.c)
 */

unsigned int __fastcall SetMinimize(_DWORD *a1, char a2)
{
  unsigned int result; // eax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1[5] + 23) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1, (int)a1, 0xF20u, 1);
  }
  else
  {
    SetOrClrWF(0, (int)a1, 0xF20u, 1);
    result = a1[5];
    if ( (*(_BYTE *)(result + 23) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
