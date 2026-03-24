/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x14051B5C0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7840 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
