/*
 * XREFs of _LdrAllocateMrdataHeap@4 @ 0x4B2EC928
 * Callers:
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 */

int __fastcall LdrAllocateMrdataHeap(unsigned int a1)
{
  if ( !LdrControlFlowGuardEnforced() )
    return RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  if ( a1 >= 0x7F000 )
    return 0;
  return RtlAllocateHeap(LdrpMrdataHeap, 0, a1);
}
