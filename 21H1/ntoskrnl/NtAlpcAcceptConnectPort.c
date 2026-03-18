/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x1406481C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v10;
}
