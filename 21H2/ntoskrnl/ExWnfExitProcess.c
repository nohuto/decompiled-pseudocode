/*
 * XREFs of ExWnfExitProcess @ 0x140791970
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteScopeById @ 0x1407914BC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1407919CC (ExpWnfDeleteProcessContext.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v5 + 2152);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, (__int64)&v5, 8u);
  KeLeaveCriticalRegion();
}
