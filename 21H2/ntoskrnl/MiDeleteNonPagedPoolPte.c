/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x1402964D0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140296238 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInitializeTbFlushStamps @ 0x1402967E0 (MiInitializeTbFlushStamps.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402974A8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiEvictPageTableLock @ 0x14030C620 (MiEvictPageTableLock.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDecommitLargePoolVa @ 0x140370CE0 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, unsigned __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  int i; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r11d
  bool v22; // zf
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v33; // rax
  char v34[56]; // [rsp+30h] [rbp-38h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)v34 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)v34;
  if ( (v34[0] & 1) == 0 || a3 > 1 )
    return 0LL;
  v9 = 1LL;
  for ( i = a3; i; --i )
    v9 <<= 9;
  v11 = BugCheckParameter2[21];
  if ( v34[0] >= 0 )
  {
    v12 = *(_QWORD *)v34;
    if ( (unsigned int)MiPteInShadowRange(v34, v6)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v8 |= 0x20uLL;
        v33 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v34 >> 3) & 0x1FF));
        if ( (v33 & 0x20) == 0 )
          v8 = v12;
        if ( (v33 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = *(_QWORD *)v34;
      }
    }
    v14 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL);
    v15 = v14 - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock(&unk_140C4F640, a2, ZeroPte, 2LL) )
      {
        return 0LL;
      }
LABEL_12:
      v21 = *(_DWORD *)(v11 + 208);
      if ( !v21 )
        *(_QWORD *)(v11 + 216) = MiGetContainingPageTable(a2);
      *(_DWORD *)(v11 + 208) = v21 + 1;
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35, v17, v19, v20);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
      {
        if ( *(_WORD *)(v15 + 32) != 1 )
          KeBugCheckEx(0x4Eu, 0x9AuLL, v14 / 48, *(_BYTE *)(v15 + 34) & 7, *(unsigned __int16 *)(v15 + 32));
        *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 5;
      }
      if ( a3 )
      {
        *(_QWORD *)v15 = *(_QWORD *)(v11 + 192);
        *(_QWORD *)(v11 + 192) = v15;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertRecursiveTbFlushEntries(v11, (unsigned int)a3, a2);
        return 0LL;
      }
      if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
      {
        *(_QWORD *)v15 = *(_QWORD *)(v11 + 184);
        *(_QWORD *)(v11 + 184) = v15;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v22 = (*(_DWORD *)(v11 + 200) & 0x40000000) == 0;
      *(_QWORD *)v34 = 0LL;
      if ( !v22 )
        goto LABEL_24;
      MiInitializeTbFlushStamps(v34);
      v23 = *(_QWORD *)v34;
      if ( (unsigned int)MiPteInShadowRange(a2, v24) )
      {
        if ( (unsigned int)MiPteHasShadow(v26, v25, v27, v28) )
        {
          if ( !HIBYTE(word_140C4E008) && (v23 & 1) != 0 )
            v23 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v23;
          MiWritePteShadow(a2, v23);
          goto LABEL_24;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v23 & 1) != 0 )
        {
          v23 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v23;
LABEL_24:
      v29 = *(_QWORD *)v34;
      if ( qword_140C4DF40 && (v34[0] & 0x10) == 0 )
        v29 = *(_QWORD *)v34 & ~qword_140C4DF40;
      if ( (v29 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(v11, (__int64)(a2 << 25) >> 16, 1LL, 0LL);
      return 0LL;
    }
    if ( (*(_DWORD *)(v11 + 204) & 1) == 0 )
      return 0LL;
    v16 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(a2, Flink) )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v16 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a2 = v16;
        MiWritePteShadow(a2, v16);
        goto LABEL_10;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v16;
LABEL_10:
    if ( (*(_BYTE *)(v15 + 35) & 0x10) == 0 )
      ++*(_DWORD *)(v11 + 212);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v11 + 204) & 1) != 0 )
  {
    LeafVa = MiGetLeafVa(a2, v6, v7, v9);
    if ( LeafVa < BugCheckParameter2[4] || LeafVa + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
      KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, LeafVa, BugCheckParameter4);
    MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
    *(_DWORD *)(v11 + 212) += 512;
  }
  return 0LL;
}
