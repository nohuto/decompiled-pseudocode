/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C003AEFC
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C003AC50 (xxxInternalKeyEventDirect.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01070C8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return IsGpqForegroundAccessibleExplicit(
           a1,
           ThreadWin32Thread,
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 880LL),
           *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 12LL) & 0x80000000);
}
