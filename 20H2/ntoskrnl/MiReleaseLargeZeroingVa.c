/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14054E3A8
 * Callers:
 *     MiDecrementHugeContext @ 0x1403979A8 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x140351698 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14039A58C (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
