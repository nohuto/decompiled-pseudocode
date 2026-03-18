/*
 * XREFs of PsTerminateSystemThread @ 0x1406EA510
 * Callers:
 *     PopIrpWorker @ 0x14039C950 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9790 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 *     IopThreadStart @ 0x14075C340 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x140947020 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v3);
}
