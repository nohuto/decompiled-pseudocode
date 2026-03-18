/*
 * XREFs of ?TryCopyMemoryFromProbedPointer@@YG_NPAX0I@Z @ 0x8D176
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

char __userpurge TryCopyMemoryFromProbedPointer@<al>(
        const void *a1@<edx>,
        void *a2@<ecx>,
        size_t MaxCount,
        void *a4,
        unsigned int a5)
{
  memcpy(a2, a1, MaxCount);
  return 1;
}
