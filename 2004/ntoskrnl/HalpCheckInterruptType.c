/*
 * XREFs of HalpCheckInterruptType @ 0x1404CBA4C
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404CBC7C (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x140861EB4 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403C23C0 (HalpIsInterruptTypeSecondary.c)
 */

bool __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary(a1[2], a1[16]);
  return result;
}
