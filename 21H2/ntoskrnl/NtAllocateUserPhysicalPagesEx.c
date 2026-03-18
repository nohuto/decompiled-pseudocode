/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x14097D9C0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 */

int __fastcall NtAllocateUserPhysicalPagesEx(
        void *a1,
        unsigned __int64 *a2,
        volatile void *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, a4, a5);
}
