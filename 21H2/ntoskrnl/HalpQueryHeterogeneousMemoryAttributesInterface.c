/*
 * XREFs of HalpQueryHeterogeneousMemoryAttributesInterface @ 0x1406E2A44
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A47990 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(_QWORD *a1)
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  return 0LL;
}
