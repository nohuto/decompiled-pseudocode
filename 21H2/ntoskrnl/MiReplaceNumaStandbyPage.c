/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x14025948C
 * Callers:
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x1402346F4 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiInsertNumaStandbyPage @ 0x1403345E0 (MiInsertNumaStandbyPage.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 PfnChannel; // rbp
  ULONG_PTR v6; // rsi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  ULONG_PTR v15; // rax

  v4 = *(unsigned int *)(MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 8);
  PfnChannel = (unsigned int)MiGetPfnChannel(a1);
  v6 = (a2 + 0x58000000000LL) / 48;
  v7 = *(_DWORD *)(MiSearchNumaNodeTable(v6) + 8);
  v8 = MiGetPfnChannel(a2);
  if ( (_DWORD)v4 == v7 && (_DWORD)PfnChannel == v8 )
  {
    v9 = 4544 * v4
       + *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
       + 24 * ((unsigned int)MiGetPfnPriority(a1) + 8 * PfnChannel);
    v10 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v10 << 28) ^ (*(_QWORD *)a2 ^ (v10 << 28)) & 0xFFFFFFFFFLL;
    if ( v10 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v9 + 3272) = v6;
    }
    else
    {
      v11 = 48 * v10 - 0x58000000000LL;
      *(_WORD *)(v11 + 36) = v6;
      MiSetPfnNodeBlinkHigh(v11, v6 >> 16, 0);
    }
    v12 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v12 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v12 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v9 + 3264) = v6;
    }
    else
    {
      v14 = 48 * v12 - 0x58000000000LL;
      v15 = *(_QWORD *)v14 ^ (v6 << 28);
      *(_BYTE *)(v14 + 39) = v6;
      result = (v6 << 28) ^ v15 & 0xFFFFFFFFFLL;
      *(_QWORD *)v14 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
