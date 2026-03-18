/*
 * XREFs of IoQueueWorkItemToNode @ 0x1405016E0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueWorkItemProlog @ 0x14025B18C (IopQueueWorkItemProlog.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B12B8 (ExQueueWorkItemExFromIo.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  char v8; // bl

  v7 = IopQueueWorkItemProlog(a1, a2, a4);
  v8 = ExQueueWorkItemExFromIo(v7, a3, a5);
  if ( !v8 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  return v8;
}
