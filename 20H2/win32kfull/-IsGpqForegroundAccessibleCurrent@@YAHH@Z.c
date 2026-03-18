/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C00BAA7C
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C00BA7D0 (xxxInternalKeyEventDirect.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0107278 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return IsGpqForegroundAccessibleExplicit(
           a1,
           ThreadWin32Thread,
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL),
           *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 12LL) & 0x80000000);
}
