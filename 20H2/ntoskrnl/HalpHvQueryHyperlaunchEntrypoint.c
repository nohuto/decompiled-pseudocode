/*
 * XREFs of HalpHvQueryHyperlaunchEntrypoint @ 0x1404D06AC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpHvQueryHyperlaunchEntrypoint())()
{
  return HalpLMStubForVM;
}
