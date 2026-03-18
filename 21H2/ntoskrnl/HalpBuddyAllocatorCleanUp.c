/*
 * XREFs of HalpBuddyAllocatorCleanUp @ 0x1405346B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140534894 (HalpBuddyAllocatorDeleteSubtree.c)
 */

void __fastcall HalpBuddyAllocatorCleanUp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  HalpBuddyAllocatorDeleteSubtree(a1, *(_QWORD *)(a1 + 88));
  HalpMmAllocCtxFree(v2, *(_QWORD *)(a1 + 96));
  HalpMmAllocCtxFree(v3, *(_QWORD *)(a1 + 88));
  HalpMmAllocCtxFree(v4, a1);
}
