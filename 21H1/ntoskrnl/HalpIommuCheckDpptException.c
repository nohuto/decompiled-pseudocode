/*
 * XREFs of HalpIommuCheckDpptException @ 0x1404C3D88
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404C4AD0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140860044 (HalpIommuCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuCheckDpptException(_DWORD *a1)
{
  return *a1 == 6 || HalpIommuSecurityPolicy != 1;
}
