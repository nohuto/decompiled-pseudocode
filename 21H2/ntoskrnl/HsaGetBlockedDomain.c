/*
 * XREFs of HsaGetBlockedDomain @ 0x1404E3970
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 *     HsaInitializeIommu @ 0x1409AB520 (HsaInitializeIommu.c)
 * Callees:
 *     HalpHsaFindReservedDomain @ 0x1404E18D8 (HalpHsaFindReservedDomain.c)
 */

__int64 __fastcall HsaGetBlockedDomain(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int *ReservedDomain; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (ReservedDomain = (unsigned int *)HalpHsaFindReservedDomain(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)ReservedDomain + 1);
    result = *ReservedDomain;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = HsaBlockedPageTablePhysical;
    result = *(unsigned int *)(a1 + 200);
  }
  *a3 = v8 >> 12;
  return result;
}
