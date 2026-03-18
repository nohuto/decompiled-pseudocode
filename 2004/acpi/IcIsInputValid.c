/*
 * XREFs of IcIsInputValid @ 0x1C0096924
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096BD8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6FEC (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     <none>
 */

char __fastcall IcIsInputValid(unsigned int a1)
{
  __int64 i; // rax

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      return 1;
  }
  return 0;
}
