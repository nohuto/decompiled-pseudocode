/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x140228170
 * Callers:
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInitializeTbFlushStamps @ 0x1402CCC80 (MiInitializeTbFlushStamps.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiBadRefCount @ 0x1405AD67C (MiBadRefCount.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v7; // r14d
  __int64 v9; // r9
  int i; // eax
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // r15d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a2;
  v7 = MiPteInShadowRange(a2);
  if ( v7
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v22 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a2 >> 3) & 0x1FF));
      v23 = v3 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v23 = v3;
      v3 = v23;
      if ( (v22 & 0x42) != 0 )
        v3 = v23 | 0x42;
    }
  }
  v25 = v3;
  if ( (v3 & 1) != 0 && a3 <= 1 )
  {
    v9 = 1LL;
    for ( i = a3; i; --i )
      v9 <<= 9;
    v11 = BugCheckParameter2[21];
    if ( (v3 & 0x80u) == 0LL )
    {
      v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || !(unsigned int)MiEvictPageTableLock(&unk_140C53BC0, a2, ZeroPte, 2LL) )
        {
          return 0LL;
        }
LABEL_13:
        v14 = *(_DWORD *)(v11 + 208);
        if ( !v14 )
          *(_QWORD *)(v11 + 216) = MiGetContainingPageTable(a2);
        v24 = 0;
        *(_DWORD *)(v11 + 208) = v14 + 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
        {
          if ( *(_WORD *)(v12 + 32) != 1 )
            MiBadRefCount(v12);
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 5;
        }
        if ( a3 )
        {
          *(_QWORD *)v12 = *(_QWORD *)(v11 + 192);
          *(_QWORD *)(v11 + 192) = v12;
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertRecursiveTbFlushEntries(v11, (unsigned int)a3, a2);
          return 0LL;
        }
        if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
        {
          *(_QWORD *)v12 = *(_QWORD *)(v11 + 184);
          *(_QWORD *)(v11 + 184) = v12;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = (*(_DWORD *)(v11 + 200) & 0x40000000) == 0;
        v25 = 0LL;
        if ( !v15 )
          goto LABEL_25;
        MiInitializeTbFlushStamps(&v25);
        v17 = v25;
        if ( v7 )
        {
          if ( (unsigned int)MiPteHasShadow(v16, v25) )
          {
            if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
              v17 |= 0x8000000000000000uLL;
            *a2 = v17;
            MiWritePteShadow(a2, v17);
            goto LABEL_25;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v17 & 1) != 0 )
          {
            v17 |= 0x8000000000000000uLL;
          }
        }
        *a2 = v17;
LABEL_25:
        v18 = v25;
        if ( qword_140C50780 && (v25 & 0x10) == 0 )
          v18 = v25 & ~qword_140C50780;
        if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
          MiInsertTbFlushEntry(v11, (__int64)((_QWORD)a2 << 25) >> 16, 1LL, 0LL);
        return 0LL;
      }
      if ( (*(_DWORD *)(v11 + 204) & 1) == 0 )
        return 0LL;
      v13 = ZeroPte;
      if ( v7 )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFFLL, ZeroPte) )
        {
          if ( !HIBYTE(word_140C51864) && (v13 & 1) != 0 )
            v13 |= 0x8000000000000000uLL;
          *a2 = v13;
          MiWritePteShadow(a2, v13);
          goto LABEL_11;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v13 & 1) != 0 )
        {
          v13 |= 0x8000000000000000uLL;
        }
      }
      *a2 = v13;
LABEL_11:
      if ( (*(_BYTE *)(v12 + 35) & 0x10) == 0 )
        ++*(_DWORD *)(v11 + 212);
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v11 + 204) & 1) != 0 )
    {
      LeafVa = MiGetLeafVa(a2);
      if ( LeafVa < BugCheckParameter2[4] || LeafVa + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
        KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, LeafVa, BugCheckParameter4);
      MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
      *(_DWORD *)(v11 + 212) += 512;
    }
  }
  return 0LL;
}
