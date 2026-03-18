/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C0061924
 * Callers:
 *     zzzInternalHideCaret @ 0x1C005FE40 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00600AC (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x1C0112850 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0119F70 (CaretBlinkProc.c)
 * Callees:
 *     _ExcludeUpdateRgn @ 0x1C005FF48 (_ExcludeUpdateRgn.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     GreSaveDC @ 0x1C0078370 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  __int64 v5; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_QWORD *)(v0 + 296);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 296)) )
  {
    DC = _GetDC();
    v3 = (HDC)DC;
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 40) + 136LL) )
    {
      v4 = 1;
      GreSaveDC(DC);
      if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 21LL) & 1) != 0 )
        ExcludeUpdateRgn(v3, (struct tagWND *)v1);
    }
    else
    {
      v4 = 0;
    }
    if ( *(_QWORD *)(v0 + 336) > 1uLL )
    {
      v5 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 336));
      NtGdiBitBltInternal(
        v3,
        *(unsigned int *)(v0 + 316),
        *(unsigned int *)(v0 + 320),
        *(unsigned int *)(v0 + 328),
        *(_DWORD *)(v0 + 324),
        ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(ghdcMem, v5);
    }
    else
    {
      GrePolyPatBlt(v3);
    }
    if ( v4 )
      GreRestoreDC(v3, 0xFFFFFFFFLL);
    _ReleaseDC(v3);
  }
  else
  {
    *(_DWORD *)(v0 + 304) &= ~1u;
  }
}
