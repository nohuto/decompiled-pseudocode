/*
 * XREFs of MiTrimPte @ 0x140313650
 * Callers:
 *     <none>
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiIsPageTableLocked @ 0x14023B6D8 (MiIsPageTableLocked.c)
 *     MiTrimWorkingSetTail @ 0x1402551F0 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x140255258 (MiTrimWorkingSetBuildup.c)
 *     MiTrimThisWsle @ 0x140313AF0 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiComputeNextWalkPte @ 0x14053B1A8 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x14053B640 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  BOOL v9; // r9d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rbx
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rbp
  unsigned __int64 *v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r12
  unsigned int v31; // r14d
  __int64 v32; // rbx
  int v35; // [rsp+80h] [rbp+18h] BYREF

  v35 = 0;
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
      v11 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v12 = v7 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v7;
      v7 = v12;
      if ( (v11 & 0x42) != 0 )
        v7 = v12 | 0x42;
    }
  }
  v13 = *(_QWORD *)(a1 + 168);
  v14 = *(_QWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 8);
  if ( v14 == v15 )
    return 3LL;
  v16 = *(_DWORD *)v13;
  if ( (*(_DWORD *)v13 & 0x400) != 0
    && ((v16 & 0x800) != 0 && v14 >= 0x100 || *(_QWORD *)(v6 + 136) <= (unsigned __int64)(*(_QWORD *)(v13 + 48) - v15)) )
  {
    return 3LL;
  }
  if ( (v16 & 0x1000) == 0 )
    **(_QWORD **)(v6 + 16) = MiComputeNextWalkPte(a2, v9);
  v17 = *(_QWORD *)a2;
  if ( (unsigned int)MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v18 )
    {
      v19 = *((_QWORD *)&v18->Flink + ((a2 >> 3) & 0x1FF));
      v20 = v17 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v17;
      v17 = v20;
      if ( (v19 & 0x42) != 0 )
        v17 = v20 | 0x42;
    }
  }
  v21 = (_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 && ((v21[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v6, a2)) )
    return 0LL;
  if ( (v21[5] & 0x1000000000LL) == 0 )
  {
    v22 = v21[1];
    if ( v22 > 0 && (unsigned int)MiDemoteCombinedPte(v6, a2, v22 | 0x8000000000000000uLL) == 1 )
      v7 = MI_READ_PTE_LOCK_FREE(a2);
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v25 = *v24;
    if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v27 )
      {
        v28 = *((_QWORD *)&v27->Flink + ((v26 >> 3) & 0x1FF));
        v29 = v25 | 0x20;
        if ( (v28 & 0x20) == 0 )
          v29 = v25;
        v25 = v29;
        if ( (v28 & 0x42) != 0 )
          v25 = v29 | 0x42;
      }
    }
    v23 = HIBYTE(v25) & 0xF;
  }
  else
  {
    LODWORD(v23) = (*(_DWORD *)(48
                              * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x58000000000LL) >> 1) & 7;
  }
  v30 = *(_QWORD *)(a1 + 24);
  v31 = *(_DWORD *)v13 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v30, v8, (_DWORD)v21, v13, (v7 >> 5) & 1, (__int64)&v35) )
    goto LABEL_60;
  MiInsertTbFlushEntry(v13 + 56, v8, 1LL, 0LL);
  if ( (*(_DWORD *)v13 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(v30, a2);
  if ( ++*(_QWORD *)(v13 + 16) == *(_QWORD *)(v13 + 8) || *(_DWORD *)(v13 + 68) == *(_DWORD *)(v13 + 64) )
  {
    v32 = a1;
    MiTrimWorkingSetBuildup(a1, v13);
    if ( *(_QWORD *)(v13 + 16) == *(_QWORD *)(v13 + 8) )
      return 3LL;
  }
  else
  {
LABEL_60:
    v32 = a1;
  }
  if ( v35 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v13 + 240), v8) )
  {
    MiTrimWorkingSetTail(v32);
    return 0LL;
  }
  if ( (unsigned int)v23 < v31 )
    return 0LL;
  if ( ++*(_QWORD *)(v13 + 32) < *(_QWORD *)(v13 + 40) )
    return 0LL;
  return 3LL;
}
