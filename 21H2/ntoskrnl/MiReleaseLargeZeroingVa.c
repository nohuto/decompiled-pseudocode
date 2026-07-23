/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1405500B8
 * Callers:
 *     MiDecrementHugeContext @ 0x140397F68 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14021987C (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14039AB4C (MiFreeUltraMapping.c)
 */

void *__fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    return (void *)MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  else
    return MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
