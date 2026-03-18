/*
 * XREFs of PiDmObjectManagerInit @ 0x140798A60
 * Callers:
 *     PiDmInit @ 0x140A4FB68 (PiDmInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14023FD70 (RtlInitializeGenericTableAvl.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
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
