/*
 * XREFs of _FindDirectoryEntry@16 @ 0x4B2DAA0D
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 * Callees:
 *     _ValidatePointer@12 @ 0x4B2DA9D7 (_ValidatePointer@12.c)
 */

int *__fastcall FindDirectoryEntry(unsigned int *a1, int *a2, unsigned int a3, int a4)
{
  int v4; // esi

  v4 = 0;
  if ( !a3 )
    return 0;
  while ( *a2 < 0 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( ValidatePointer(a1, (unsigned int)(a2 + 2), 8) )
    {
      if ( ++v4 < a3 )
        continue;
    }
    return 0;
  }
  if ( a2[1] < 0 )
    return a2;
  else
    return 0;
}
