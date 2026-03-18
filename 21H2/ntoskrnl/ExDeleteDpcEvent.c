/*
 * XREFs of ExDeleteDpcEvent @ 0x14063E310
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExDeleteDpcEvent(ULONG_PTR BugCheckParameter3)
{
  ObfDereferenceObjectWithTag(*(PVOID *)(BugCheckParameter3 + 56), 0x65447845u);
  return ExFreeHeapPool(BugCheckParameter3);
}
