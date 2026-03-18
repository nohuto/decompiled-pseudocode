/*
 * XREFs of ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00EB62C
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008640 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C003AC50 (xxxInternalKeyEventDirect.c)
 *     EditionLLMouseButtonHook @ 0x1C0043AC0 (EditionLLMouseButtonHook.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C00EB510 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0107A60 (EditionForegroundQAccessibleToMouseProducer.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C011FF00 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9F90 (EditionLLMouseWheelHook.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void MSGLUA_GPQFOREGROUND(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  EtwTraceUIPIInputError(ThreadWin32Thread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
}
