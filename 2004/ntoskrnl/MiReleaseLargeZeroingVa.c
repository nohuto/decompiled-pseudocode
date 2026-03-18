/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x14054A9D8
 * Callers:
 *     MiDecrementHugeContext @ 0x1403954E8 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14031A67C (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14039810C (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
