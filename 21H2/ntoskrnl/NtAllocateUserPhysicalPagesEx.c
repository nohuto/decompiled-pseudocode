/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x1408D67E0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 */

int __fastcall NtAllocateUserPhysicalPagesEx(
        void *a1,
        unsigned __int64 *a2,
        volatile void *a3,
        __int64 *a4,
        unsigned int a5)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, a4, a5);
}
