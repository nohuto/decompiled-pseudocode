/*
 * XREFs of HvlGetApicIdFromLpIndex @ 0x1405439E0
 * Callers:
 *     KiQueryProcessorNode @ 0x1403C1A84 (KiQueryProcessorNode.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x14039E528 (HvlpGetLpcbByLpIndex.c)
 */

int *__fastcall HvlGetApicIdFromLpIndex(unsigned int a1, _DWORD *a2)
{
  int *result; // rax
  _DWORD *v3; // r10

  *a2 = -1;
  result = (int *)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = HvlpGetLpcbByLpIndex(a1);
    if ( result )
    {
      result = (int *)(unsigned int)result[2];
      *v3 = (_DWORD)result;
    }
  }
  return result;
}
