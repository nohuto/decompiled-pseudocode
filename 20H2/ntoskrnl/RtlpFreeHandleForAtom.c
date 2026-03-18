/*
 * XREFs of RtlpFreeHandleForAtom @ 0x14068D0FC
 * Callers:
 *     RtlpFreeAllAtom @ 0x1402E1444 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x140915900 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1406672F8 (ExDestroyHandle.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(unsigned int **)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
