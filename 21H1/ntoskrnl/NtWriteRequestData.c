/*
 * XREFs of NtWriteRequestData @ 0x1408BD9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     LpcpCopyRequestData @ 0x1408BD3BC (LpcpCopyRequestData.c)
 */

__int64 __fastcall NtWriteRequestData(void *a1, unsigned __int64 a2, unsigned int a3, char *a4, SIZE_T a5, __int64 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = LpcpCopyRequestData(1, a1, a2, a3, a4, a5, a6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v7;
}
