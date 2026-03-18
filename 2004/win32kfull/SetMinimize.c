/*
 * XREFs of SetMinimize @ 0x1C005B3C8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C00205C0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020974 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    SetOrClrWF(0LL, a1, 3872LL, 1LL);
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x10) != 0 )
      return IncVisWindows(a1, v4, v5, v6);
  }
  return result;
}
