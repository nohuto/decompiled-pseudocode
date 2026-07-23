/*
 * XREFs of IoTryQueueWorkItem @ 0x14037C500
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x1402AAFA0 (IopQueueWorkItemProlog.c)
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v6; // rax
  char v7; // bl
  void *v9; // rcx

  v6 = IopQueueWorkItemProlog(a1, a2, a4);
  v7 = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v6, a3, 1u);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
