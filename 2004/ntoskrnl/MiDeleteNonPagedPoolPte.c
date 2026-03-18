/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x14032DE00
 * Callers:
 *     MiClearNonPagedPtes @ 0x14032DB6C (MiClearNonPagedPtes.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushStamps @ 0x1402B68D0 (MiInitializeTbFlushStamps.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14032E450 (MiInsertRecursiveTbFlushEntries.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, unsigned __int64 a2, int a3)
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
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r11d
  bool v19; // zf
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  char v31[56]; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)v31 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = *(_QWORD *)v31;
  if ( (v31[0] & 1) == 0 || a3 > 1 )
    return 0LL;
  v7 = 1LL;
  for ( i = a3; i; --i )
    v7 <<= 9;
  v9 = BugCheckParameter2[21];
  if ( v31[0] >= 0 )
  {
    v10 = *(_QWORD *)v31;
    if ( MiPteInShadowRange((unsigned __int64)v31)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v6 |= 0x20uLL;
        v30 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v31 >> 3) & 0x1FF));
        if ( (v30 & 0x20) == 0 )
          v6 = v10;
        if ( (v30 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
      else
      {
        v6 = *(_QWORD *)v31;
      }
    }
    v11 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL);
    v12 = v11 - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock(&unk_140C4F440, a2, ZeroPte, 2LL) )
      {
        return 0LL;
      }
LABEL_12:
      v18 = *(_DWORD *)(v9 + 208);
      if ( !v18 )
        *(_QWORD *)(v9 + 216) = MiGetContainingPageTable(a2);
      *(_DWORD *)(v9 + 208) = v18 + 1;
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v14, v16, v17);
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
      v19 = (*(_DWORD *)(v9 + 200) & 0x40000000) == 0;
      *(_QWORD *)v31 = 0LL;
      if ( !v19 )
        goto LABEL_24;
      MiInitializeTbFlushStamps((unsigned __int64)v31);
      v20 = *(_QWORD *)v31;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v20 & 1) != 0 )
            v20 |= 0x8000000000000000uLL;
          *(_QWORD *)a2 = v20;
          MiWritePteShadow(a2, v20);
          goto LABEL_24;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v20 & 1) != 0 )
        {
          v20 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v20;
LABEL_24:
      v25 = *(_QWORD *)v31;
      if ( qword_140C4DD40 && (v31[0] & 0x10) == 0 )
        v25 = *(_QWORD *)v31 & ~qword_140C4DD40;
      if ( (v25 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0);
      return 0LL;
    }
    if ( (*(_DWORD *)(v9 + 204) & 1) == 0 )
      return 0LL;
    v13 = ZeroPte;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
          v13 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a2 = v13;
        MiWritePteShadow(a2, v13);
        goto LABEL_10;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v13 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v13;
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
