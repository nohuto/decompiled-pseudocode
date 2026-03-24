/*
 * XREFs of MiTrimPte @ 0x140308900
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimWorkingSetTail @ 0x140267250 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetBuildup @ 0x1402672B8 (MiTrimWorkingSetBuildup.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIsPageTableLocked @ 0x1402BD028 (MiIsPageTableLocked.c)
 *     MiTrimThisWsle @ 0x140308DA0 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B260 (MiDemoteCombinedPte.c)
 *     MiComputeNextWalkPte @ 0x14053AF68 (MiComputeNextWalkPte.c)
 *     MiInsertVmAccessedEntry @ 0x14053B400 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 Flink, int a3)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  BOOL v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rbx
  struct _LIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rbp
  unsigned __int64 *v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r12
  unsigned int v29; // r14d
  __int64 v30; // rbx
  int v33; // [rsp+80h] [rbp+18h] BYREF

  v33 = 0;
  v4 = Flink;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)Flink;
  v8 = (__int64)(Flink << 25) >> 16;
  v9 = a3 == 0;
  if ( Flink >= 0xFFFFF6FB7DBED000uLL
    && Flink <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *(_QWORD *)(Flink + 8 * ((v4 >> 3) & 0x1FF));
      Flink = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        Flink = v7;
      v7 = Flink;
      if ( (v10 & 0x42) != 0 )
        v7 = Flink | 0x42;
    }
  }
  v11 = *(_QWORD *)(a1 + 168);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = *(_QWORD *)(v11 + 8);
  if ( v12 == v13 )
    return 3LL;
  v14 = *(_DWORD *)v11;
  if ( (*(_DWORD *)v11 & 0x400) != 0
    && ((v14 & 0x800) != 0 && v12 >= 0x100 || *(_QWORD *)(v6 + 136) <= (unsigned __int64)(*(_QWORD *)(v11 + 48) - v13)) )
  {
    return 3LL;
  }
  if ( (v14 & 0x1000) == 0 )
    **(_QWORD **)(v6 + 16) = MiComputeNextWalkPte(v4, v9);
  v15 = *(_QWORD *)v4;
  if ( (unsigned int)MiPteInShadowRange(v4, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + ((v4 >> 3) & 0x1FF));
      v18 = v15 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v15;
      v15 = v18;
      if ( (v17 & 0x42) != 0 )
        v15 = v18 | 0x42;
    }
  }
  v19 = (_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 && ((v19[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v6, v4)) )
    return 0LL;
  if ( (v19[5] & 0x1000000000LL) == 0 )
  {
    v20 = v19[1];
    if ( v20 > 0 && (unsigned int)MiDemoteCombinedPte(v6, v4, v20 | 0x8000000000000000uLL) == 1 )
      v7 = MI_READ_PTE_LOCK_FREE(v4);
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v22 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v23 = *v22;
    if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v25 )
      {
        v26 = *((_QWORD *)&v25->Flink + ((v24 >> 3) & 0x1FF));
        v27 = v23 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v27 = v23;
        v23 = v27;
        if ( (v26 & 0x42) != 0 )
          v23 = v27 | 0x42;
      }
    }
    v21 = HIBYTE(v23) & 0xF;
  }
  else
  {
    LODWORD(v21) = (*(_DWORD *)(48
                              * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x58000000000LL) >> 1) & 7;
  }
  v28 = *(_QWORD *)(a1 + 24);
  v29 = *(_DWORD *)v11 & 0xF;
  if ( !(unsigned int)MiTrimThisWsle(v28, v8, (_DWORD)v19, v11, (v7 >> 5) & 1, (__int64)&v33) )
    goto LABEL_60;
  MiInsertTbFlushEntry(v11 + 56, v8, 1LL, 0LL);
  if ( (*(_DWORD *)v11 & 0x10) != 0 )
    MI_WSLE_LOG_ACCESS(v28, v4);
  if ( ++*(_QWORD *)(v11 + 16) == *(_QWORD *)(v11 + 8) || *(_DWORD *)(v11 + 68) == *(_DWORD *)(v11 + 64) )
  {
    v30 = a1;
    MiTrimWorkingSetBuildup(a1, v11);
    if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(v11 + 8) )
      return 3LL;
  }
  else
  {
LABEL_60:
    v30 = a1;
  }
  if ( v33 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v11 + 240), v8) )
  {
    MiTrimWorkingSetTail(v30);
    return 0LL;
  }
  if ( (unsigned int)v21 < v29 )
    return 0LL;
  if ( ++*(_QWORD *)(v11 + 32) < *(_QWORD *)(v11 + 40) )
    return 0LL;
  return 3LL;
}
