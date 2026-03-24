/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1408D67C0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 */

int __fastcall NtAllocateUserPhysicalPages(void *a1, unsigned __int64 *a2, volatile void *a3)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, 0LL, 0);
}
