/*
 * XREFs of HalpIommuCheckDpptException @ 0x14051A654
 * Callers:
 *     HalpIommuUnblockDevice @ 0x14051BA00 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
