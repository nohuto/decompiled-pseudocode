/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x14051E8FC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A47990 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
