/*
 * XREFs of MiTrimPte @ 0x1402469E0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiTrimThisWsle @ 0x140246E80 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiTrimWorkingSetTail @ 0x1402D3C30 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1402D3C98 (MiTrimWorkingSetBuildup.c)
 *     MiIsPageTableLocked @ 0x14032E7BC (MiIsPageTableLocked.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiComputeNextWalkPte @ 0x140535A98 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x140535F30 (MiInsertVmAccessedEntry.c)
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
  int *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rbx
  __int64 v18; // r9
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rbp
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  struct _LIST_ENTRY *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r12
  unsigned int v32; // r14d
  __int64 v33; // rbx
  int v36; // [rsp+80h] [rbp+18h] BYREF

  v36 = 0;
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
  v13 = *(int **)(a1 + 168);
  v14 = *((_QWORD *)v13 + 2);
  v15 = *((_QWORD *)v13 + 1);
  if ( v14 == v15 )
    return 3LL;
  v16 = *v13;
  if ( (*v13 & 0x400) != 0
    && ((v16 & 0x800) != 0 && v14 >= 0x100 || *(_QWORD *)(v6 + 136) <= (unsigned __int64)(*((_QWORD *)v13 + 6) - v15)) )
  {
    return 3LL;
  }
  if ( (v16 & 0x1000) == 0 )
    **(_QWORD **)(v6 + 16) = MiComputeNextWalkPte(a2, v9);
  v17 = *(_QWORD *)a2;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v17 & 1) != 0
    && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + ((a2 >> 3) & 0x1FF));
      v21 = v17 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v17;
      v17 = v21;
      if ( (v20 & 0x42) != 0 )
        v17 = v21 | 0x42;
    }
  }
  v22 = (_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 && ((v22[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v6, a2)) )
    return 0LL;
  if ( (v22[5] & 0x1000000000LL) == 0 )
  {
    v23 = v22[1];
    if ( v23 > 0 && (unsigned int)MiDemoteCombinedPte(v6, a2, v23 | 0x8000000000000000uLL) == 1 )
      v7 = MI_READ_PTE_LOCK_FREE(a2);
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v25 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v26 = *v25;
    if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v26, v25, v18)
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = *((_QWORD *)&v28->Flink + ((v27 >> 3) & 0x1FF));
        v30 = v26 | 0x20;
        if ( (v29 & 0x20) == 0 )
          v30 = v26;
        v26 = v30;
        if ( (v29 & 0x42) != 0 )
          v26 = v30 | 0x42;
      }
    }
    v24 = HIBYTE(v26) & 0xF;
  }
  else
  {
    LODWORD(v24) = (*(_DWORD *)(48
                              * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x58000000000LL) >> 1) & 7;
  }
  v31 = *(_QWORD *)(a1 + 24);
  v32 = *v13 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v31, v8, (_DWORD)v22, (_DWORD)v13, (v7 >> 5) & 1, (__int64)&v36) )
    goto LABEL_60;
  MiInsertTbFlushEntry(v13 + 14, v8, 1LL, 0LL);
  if ( (*v13 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(v31, a2);
  if ( ++*((_QWORD *)v13 + 2) == *((_QWORD *)v13 + 1) || v13[17] == v13[16] )
  {
    v33 = a1;
    MiTrimWorkingSetBuildup(a1, v13);
    if ( *((_QWORD *)v13 + 2) == *((_QWORD *)v13 + 1) )
      return 3LL;
  }
  else
  {
LABEL_60:
    v33 = a1;
  }
  if ( v36 && (unsigned int)MiInsertVmAccessedEntry(*((_QWORD *)v13 + 30), v8) )
  {
    MiTrimWorkingSetTail(v33);
    return 0LL;
  }
  if ( (unsigned int)v24 < v32 )
    return 0LL;
  if ( ++*((_QWORD *)v13 + 4) < *((_QWORD *)v13 + 5) )
    return 0LL;
  return 3LL;
}
