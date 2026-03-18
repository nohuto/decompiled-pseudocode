/*
 * XREFs of PsTerminateSystemThread @ 0x1406CB620
 * Callers:
 *     PopIrpWorker @ 0x14039D0E0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9DE0 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 *     IopThreadStart @ 0x14075E790 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x140948310 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1406B3A40 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rcx

  v3 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  LOBYTE(v1) = 1;
  return PspTerminateThreadByPointer((__int64)CurrentThread, v3, v1, v2);
}
