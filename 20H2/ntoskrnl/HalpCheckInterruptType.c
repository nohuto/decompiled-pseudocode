/*
 * XREFs of HalpCheckInterruptType @ 0x1404CEFAC
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x1404CF1DC (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x1408678D4 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403C4B30 (HalpIsInterruptTypeSecondary.c)
 */

bool __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary(a1[2], a1[16]);
  return result;
}
