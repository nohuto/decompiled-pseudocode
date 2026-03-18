/*
 * XREFs of KiAcquireSecondaryPassiveConnectLock @ 0x1405134E4
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x140513594 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051374C (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiAcquireSecondaryPassiveConnectLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
}
