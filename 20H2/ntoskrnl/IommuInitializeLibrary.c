/*
 * XREFs of IommuInitializeLibrary @ 0x1403B2778
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140A90904 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListLock = 0LL;
  qword_140C48BA8 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
