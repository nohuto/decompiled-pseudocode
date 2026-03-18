/*
 * XREFs of PiHotSwapGetDetachableNode @ 0x140769A24
 * Callers:
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14071DC24 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140769910 (PpHotSwapUpdateRemovalPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiHotSwapGetDetachableNode(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  while ( a1 )
  {
    result = *(unsigned int *)(a1 + 560);
    if ( (result & 0x18) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  *a2 = a1;
  return result;
}
