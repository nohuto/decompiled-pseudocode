/*
 * XREFs of ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C008828C
 * Callers:
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0084B78 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0074878 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall FreeVadAvl(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  CVirtualAddressAllocator::FreeVad((struct VIDMM_VAD *)a1);
}
