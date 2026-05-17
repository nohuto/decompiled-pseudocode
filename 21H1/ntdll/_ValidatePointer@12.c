/*
 * XREFs of _ValidatePointer@12 @ 0x4B2DA9D7
 * Callers:
 *     _GetResourceDirectoryEntry@12 @ 0x4B2DA7B2 (_GetResourceDirectoryEntry@12.c)
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 *     _FindDirectoryEntry@16 @ 0x4B2DAA0D (_FindDirectoryEntry@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ValidatePointer(unsigned int *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = *a1;
  v4 = a2 + a3;
  v5 = *a1 + a1[1];
  return v5 >= v3 && v4 >= a2 && a2 <= v5 && v4 <= v5 && a2 >= v3 && v4 >= v3;
}
