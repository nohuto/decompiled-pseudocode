/*
 * XREFs of IvtGetIdentityMappedDomain @ 0x1404DAB74
 * Callers:
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetIdentityMappedDomain(__int64 a1, __int64 *a2)
{
  *a2 = *(__int64 *)(a1 + 272) >> 12;
  return *(unsigned int *)(a1 + 224);
}
