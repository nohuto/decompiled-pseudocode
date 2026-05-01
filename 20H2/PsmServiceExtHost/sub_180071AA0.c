/*
 * XREFs of sub_180071AA0 @ 0x180071AA0
 * Callers:
 *     sub_18007149C @ 0x18007149C (sub_18007149C.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_180071918 @ 0x180071918 (sub_180071918.c)
 */

void __fastcall sub_180071AA0(__int64 a1, __int64 a2)
{
  unsigned int i; // edi

  for ( i = 0; i < *(_DWORD *)(a2 + 36); ++i )
    *(_QWORD *)(a1 + 32) += sub_180071918((_QWORD *)(*(_QWORD *)a2 + ((unsigned __int64)i << 6)));
  *(_DWORD *)(a1 + 72) |= 1u;
}
