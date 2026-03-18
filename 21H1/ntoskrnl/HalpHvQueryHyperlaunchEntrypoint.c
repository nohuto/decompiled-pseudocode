/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x1404CCC5C
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098B9E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
