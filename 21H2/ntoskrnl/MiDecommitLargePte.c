/*
 * XREFs of MiDecommitLargePte @ 0x14053CE20
 * Callers:
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSetLeafPfnBuddy @ 0x14024920C (MiSetLeafPfnBuddy.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 */

_BOOL8 __fastcall MiDecommitLargePte(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // r14
  unsigned __int64 i; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // r13
  BOOL v21; // r14d
  unsigned __int64 LeafVa; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rbx
  unsigned __int64 v26; // rdi
  char v27; // r8
  char v28; // r8
  unsigned __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h] BYREF
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v5 = *(unsigned int *)(a1 + 48);
  v7 = 16LL;
  v8 = (v5 >> 18) & 3;
  v34 = MiVadPageSizes[v8];
  if ( v34 != 16 )
    v7 = 1LL;
  v10 = 0;
  v30 = v7;
  v11 = MiVadPageIndices[v8];
  if ( v11 <= 1 )
    v10 = 2 - v11;
  v31 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = v31;
  v33 = v31 & 1;
  if ( (v31 & 1) != 0 )
  {
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
  }
  else if ( qword_140C4DF80 )
  {
    if ( (v31 & 0x10) != 0 )
      v12 = v31 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v12 = ~qword_140C4DF80 & v31;
  }
  v13 = (_QWORD *)a2;
  v32 = (v12 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < v30; ++i )
  {
    v15 = a3;
    if ( !MiPteInShadowRange((unsigned __int64)v13) )
      goto LABEL_21;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (a3 & 1) != 0 )
        v15 = a3 | 0x8000000000000000uLL;
LABEL_21:
      *v13 = v15;
      goto LABEL_22;
    }
    if ( !HIBYTE(word_140C4E048) && (a3 & 1) != 0 )
      v15 = a3 | 0x8000000000000000uLL;
    *v13 = v15;
    MiWritePteShadow((__int64)v13, v15);
LABEL_22:
    ++v13;
  }
  v19 = v32;
  v20 = v33;
  v21 = !a3 && v10 != 3 && MiReducePteUseCount(a2, v30);
  if ( v20 )
  {
    if ( v10 )
    {
      MiInsertLargeTbFlushEntry(a5, v10, a2);
    }
    else
    {
      LeafVa = MiGetLeafVa(a2);
      MiInsertTbFlushEntry(a5, LeafVa, v34, 0);
    }
  }
  v23 = 48 * v19;
  v24 = v36;
  v25 = v23 - 0x58000000000LL;
  v35 = 0;
  v26 = *(_QWORD *)(v36 + 40);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v35, v16, v17, v18);
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
  MiSetLeafPfnBuddy((_QWORD *)v25, v26);
  v28 = (*(_BYTE *)(v25 + 34) ^ v27) & 7;
  *(_QWORD *)(v24 + 40) = v25;
  *(_BYTE *)(v25 + 34) ^= v28;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v21;
}
