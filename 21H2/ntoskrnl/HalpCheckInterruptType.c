/*
 * XREFs of HalpCheckInterruptType @ 0x14051CF8C
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x14051D1A0 (HalpDisableSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x140909678 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403B4C50 (HalpIsInterruptTypeSecondary.c)
 */

bool __fastcall HalpCheckInterruptType(_DWORD *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 1 )
    return HalpIsInterruptTypeSecondary(a1[2], a1[16]);
  return result;
}
