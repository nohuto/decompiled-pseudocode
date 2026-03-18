/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00CFFEC
 * Callers:
 *     EngCombineRgn @ 0x1C0155280 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C0155320 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C01553A0 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C0155420 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0155490 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0155540 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C01555A0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C0155610 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C01556B0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0155720 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C0155780 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C0155810 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C01558B0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0155950 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
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
