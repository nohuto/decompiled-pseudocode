/*
 * XREFs of PsTerminateSystemThread @ 0x140712D90
 * Callers:
 *     PopIrpWorker @ 0x14039C4D0 (PopIrpWorker.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FD670 (InbvRotateGuiBootDisplay.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 *     IopThreadStart @ 0x14076CE00 (IopThreadStart.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     ExpExpirationThread @ 0x14094E0D0 (ExpExpirationThread.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
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
