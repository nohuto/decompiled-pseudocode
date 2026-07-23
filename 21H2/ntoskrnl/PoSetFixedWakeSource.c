/*
 * XREFs of PoSetFixedWakeSource @ 0x1409B2190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PoSetFixedWakeSource(int a1)
{
  PopFixedWakeSourceMask |= a1;
}
