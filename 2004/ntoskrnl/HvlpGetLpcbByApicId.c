/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1404EDBD0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1403B1CAC (KiQueryProcessorNode.c)
 *     HvlGetLpIndexFromApicId @ 0x1404ECD50 (HvlGetLpIndexFromApicId.c)
 *     HvlpEnableRootVirtualProcessor @ 0x14088B7A8 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByApicId(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = HvlpLogicalProcessorRegions;
  v2 = 0;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 30;
    if ( v2 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0LL;
  }
  return result;
}
