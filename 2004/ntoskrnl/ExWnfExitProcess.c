/*
 * XREFs of ExWnfExitProcess @ 0x140620214
 * Callers:
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteScopeById @ 0x14061D4EC (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x140620270 (ExpWnfDeleteProcessContext.c)
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
