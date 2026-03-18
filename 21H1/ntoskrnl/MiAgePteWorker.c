/*
 * XREFs of MiAgePteWorker @ 0x14029DAD0
 * Callers:
 *     MiAgePte @ 0x14029D580 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x1405350B0 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x1405361A0 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x140536370 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockSetPfnPriority @ 0x1403441E0 (MiLockSetPfnPriority.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiAgePteWorker(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // esi
  unsigned __int64 Flink; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rbx
  BOOL v17; // eax
  unsigned __int64 v18; // rdx
  char v19; // al
  unsigned int v20; // esi
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r15
  __int64 v24; // rcx
  unsigned __int8 v25; // dl
  unsigned __int64 v26; // rdx
  struct _LIST_ENTRY *v27; // rax
  char v28; // r8^7
  __int64 v29; // rax

  v6 = a2;
  Flink = 0xFFFFF6FB7DBED7F8uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FFFFFFFFFFuLL, v13)
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *(_QWORD *)(Flink + 8 * ((v11 >> 3) & 0x1FF));
        Flink = v13 | 0x20;
        if ( (v14 & 0x20) == 0 )
          Flink = v13;
        v13 = Flink;
        if ( (v14 & 0x42) != 0 )
          v13 = Flink | 0x42;
      }
    }
    v12 = HIBYTE(v13);
    LOBYTE(v12) = v12 & 0xF;
  }
  else
  {
    v11 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(unsigned __int8 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v11) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    LOBYTE(v12) = ((unsigned __int8)v12 >> 1) & 7;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (unsigned __int8)(v12 - 1) > 5u )
    {
      if ( (_BYTE)v12 == 7 )
      {
LABEL_23:
        v16 = 0LL;
        v17 = 0;
        if ( (a6 & 2) != 0 )
          v16 = *(_QWORD *)(a5 + 56);
        else
          v17 = (a6 & 4) != 0;
        if ( (unsigned int)MiClearPteAccessed(a1, a4, v6, v16, dword_140C4E768, v17) )
          ++*(_QWORD *)(a5 + 24);
        if ( v16 )
        {
          v18 = qword_140C4DED0;
          if ( (*(_BYTE *)(v16 + 4) & 2) == 0
            && *(_DWORD *)v16 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v18 = -1LL;
          }
          if ( (*(_DWORD *)(v16 + 12) >= *(_DWORD *)(v16 + 8) || *(_BYTE *)(v16 + 5) || *(_QWORD *)(v16 + 16) > v18)
            && v18 >= 0x400
            && !*(_BYTE *)(v16 + 5) )
          {
            MiFlushTbList(v16, (_KPROCESS *)v18);
          }
        }
        return;
      }
    }
    else
    {
      MiSetVaAgeList(a1, a3, 1u, 0);
    }
    v15 = *(_BYTE *)(a4 + 35);
    if ( (v15 & 8) == 0 && (v15 & 7u) < 5 )
    {
      MiLockSetPfnPriority(a4, 5LL);
      v6 = a2;
    }
    goto LABEL_23;
  }
  v19 = *(_BYTE *)(a4 + 35);
  if ( (v19 & 8) != 0 )
    v20 = 5;
  else
    v20 = v19 & 7;
  if ( (unsigned __int8)v12 < 6u )
  {
    if ( v20 < 5 )
    {
      v21 = 6;
LABEL_47:
      MiSetVaAgeList(a1, a3, 1u, v21);
      ++*(_QWORD *)(a5 + 16);
      goto LABEL_48;
    }
    if ( (*(_DWORD *)a5 & 1) != 0 )
    {
      v21 = v12 + 1;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( (unsigned int)MI_PFN_IS_PROTO(a4, v12, Flink) )
    v22 = *(_BYTE *)(a5 + 5);
  else
    v22 = *(_BYTE *)(a5 + 4);
  v23 = v22;
  v24 = 7LL;
  if ( !v22 )
    v23 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 3 && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4 )
  {
    v24 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a4 + 32) == 1 )
      goto LABEL_75;
  }
  if ( (*(_DWORD *)a5 & 3) != 0 )
  {
    if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v26 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v24, v26)
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v27 )
        {
          v28 = HIBYTE(v26);
          v29 = *((_QWORD *)&v27->Flink + ((v11 >> 3) & 0x1FF));
          if ( (v29 & 0x20) == 0 )
            v28 = HIBYTE(v26);
          HIBYTE(v26) = v28;
          if ( (v29 & 0x42) != 0 )
            HIBYTE(v26) = v28;
        }
      }
      v25 = HIBYTE(v26) & 0xF;
    }
    else
    {
      v25 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
    }
    if ( v25 >= v23 || v20 < *(_DWORD *)(a5 + 8) )
    {
LABEL_75:
      ++*(_QWORD *)(a5 + 32);
      MiInsertTbFlushEntry(a5 + 64, a3, 1LL, 0);
      if ( *(_DWORD *)(a5 + 76) == *(_DWORD *)(a5 + 72) )
        MiFreeWsleList(a1, a5 + 64, 0);
    }
  }
}
