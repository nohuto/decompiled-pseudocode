/*
 * XREFs of HaliSetMaxLegacyPciBusNumber @ 0x1403A4C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HaliSetMaxLegacyPciBusNumber(unsigned int a1)
{
  if ( a1 > HalpMaxPciBus )
    HalpMaxPciBus = a1;
}
