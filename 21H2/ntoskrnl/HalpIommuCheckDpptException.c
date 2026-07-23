/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C9330
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404CA0C0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
