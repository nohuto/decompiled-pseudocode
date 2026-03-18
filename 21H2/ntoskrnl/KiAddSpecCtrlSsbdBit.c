/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x140571314
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}
