/*
 * XREFs of IommuInitializeLibrary @ 0x1403B0188
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B5B0 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140A8ABF4 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListLock = 0LL;
  qword_140C48B38 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
