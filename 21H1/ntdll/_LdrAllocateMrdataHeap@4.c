/*
 * XREFs of _LdrAllocateMrdataHeap@4 @ 0x4B2EC928
 * Callers:
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 */

PVOID __fastcall LdrAllocateMrdataHeap(unsigned int a1)
{
  int v2; // eax
  SIZE_T v4; // [esp-4h] [ebp-8h]

  LOBYTE(v2) = LdrControlFlowGuardEnforced();
  if ( v2 )
  {
    if ( a1 >= 0x7F000 )
    {
      return 0;
    }
    else
    {
      LODWORD(v4) = a1;
      return RtlAllocateHeap(LdrpMrdataHeap, 0, v4);
    }
  }
  else
  {
    LODWORD(v4) = a1;
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
}
