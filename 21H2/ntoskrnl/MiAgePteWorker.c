/*
 * XREFs of MiAgePteWorker @ 0x1403446E0
 * Callers:
 *     MiAgePte @ 0x140344190 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x14053AE10 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x14053BF00 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x14053C0D0 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiLockSetPfnPriority @ 0x14020900C (MiLockSetPfnPriority.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

unsigned __int64 __fastcall MiAgePteWorker(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6)
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
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rdx
  char v21; // al
  unsigned int v22; // esi
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // al
  unsigned __int8 v25; // r15
  unsigned __int8 v26; // dl
  __int64 v27; // rdx
  char v28; // r8^7

  v6 = a2;
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
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
          v17 = *((_QWORD *)a5 + 7);
        else
          v18 = (a6 & 4) != 0;
        result = MiClearPteAccessed(a1, a4, v6, v17, dword_140C4E868, v18);
        if ( (_DWORD)result )
          ++*((_QWORD *)a5 + 3);
        if ( v17 )
        {
          v20 = qword_140C4DFD0;
          if ( (*(_BYTE *)(v17 + 4) & 2) == 0
            && *(_DWORD *)v17 == 1
            && KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5] )
          {
            v20 = -1LL;
          }
          result = *(unsigned int *)(v17 + 8);
          if ( (*(_DWORD *)(v17 + 12) >= (unsigned int)result || *(_BYTE *)(v17 + 5) || *(_QWORD *)(v17 + 16) > v20)
            && v20 >= 0x400
            && !*(_BYTE *)(v17 + 5) )
          {
            return MiFlushTbList(v17);
          }
        }
        return result;
      }
    }
    else
    {
      MiSetVaAgeList(a1, a3, 1u, 0);
    }
    v16 = *(_BYTE *)(a4 + 35);
    if ( (v16 & 8) == 0 && (v16 & 7u) < 5 )
    {
      MiLockSetPfnPriority(a4, 5);
      v6 = a2;
    }
    goto LABEL_23;
  }
  v21 = *(_BYTE *)(a4 + 35);
  if ( (v21 & 8) != 0 )
    v22 = 5;
  else
    v22 = v21 & 7;
  if ( v11 < 6u )
  {
    if ( v22 < 5 )
    {
      v23 = 6;
LABEL_47:
      MiSetVaAgeList(a1, a3, 1u, v23);
      ++*((_QWORD *)a5 + 2);
      goto LABEL_48;
    }
    if ( (*a5 & 1) != 0 )
    {
      v23 = v11 + 1;
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( (unsigned int)MI_PFN_IS_PROTO(a4) )
    v24 = *((_BYTE *)a5 + 5);
  else
    v24 = *((_BYTE *)a5 + 4);
  v25 = v24;
  if ( !v24 )
    v25 = 7;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 3
    && ((*(_QWORD *)(a4 + 40) >> 60) & 7) == 4
    && (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(a4 + 32) == 1 )
  {
    goto LABEL_75;
  }
  result = *a5;
  if ( (result & 3) != 0 )
  {
    if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v27 = *(_QWORD *)v10;
      result = 0xFFFFF6FB7DBED000uLL;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL )
      {
        result = 0xFFFFF6FB7DBED7F8uLL;
        if ( v10 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          result = MiPteHasShadow();
          if ( (_DWORD)result )
          {
            if ( (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              result = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( result )
              {
                v28 = HIBYTE(v27);
                result = *(_QWORD *)(result + 8 * ((v10 >> 3) & 0x1FF));
                if ( (result & 0x20) == 0 )
                  v28 = HIBYTE(v27);
                HIBYTE(v27) = v28;
                if ( (result & 0x42) != 0 )
                  HIBYTE(v27) = v28;
              }
            }
          }
        }
      }
      v26 = HIBYTE(v27) & 0xF;
    }
    else
    {
      result = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFLL);
      v26 = (*(_BYTE *)(8 * result - 0x58000000000LL) >> 1) & 7;
    }
    if ( v26 >= v25 || v22 < a5[2] )
    {
LABEL_75:
      ++*((_QWORD *)a5 + 4);
      MiInsertTbFlushEntry((__int64)(a5 + 16), a3, 1LL, 0);
      result = a5[18];
      if ( a5[19] == (_DWORD)result )
        return MiFreeWsleList(a1, (__int64)(a5 + 16), 0);
    }
  }
  return result;
}
