/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C0113CA4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C00378D0 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C0122BC4 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, __int64 a3)
{
  if ( a2 == 20 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 72LL) )
      return 0LL;
    xxxFillWindow((struct tagWND *)a1, (struct tagWND *)a1, a3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
