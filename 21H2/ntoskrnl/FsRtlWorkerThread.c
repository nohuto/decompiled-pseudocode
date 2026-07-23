/*
 * XREFs of FsRtlWorkerThread @ 0x1403CE980
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeRemoveQueue @ 0x1402A7710 (KeRemoveQueue.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY BugCheckParameter4; // rbx
  unsigned __int8 CurrentIrql; // cl

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    BugCheckParameter4 = KeRemoveQueue(v2, 0, 0LL);
    ((void (__fastcall *)(struct _LIST_ENTRY *))BugCheckParameter4[1].Flink)(BugCheckParameter4[1].Blink);
  }
  while ( !KeGetCurrentIrql() );
  CurrentIrql = KeGetCurrentIrql();
  KeBugCheckEx(
    0xC8u,
    ((unsigned __int64)CurrentIrql << 16) | 2,
    (ULONG_PTR)BugCheckParameter4[1].Flink,
    (ULONG_PTR)BugCheckParameter4[1].Blink,
    (ULONG_PTR)BugCheckParameter4);
}
