/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C41F8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C4F80 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140861394 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
