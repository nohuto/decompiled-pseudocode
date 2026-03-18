/*
 * XREFs of IrqArbFindSuitableRange @ 0x1C00915A0
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpFindSuitableRangeMsi @ 0x1C0091494 (IrqArbpFindSuitableRangeMsi.c)
 *     ArbFindSuitableRange @ 0x1C0091640 (ArbFindSuitableRange.c)
 *     PcisuppIsPciDevice @ 0x1C00938C0 (PcisuppIsPciDevice.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096BD8 (IrqArbpFindSuitableRangeIsa.c)
 */

char __fastcall IrqArbFindSuitableRange(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( (unsigned __int8)ArbFindSuitableRange(a1, a2) )
  {
    if ( (unsigned __int64)(*(_QWORD *)a2 - 4293918720LL) <= 0xFFFFE )
      return IrqArbpFindSuitableRangeMsi(a1, (_DWORD *)a2);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 4LL) & 0x20) != 0 )
      return IrqArbpFindSuitableRangeIsa(a1, a2);
    if ( (int)PcisuppIsPciDevice(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL), &v6) >= 0 )
    {
      if ( v6 )
        return IrqArbpFindSuitableRangePci(v5, a2);
      return IrqArbpFindSuitableRangeIsa(a1, a2);
    }
  }
  return 0;
}
