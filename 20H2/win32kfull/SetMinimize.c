/*
 * XREFs of SetMinimize @ 0x1C001878C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C009166C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00927E4 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      DecVisWindows();
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    SetOrClrWF(0LL, a1, 3872LL, 1LL);
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
