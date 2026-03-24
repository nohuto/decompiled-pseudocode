/*
 * XREFs of ExWnfExitProcess @ 0x140612E8C
 * Callers:
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteProcessContext @ 0x140612EE8 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteScopeById @ 0x1406135B8 (ExpWnfDeleteScopeById.c)
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
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
