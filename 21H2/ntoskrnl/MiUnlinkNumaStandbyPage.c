/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x14039CB94
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14025948C (MiReplaceNumaStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x1402346F4 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 */

unsigned __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 PfnPriority; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  PfnPriority = (unsigned int)MiGetPfnPriority(a1);
  v4 = *(unsigned __int8 *)(v2 + 39) | (*(_QWORD *)v2 >> 28) & 0xFFFFFFF00LL;
  v5 = *(unsigned __int16 *)(v2 + 36) | (*(_QWORD *)(v2 + 24) >> 20) & 0xFFFFF0000LL;
  v6 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
     + 4544LL * *((unsigned int *)MiSearchNumaNodeTable((v2 + 0x58000000000LL) / 48) + 2);
  result = MiGetPfnChannel(a1);
  v8 = PfnPriority + 8LL * (unsigned int)result;
  v9 = 3 * v8;
  if ( v4 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v6 + 24 * v8 + 3272) = v5;
  }
  else
  {
    v10 = 48 * v4 - 0x58000000000LL;
    *(_WORD *)(v10 + 36) = v5;
    result = MiSetPfnNodeBlinkHigh(v10, v5 >> 16, 0);
  }
  if ( v5 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v6 + 8 * v9 + 3264) = v4;
  }
  else
  {
    v11 = 48 * v5 - 0x58000000000LL;
    v12 = *(_QWORD *)v11 ^ (v4 << 28);
    *(_BYTE *)(v11 + 39) = v4;
    result = (v4 << 28) ^ v12 & 0xFFFFFFFFFLL;
    *(_QWORD *)v11 = result;
  }
  --*(_QWORD *)(v6 + 8 * v9 + 3256);
  return result;
}
