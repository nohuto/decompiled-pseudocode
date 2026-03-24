/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14054FE78
 * Callers:
 *     MiDecrementHugeContext @ 0x140397E18 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14029A678 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14039A9FC (MiFreeUltraMapping.c)
 */

void *__fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    return (void *)MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  else
    return MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
