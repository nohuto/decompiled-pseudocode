/*
 * XREFs of PiDmObjectManagerInit @ 0x14078A450
 * Callers:
 *     PiDmInit @ 0x140A49A6C (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1402E59F0 (RtlInitializeGenericTableAvl.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    (PRTL_AVL_COMPARE_ROUTINE)PiDmCompareObjects,
    (PRTL_AVL_ALLOCATE_ROUTINE)PiDmAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
