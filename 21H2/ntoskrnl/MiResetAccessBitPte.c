/*
 * XREFs of MiResetAccessBitPte @ 0x14039B940
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPageTableLocked @ 0x14023B6D8 (MiIsPageTableLocked.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiResetAccessBitsTail @ 0x14039D6D0 (MiResetAccessBitsTail.c)
 *     MiInsertVmAccessedEntry @ 0x14053B640 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // r14
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _LIST_ENTRY *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rcx
  int VaAge; // edx
  int v20; // ebp
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
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
      v10 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v11 = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v7;
      v7 = v11;
      if ( (v10 & 0x42) != 0 )
        v7 = v11 | 0x42;
    }
  }
  v23 = v7;
  if ( (v7 & 0x20) == 0 )
    return 0LL;
  if ( MiPteInShadowRange((unsigned __int64)&v23)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && (v7 & 0x42) == 0 )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v13 = *((_QWORD *)&v12->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF));
      v14 = v7 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v7;
      v7 = v14;
      if ( (v13 & 0x42) != 0 )
        v7 = v14 | 0x42;
    }
  }
  v15 = (_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 )
  {
    if ( (v15[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v5, a2) )
      return 0LL;
  }
  if ( (v15[5] & 0x1000000000LL) == 0 )
  {
    v16 = v15[1];
    if ( v16 > 0 )
      MiDemoteCombinedPte(v5, a2, v16 | 0x8000000000000000uLL);
  }
  v17 = *(_QWORD *)(v3 + 16);
  if ( !v17 || (unsigned __int64)((__int64)(a2 << 25) >> 16) > 0x7FFFFFFEFFFFLL )
  {
    VaAge = (unsigned __int8)MiGetVaAge(v17, (__int64)(a2 << 25) >> 16);
    if ( VaAge == 7 && (unsigned int)MiGetPfnPriority((__int64)v15) < dword_140C4E86C )
    {
      v20 = 0;
    }
    else
    {
      v20 = 1;
      if ( (unsigned int)(VaAge - 1) <= 5 )
        MiSetVaAgeList(v5, (__int64)(a2 << 25) >> 16, 1u, 0);
    }
    v21 = *(_QWORD *)(v3 + 8);
    if ( !(unsigned int)MiClearPteAccessed(v5, (__int64)v15, a2, v21, *(_DWORD *)v3, 0) )
      return 0LL;
    if ( v20 == 1 && *(_DWORD *)v3 )
    {
      if ( !v21 )
      {
        MiLogPageAccess(v5, a2);
        return 0LL;
      }
    }
    else if ( !v21 )
    {
      return 0LL;
    }
    v22 = qword_140C4DFD0;
    if ( (*(_BYTE *)(v21 + 4) & 2) == 0
      && *(_DWORD *)v21 == 1
      && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
    {
      v22 = -1LL;
    }
    if ( (*(_DWORD *)(v21 + 12) >= *(_DWORD *)(v21 + 8) || *(_BYTE *)(v21 + 5) || *(_QWORD *)(v21 + 16) > v22)
      && v22 >= 0x400
      && !*(_BYTE *)(v21 + 5) )
    {
      MiFlushTbList(v21, (_KPROCESS *)v22);
    }
    return 0LL;
  }
  if ( (unsigned int)MiInsertVmAccessedEntry(v17, (__int64)(a2 << 25) >> 16) )
    return MiResetAccessBitsTail(a1);
  return 0LL;
}
