/*
 * XREFs of MiAgePteWorker @ 0x140332670
 * Callers:
 *     MiAgePte @ 0x140332110 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x14045BA70 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x140596EA0 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x140596FF0 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiSetVaAgeList @ 0x1403171A0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x140332A80 (MiClearPteAccessed.c)
 */

void __fastcall MiAgePteWorker(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 Process; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // cl
  char v16; // si
  char v17; // al
  unsigned int v18; // r14d
  __int64 v19; // rcx
  unsigned __int8 v20; // r15
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // cl
  __int64 v23; // rbx
  char v24; // al
  BOOL v25; // eax
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  struct _LIST_ENTRY *Flink; // rax
  char v30; // r8^7
  __int64 v31; // rax

  Process = 0xFFFFF68000000000uLL;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v14 & 1) != 0 && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v11 = *(_QWORD *)(Process + 1928);
        if ( v11 )
        {
          v28 = *(_QWORD *)(v11 + 8 * ((v13 >> 3) & 0x1FF));
          v11 = v14 | 0x20;
          Process = (unsigned __int8)v28;
          LOBYTE(Process) = v28 & 0x20;
          if ( (v28 & 0x20) == 0 )
            v11 = *(_QWORD *)v13;
          HIBYTE(v14) = HIBYTE(v11);
          if ( (v28 & 0x42) != 0 )
            HIBYTE(v14) = HIBYTE(v11);
        }
      }
    }
    v15 = HIBYTE(v14) & 0xF;
  }
  else
  {
    v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v13) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 1) & 7;
  }
  v16 = a6;
  if ( (a6 & 1) == 0 )
  {
    v17 = *(_BYTE *)(a4 + 35);
    if ( (v17 & 8) != 0 )
      v18 = 5;
    else
      v18 = v17 & 7;
    if ( v15 >= 6u )
      goto LABEL_10;
    if ( v18 < 5 )
    {
      v27 = 6;
    }
    else
    {
      if ( (*(_DWORD *)a5 & 1) == 0 )
      {
LABEL_10:
        v19 = *(_QWORD *)(a4 + 40);
        if ( v19 >= 0 )
          v20 = *(_BYTE *)(a5 + 4);
        else
          v20 = *(_BYTE *)(a5 + 5);
        if ( !v20 )
          v20 = 7;
        if ( (*(_BYTE *)(a1 + 184) & 7) == 3
          && (((unsigned __int64)v19 >> 60) & 7) == 4
          && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
          && *(_WORD *)(a4 + 32) == 1 )
        {
          goto LABEL_56;
        }
        if ( (*(_DWORD *)a5 & 3) != 0 )
        {
          if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v21 = *(_QWORD *)v13;
            if ( v13 >= 0xFFFFF6FB7DBED000uLL
              && v13 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v30 = HIBYTE(*(_QWORD *)v13);
                v31 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
                if ( (v31 & 0x20) == 0 )
                  v30 = HIBYTE(*(_QWORD *)v13);
                HIBYTE(v21) = v30;
                if ( (v31 & 0x42) != 0 )
                  HIBYTE(v21) = v30;
              }
            }
            v22 = HIBYTE(v21) & 0xF;
          }
          else
          {
            v22 = (*(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v13) >> 12) & 0xFFFFFFFFFFLL)
                            - 0x220000000000LL) >> 1) & 7;
          }
          if ( v22 >= v20 || v18 < *(_DWORD *)(a5 + 8) )
          {
LABEL_56:
            ++*(_QWORD *)(a5 + 32);
            MiInsertTbFlushEntry(a5 + 64, a3, 1LL, 0);
            if ( *(_DWORD *)(a5 + 76) == *(_DWORD *)(a5 + 72) )
              MiFreeWsleList(a1, a5 + 64, 0);
          }
        }
        return;
      }
      v27 = v15 + 1;
    }
    MiSetVaAgeList(a1, a3, 1u, v27);
    ++*(_QWORD *)(a5 + 16);
    goto LABEL_10;
  }
  v23 = 0LL;
  if ( (unsigned __int8)(v15 - 1) <= 5u )
  {
    MiSetVaAgeList(a1, a3, 1u, 0);
LABEL_24:
    v24 = *(_BYTE *)(a4 + 35);
    if ( (v24 & 8) == 0 && (v24 & 7u) < 5 )
    {
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6, Process, v11, v12);
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      *(_BYTE *)(a4 + 35) = *(_BYTE *)(a4 + 35) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    goto LABEL_26;
  }
  if ( v15 != 7 )
    goto LABEL_24;
LABEL_26:
  v25 = 0;
  if ( (v16 & 2) != 0 )
    v23 = *(_QWORD *)(a5 + 56);
  else
    v25 = (v16 & 4) != 0;
  if ( (unsigned int)MiClearPteAccessed(a1, a4, a2, v23, dword_140C52B68, v25) )
    ++*(_QWORD *)(a5 + 24);
  if ( v23 )
  {
    v26 = qword_140C507D0;
    if ( (*(_BYTE *)(v23 + 4) & 2) == 0
      && *(_DWORD *)v23 == 1
      && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
    {
      v26 = -1LL;
    }
    if ( (*(_DWORD *)(v23 + 12) >= *(_DWORD *)(v23 + 8) || *(_BYTE *)(v23 + 5) || *(_QWORD *)(v23 + 16) > v26)
      && v26 >= 0x400
      && !*(_BYTE *)(v23 + 5) )
    {
      MiFlushTbList(v23);
    }
  }
}
