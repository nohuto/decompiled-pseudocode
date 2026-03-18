/*
 * XREFs of MiTrimPte @ 0x1403731C0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPageTableLocked @ 0x140228C50 (MiIsPageTableLocked.c)
 *     MiGetVaAge @ 0x140274D80 (MiGetVaAge.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiTrimThisWsle @ 0x1403735A0 (MiTrimThisWsle.c)
 *     MiTrimWorkingSetTail @ 0x1403737D0 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x140373880 (MiTrimWorkingSetBuildup.c)
 *     MiComputeNextWalkPte @ 0x14045BB38 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x14045BBAE (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  BOOL v9; // r9d
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rbx
  __int64 v22; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  char v25; // dl
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  int v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  v8 = (__int64)(a2 << 25) >> 16;
  v9 = a3 == 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v24 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v25 = v7 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v7;
      LOBYTE(v7) = v25;
      if ( (v24 & 0x42) != 0 )
        LOBYTE(v7) = v25 | 0x42;
    }
  }
  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 8);
  if ( v11 == v12
    || (*(_DWORD *)v10 & 0x4000) != 0
    && ((*(_DWORD *)v10 & 0x8000) != 0 && v11 >= 0x100
     || *(_QWORD *)(v6 + 144) <= (unsigned __int64)(*(_QWORD *)(v10 + 56) - v12)) )
  {
    return 4LL;
  }
  if ( (*(_DWORD *)v10 & 0x10000) == 0 )
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = MiComputeNextWalkPte(a2, v9);
  v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a3 && ((*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v6, a2)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 > 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(v6, a2, v14 | 0x8000000000000000uLL) )
        LOBYTE(v7) = MI_READ_PTE_LOCK_FREE(a2);
    }
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL
      && v15 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v26 )
      {
        v27 = *((_QWORD *)&v26->Flink + ((v15 >> 3) & 0x1FF));
        v28 = v16 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v16;
        v16 = v28;
        if ( (v27 & 0x42) != 0 )
          v16 = v28 | 0x42;
      }
    }
    v17 = HIBYTE(v16) & 0xF;
  }
  else
  {
    LODWORD(v17) = (*(_DWORD *)(48
                              * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                              - 0x220000000000LL) >> 1) & 7;
  }
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(_DWORD *)v10 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v18, v8, v13, v10, (v7 & 0x20) != 0, (__int64)&v30) )
    goto LABEL_15;
  MiInsertTbFlushEntry(v10 + 64, v8, 1LL, 0);
  if ( (*(_DWORD *)v10 & 0x100) != 0
    && (v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL || MiGetVaAge(v22, v8) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    MiLogPageAccess(v18, a2);
  }
  if ( ++*(_QWORD *)(v10 + 16) != *(_QWORD *)(v10 + 8) && *(_DWORD *)(v10 + 76) != *(_DWORD *)(v10 + 72) )
  {
LABEL_15:
    v20 = a1;
LABEL_16:
    if ( v30 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v10 + 248), v8) )
    {
      MiTrimWorkingSetTail(v20);
    }
    else if ( (unsigned int)v17 >= v19 && ++*(_QWORD *)(v10 + 40) >= *(_QWORD *)(v10 + 48) )
    {
      return 4LL;
    }
    return 0LL;
  }
  v20 = a1;
  MiTrimWorkingSetBuildup(a1, v10);
  if ( *(_QWORD *)(v10 + 16) != *(_QWORD *)(v10 + 8) )
    goto LABEL_16;
  return 4LL;
}
