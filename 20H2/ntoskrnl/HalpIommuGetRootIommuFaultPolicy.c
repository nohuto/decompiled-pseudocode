/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x140331D6C
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3564LL);
}
