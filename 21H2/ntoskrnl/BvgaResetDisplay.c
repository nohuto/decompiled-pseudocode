/*
 * XREFs of BvgaResetDisplay @ 0x140551B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall BvgaResetDisplay(__int64 a1)
{
  if ( !BvgaBootDriverInstalled || BvgaDisplayState )
    return 0;
  LOBYTE(a1) = 1;
  VidResetDisplay(a1);
  return 1;
}
