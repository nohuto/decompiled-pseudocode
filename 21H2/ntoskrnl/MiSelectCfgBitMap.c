/*
 * XREFs of MiSelectCfgBitMap @ 0x140685BE4
 * Callers:
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v5; // ax

  v3 = *(_QWORD *)(a1 + 1408);
  if ( v3
    && ((v5 = *(_WORD *)(v3 + 8), v5 == 332) || v5 == 452)
    && a2 < 0x100000000LL
    && (!a3 || (*(_BYTE *)(a3 + 14) & 0x40) != 0) )
  {
    return *(_QWORD *)(a1 + 1680) + 472LL;
  }
  else
  {
    return *(_QWORD *)(a1 + 1680) + 440LL;
  }
}
