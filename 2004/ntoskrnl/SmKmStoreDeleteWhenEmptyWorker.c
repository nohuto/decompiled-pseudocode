/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x14035D780
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D0BD0 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDelete @ 0x14070B910 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = SmKmStoreRefFromStoreIndex(v1, v2);
  return SmKmStoreDelete(v4, *(unsigned int *)(*(_QWORD *)v3 + 6016LL), 0LL);
}
