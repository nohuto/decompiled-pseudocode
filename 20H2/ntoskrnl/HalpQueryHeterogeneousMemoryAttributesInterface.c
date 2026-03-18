/*
 * XREFs of HalpQueryHeterogeneousMemoryAttributesInterface @ 0x1406DDE3C
 * Callers:
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(_QWORD *a1)
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  return 0LL;
}
