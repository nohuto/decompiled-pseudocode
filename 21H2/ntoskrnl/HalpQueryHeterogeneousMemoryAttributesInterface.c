/*
 * XREFs of HalpQueryHeterogeneousMemoryAttributesInterface @ 0x14061D0F4
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(_QWORD *a1)
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  return 0LL;
}
