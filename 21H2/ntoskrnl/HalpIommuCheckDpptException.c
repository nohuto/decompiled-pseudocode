/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C90F0
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C9E80 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x1408649C4 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
