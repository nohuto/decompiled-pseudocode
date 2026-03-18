/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14054A388
 * Callers:
 *     MiDecrementHugeContext @ 0x140394918 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1403499BC (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x1403974FC (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
