/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C00D09EC
 * Callers:
 *     EngCombineRgn @ 0x1C014EF30 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014EFD0 (EngCopyRgn.c)
 *     EngCreateRectRgn @ 0x1C014F050 (EngCreateRectRgn.c)
 *     EngDeleteRgn @ 0x1C014F0D0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014F140 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014F1F0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014F250 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014F2C0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014F360 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014F3D0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014F430 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014F4C0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014F560 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014F600 (EngXorRgn.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
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
