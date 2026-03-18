/*
 * XREFs of AcpiMemarbFindSuitableRange @ 0x1C00AFF30
 * Callers:
 *     <none>
 * Callees:
 *     ArbFindSuitableRange @ 0x1C0091640 (ArbFindSuitableRange.c)
 */

char __fastcall AcpiMemarbFindSuitableRange(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL) & 1) != 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  return ArbFindSuitableRange(a1, a2);
}
