/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x14056EC2C
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x14056ECDC (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056EE94 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
