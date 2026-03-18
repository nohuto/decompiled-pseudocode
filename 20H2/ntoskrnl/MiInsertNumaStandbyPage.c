/*
 * XREFs of MiInsertNumaStandbyPage @ 0x1402ACFE0
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  char v4; // al
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // eax
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = (a1 + 0x58000000000LL) / 48;
  v3 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v4 = *(_BYTE *)(a1 + 35);
  if ( (v4 & 8) != 0 )
    v5 = 5LL;
  else
    v5 = v4 & 7;
  v6 = *(unsigned int *)(MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 8);
  if ( qword_140C4DD50 )
    v7 = MiPageToChannel(v2);
  else
    v7 = 0;
  v8 = (_QWORD *)(*(_QWORD *)(v3 + 16) + 4544 * v6 + 24 * (v5 + 8LL * v7));
  ++v8[407];
  v9 = v8[409];
  if ( v9 == 0xFFFFFFFFFLL )
  {
    v8[408] = v2;
  }
  else
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (*(_QWORD *)v10 ^ (v2 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 39) = v2;
    *(_QWORD *)v10 = (v2 << 28) ^ v11;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v9;
  result = (*(_QWORD *)(a1 + 24) ^ (v9 << 20)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= result;
  v8[409] = v2;
  return result;
}
