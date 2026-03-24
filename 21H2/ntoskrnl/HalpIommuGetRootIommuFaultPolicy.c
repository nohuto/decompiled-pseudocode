/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x1402D400C
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3564LL);
}
