/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403DE850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HalpEfiCalls != 0;
}
