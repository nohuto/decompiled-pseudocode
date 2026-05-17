/*
 * XREFs of _GetResourceDirectoryEntry@12 @ 0x4B2DA7B2
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 * Callees:
 *     _ValidatePointer@12 @ 0x4B2DA9D7 (_ValidatePointer@12.c)
 */

int __fastcall GetResourceDirectoryEntry(int a1, int a2, unsigned int a3)
{
  int v3; // edx

  if ( a3 < *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14) && ValidatePointer(8) )
    return v3;
  else
    return 0;
}
