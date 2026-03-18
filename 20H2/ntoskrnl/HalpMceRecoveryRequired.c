/*
 * XREFs of HalpMceRecoveryRequired @ 0x1404CED88
 * Callers:
 *     HalpMceRecovery @ 0x1404CE8D0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x1404CE9A0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1404CEA8C (HalpMceRecoveryMemoryErrorIntel.c)
 */

__int64 __fastcall HalpMceRecoveryRequired(__int64 a1)
{
  __int16 v1; // r8
  unsigned int v2; // edx

  v1 = *(_WORD *)(a1 + 40);
  v2 = -1073741637;
  if ( (v1 & 0xEF00) == 0x100 )
  {
    if ( *(_DWORD *)(a1 + 4) == 1 )
      return (unsigned int)HalpMceRecoveryMemoryErrorIntel(a1);
    else
      return (unsigned int)HalpMceRecoveryMemoryErrorAmd(a1);
  }
  else if ( (v1 & 0xE800) == 0x800 )
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
