/*
 * XREFs of HalpIommuGetRootIommuFaultPolicy @ 0x14025E910
 * Callers:
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpIommuGetRootIommuFaultPolicy(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 240) + 3596LL);
}
