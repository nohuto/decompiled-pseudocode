/*
 * XREFs of ExWnfExitProcess @ 0x140650E54
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteScopeById @ 0x14064E12C (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140650EB0 (ExpWnfDeleteProcessContext.c)
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
    ExpWnfDeleteScopeById(3u, (__int64)&v5, 8u);
  KeLeaveCriticalRegion();
}
