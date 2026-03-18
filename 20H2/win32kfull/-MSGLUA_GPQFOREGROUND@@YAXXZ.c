/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00E7C7C
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008630 (EditionChangeForegroundQueueForMouseInput.c)
 *     EditionLLMouseButtonHook @ 0x1C00780A0 (EditionLLMouseButtonHook.c)
 *     xxxInternalKeyEventDirect @ 0x1C00BA7D0 (xxxInternalKeyEventDirect.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C00E7B60 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0108760 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0121330 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D92D0 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
}
