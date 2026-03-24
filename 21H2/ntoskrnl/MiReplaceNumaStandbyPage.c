/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x14026B4EC
 * Callers:
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1402B6514 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiInsertNumaStandbyPage @ 0x140329890 (MiInsertNumaStandbyPage.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 PfnChannel; // rbp
  ULONG_PTR v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  ULONG_PTR v19; // rax

  v4 = *(unsigned int *)(MiSearchNumaNodeTable((a1 + 0x58000000000LL) / 48) + 8);
  PfnChannel = (unsigned int)MiGetPfnChannel(a1, v5, v6);
  v8 = (a2 + 0x58000000000LL) / 48;
  v9 = *(_DWORD *)(MiSearchNumaNodeTable(v8) + 8);
  v12 = MiGetPfnChannel(a2, v10, v11);
  if ( (_DWORD)v4 == v9 && (_DWORD)PfnChannel == v12 )
  {
    v13 = 4544 * v4
        + *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) + 16LL)
        + 24 * ((unsigned int)MiGetPfnPriority(a1) + 8 * PfnChannel);
    v14 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v14 << 28) ^ (*(_QWORD *)a2 ^ (v14 << 28)) & 0xFFFFFFFFFLL;
    if ( v14 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + 3272) = v8;
    }
    else
    {
      v15 = 48 * v14 - 0x58000000000LL;
      *(_WORD *)(v15 + 36) = v8;
      MiSetPfnNodeBlinkHigh(v15, v8 >> 16, 0LL);
    }
    v16 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v16 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v16 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + 3264) = v8;
    }
    else
    {
      v18 = 48 * v16 - 0x58000000000LL;
      v19 = *(_QWORD *)v18 ^ (v8 << 28);
      *(_BYTE *)(v18 + 39) = v8;
      result = (v8 << 28) ^ v19 & 0xFFFFFFFFFLL;
      *(_QWORD *)v18 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
