/*
 * XREFs of MiAgePteWorker @ 0x140244AA0
 * Callers:
 *     MiAgePte @ 0x140244550 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x140535700 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x1405367F0 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x1405369C0 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140237D20 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiLockSetPfnPriority @ 0x140314EA0 (MiLockSetPfnPriority.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiAgePteWorker(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // esi
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // dl
  __int64 v12; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v14; // rax
  char v15; // r8^7
  char v16; // al
  __int64 v17; // rbx
  BOOL v18; // eax
  unsigned __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // esi
  unsigned __int8 v22; // dl
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r15
  __int64 v27; // rcx
  unsigned __int8 v28; // dl
  __int64 v29; // rdx
  struct _LIST_ENTRY *v30; // rax
  char v31; // r8^7
  __int64 v32; // rax

  v6 = a2;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v12, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL)
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v15 = HIBYTE(v12);
        if ( (v14 & 0x20) == 0 )
          v15 = HIBYTE(v12);
        HIBYTE(v12) = v15;
        if ( (v14 & 0x42) != 0 )
          HIBYTE(v12) = v15;
      }
    }
    v11 = HIBYTE(v12) & 0xF;
  }
  else
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (unsigned __int8)(v11 - 1) > 5u )
    {
      if ( v11 == 7 )
      {
LABEL_23:
        v17 = 0LL;
        v18 = 0;
        if ( (a6 & 2) != 0 )
          v17 = *(_QWORD *)(a5 + 56);
        else
          v18 = (a6 & 4) != 0;
        if ( (unsigned int)MiClearPteAccessed(a1, a4, v6, v17, dword_140C4E628, v18) )
          ++*(_QWORD *)(a5 + 24);
        if ( v17 )
        {
          v19 = qword_140C4DD90;
          if ( (*(_BYTE *)(v17 + 4) & 2) == 0
            && *(_DWORD *)v17 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v19 = -1LL;
          }
          if ( (*(_DWORD *)(v17 + 12) >= *(_DWORD *)(v17 + 8) || *(_BYTE *)(v17 + 5) || *(_QWORD *)(v17 + 16) > v19)
            && v19 >= 0x400
            && !*(_BYTE *)(v17 + 5) )
          {
            MiFlushTbList(v17, (_KPROCESS *)v19);
          }
        }
        return;
      }
    }
    else
    {
      MiSetVaAgeList(a1, a3, 1u, 0);
    }
    v16 = *(_BYTE *)(a4 + 35);
    if ( (v16 & 8) == 0 && (v16 & 7u) < 5 )
    {
      MiLockSetPfnPriority(a4, 5LL);
      v6 = a2;
    }
    goto LABEL_23;
  }
  v20 = *(_BYTE *)(a4 + 35);
  if ( (v20 & 8) != 0 )
    v21 = 5;
  else
    v21 = v20 & 7;
  if ( v11 < 6u )
  {
    if ( v21 < 5 )
    {
      v22 = 6;
LABEL_47:
      MiSetVaAgeList(a1, a3, 1u, v22);
      ++*(_QWORD *)(a5 + 16);
      goto LABEL_48;
    }
    if ( (*(_DWORD *)a5 & 1) != 0 )
    {
      v22 = v11 + 1;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( (unsigned int)MI_PFN_IS_PROTO(a4) )
    v25 = *(_BYTE *)(a5 + 5);
  else
    v25 = *(_BYTE *)(a5 + 4);
  v26 = v25;
  v27 = 7LL;
  if ( !v25 )
    v26 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 3 && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4 )
  {
    v27 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a4 + 32) == 1 )
      goto LABEL_75;
  }
  if ( (*(_DWORD *)a5 & 3) != 0 )
  {
    if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v29 = *(_QWORD *)v10;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL
        && v10 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v27, v29, v23, v24)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v30 )
        {
          v31 = HIBYTE(v29);
          v32 = *((_QWORD *)&v30->Flink + ((v10 >> 3) & 0x1FF));
          if ( (v32 & 0x20) == 0 )
            v31 = HIBYTE(v29);
          HIBYTE(v29) = v31;
          if ( (v32 & 0x42) != 0 )
            HIBYTE(v29) = v31;
        }
      }
      v28 = HIBYTE(v29) & 0xF;
    }
    else
    {
      v28 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
    }
    if ( v28 >= v26 || v21 < *(_DWORD *)(a5 + 8) )
    {
LABEL_75:
      ++*(_QWORD *)(a5 + 32);
      MiInsertTbFlushEntry(a5 + 64, a3, 1LL, 0LL);
      if ( *(_DWORD *)(a5 + 76) == *(_DWORD *)(a5 + 72) )
        MiFreeWsleList(a1, a5 + 64, 0LL);
    }
  }
}
