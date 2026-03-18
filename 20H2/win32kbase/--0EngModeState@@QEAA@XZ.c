/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00D0688
 * Callers:
 *     EngCombineRgn @ 0x1C014CAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014CB40 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C014CBC0 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C014CC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014CCB0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014CD60 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014CDC0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014CE30 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014CED0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014CF40 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014CFA0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014D030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014D0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014D170 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  __int64 ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)this = ThreadWin32Thread;
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x20u;
  return this;
}
