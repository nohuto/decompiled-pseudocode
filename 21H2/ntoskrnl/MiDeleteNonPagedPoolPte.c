/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x14021ADB0
 * Callers:
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiInitializeTbFlushStamps @ 0x14021B0C0 (MiInitializeTbFlushStamps.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14021B470 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r9
  int i; // eax
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r11d
  bool v17; // zf
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  char v27[56]; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)v27 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = *(_QWORD *)v27;
  if ( (v27[0] & 1) == 0 || a3 > 1 )
    return 0LL;
  v7 = 1LL;
  for ( i = a3; i; --i )
    v7 <<= 9;
  v9 = BugCheckParameter2[21];
  if ( v27[0] >= 0 )
  {
    v10 = *(_QWORD *)v27;
    if ( (unsigned int)MiPteInShadowRange(v27)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v6 |= 0x20uLL;
        v26 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v27 >> 3) & 0x1FF));
        if ( (v26 & 0x20) == 0 )
          v6 = v10;
        if ( (v26 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
      else
      {
        v6 = *(_QWORD *)v27;
      }
    }
    v11 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL);
    v12 = v11 - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock(&unk_140C4F680, a2, ZeroPte, 2LL) )
      {
        return 0LL;
      }
LABEL_12:
      v16 = *(_DWORD *)(v9 + 208);
      if ( !v16 )
        *(_QWORD *)(v9 + 216) = MiGetContainingPageTable(a2);
      *(_DWORD *)(v9 + 208) = v16 + 1;
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v28);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v9 + 204) & 2) == 0 )
      {
        if ( *(_WORD *)(v12 + 32) != 1 )
          KeBugCheckEx(0x4Eu, 0x9AuLL, v11 / 48, *(_BYTE *)(v12 + 34) & 7, *(unsigned __int16 *)(v12 + 32));
        *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 5;
      }
      if ( a3 )
      {
        *(_QWORD *)v12 = *(_QWORD *)(v9 + 192);
        *(_QWORD *)(v9 + 192) = v12;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiInsertRecursiveTbFlushEntries(v9, (unsigned int)a3, a2);
        return 0LL;
      }
      if ( (*(_DWORD *)(v9 + 204) & 2) == 0 )
      {
        *(_QWORD *)v12 = *(_QWORD *)(v9 + 184);
        *(_QWORD *)(v9 + 184) = v12;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = (*(_DWORD *)(v9 + 200) & 0x40000000) == 0;
      *(_QWORD *)v27 = 0LL;
      if ( !v17 )
        goto LABEL_24;
      MiInitializeTbFlushStamps(v27);
      v18 = *(_QWORD *)v27;
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v20, v19) )
        {
          if ( !HIBYTE(word_140C4E048) && (v18 & 1) != 0 )
            v18 |= 0x8000000000000000uLL;
          *a2 = v18;
          MiWritePteShadow(a2);
          goto LABEL_24;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v18 & 1) != 0 )
        {
          v18 |= 0x8000000000000000uLL;
        }
      }
      *a2 = v18;
LABEL_24:
      v21 = *(_QWORD *)v27;
      if ( qword_140C4DF80 && (v27[0] & 0x10) == 0 )
        v21 = *(_QWORD *)v27 & ~qword_140C4DF80;
      if ( (v21 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(v9, (__int64)((_QWORD)a2 << 25) >> 16, 1LL, 0LL);
      return 0LL;
    }
    if ( (*(_DWORD *)(v9 + 204) & 1) == 0 )
      return 0LL;
    v13 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v15, v14) )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v13 = ZeroPte | 0x8000000000000000uLL;
        *a2 = v13;
        MiWritePteShadow(a2);
        goto LABEL_10;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v13 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *a2 = v13;
LABEL_10:
    if ( (*(_BYTE *)(v12 + 35) & 0x10) == 0 )
      ++*(_DWORD *)(v9 + 212);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v9 + 204) & 1) != 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    if ( LeafVa < BugCheckParameter2[4] || LeafVa + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
      KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, LeafVa, BugCheckParameter4);
    MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
    *(_DWORD *)(v9 + 212) += 512;
  }
  return 0LL;
}
