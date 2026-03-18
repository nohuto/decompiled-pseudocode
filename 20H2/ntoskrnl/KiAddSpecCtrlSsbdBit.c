/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x140519B90
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_BYTE *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
