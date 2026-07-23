/*
 * XREFs of MiLargePfnPromoteCandidate @ 0x1403F7020
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14030DEF0 (MiCoalesceFreeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 */

_BOOL8 __fastcall MiLargePfnPromoteCandidate(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // r9
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_BYTE *)(a2 + 34) & 7u) <= 1 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( (v3 & 0x1000000000LL) != 0
      && *(_QWORD *)(qword_140C4E688 + 8 * ((v3 >> 39) & 0x3FF)) == a1
      && (*(_BYTE *)(a2 + 35) & 0x40) == 0
      && !MiIsPageOnBadList(a2)
      && v4 == 3 - (*(_BYTE *)(v5 + 39) & 3) )
    {
      return 1;
    }
  }
  return result;
}
