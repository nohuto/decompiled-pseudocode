/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x14032349C
 * Callers:
 *     HalpIommuInitSystem @ 0x140997040 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3564LL);
}
