/*
 * XREFs of NtAcceptConnectPort @ 0x1406E3410
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAcceptConnectPort(
        unsigned __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(a1, 0, 0LL, 0LL, 0LL, a2, a3, 0LL, a4, a5, a6, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( v7 == -1073740029 )
    return (unsigned int)-1073741813;
  return v7;
}
