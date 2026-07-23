/*
 * XREFs of MiAppendWsleCluster @ 0x140340820
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiAppendWsleCluster(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // di
  unsigned __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  struct _LIST_ENTRY *v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // rax
  BOOL v24; // esi
  __int64 v25; // rcx
  unsigned int v27; // eax
  unsigned __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned __int64 *)(((((__int64)((_QWORD)a3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = *v6;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
      v13 = v8 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v8;
      v8 = v13;
      if ( (v12 & 0x42) != 0 )
        v8 = v13 | 0x42;
    }
  }
  v14 = HIBYTE(v8) & 0xF | (16 * ((v8 >> 60) & 7));
  v15 = *a3;
  if ( (unsigned __int64)a3 >= v7
    && (unsigned __int64)a3 <= v9
    && (unsigned int)MiPteHasShadow()
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)a3 >> 3) & 0x1FF));
      v18 = v15 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v15;
      v15 = v18;
      if ( (v17 & 0x42) != 0 )
        v15 = v18 | 0x42;
    }
  }
  v28 = v15;
  if ( (unsigned __int64)&v28 >= v7
    && (unsigned __int64)&v28 <= v9
    && (unsigned int)MiPteHasShadow()
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v28 >> 3) & 0x1FF));
      v21 = v15 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v15;
      v15 = v21;
      if ( (v20 & 0x42) != 0 )
        v15 = v21 | 0x42;
    }
  }
  v22 = (unsigned int)MI_PFN_IS_PROTO(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) == 0;
  v23 = *(_QWORD *)(a1 + 8);
  v24 = v22;
  if ( !v23 )
  {
LABEL_42:
    v27 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 24) = v24 | v27;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_BYTE *)(a1 + 28) = v14;
    return 1LL;
  }
  v25 = *(_QWORD *)(a1 + 16);
  if ( a3 != (unsigned __int64 *)(v23 + 8 * v25) || v14 != *(_BYTE *)(a1 + 28) || v22 != (*(_DWORD *)(a1 + 24) & 1) )
  {
    if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
      return 0LL;
    MiTerminateWsleCluster(a1);
    goto LABEL_42;
  }
  *(_QWORD *)(a1 + 16) = v25 + 1;
  return 1LL;
}
