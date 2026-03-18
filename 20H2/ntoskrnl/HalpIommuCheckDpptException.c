/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C7720
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C84B0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140866DB4 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
