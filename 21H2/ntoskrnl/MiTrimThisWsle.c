/*
 * XREFs of MiTrimThisWsle @ 0x140313AF0
 * Callers:
 *     MiTrimPte @ 0x140313650 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x14053C428 (MiTrimPteWorker.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  int v11; // ebx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v15; // rax
  char v16; // r8^7
  char v17; // r10
  unsigned int v18; // ebx
  char v19; // al
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  v11 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v15 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v16 = HIBYTE(v13);
        if ( (v15 & 0x20) == 0 )
          v16 = HIBYTE(v13);
        HIBYTE(v13) = v16;
        if ( (v15 & 0x42) != 0 )
          HIBYTE(v13) = v16;
      }
    }
    v12 = HIBYTE(v13) & 0xF;
  }
  else
  {
    v12 = (*(_DWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL) >> 1) & 7;
  }
  v17 = a5;
  if ( (v11 & 0x60) != 0 )
  {
    if ( !(unsigned int)MI_PFN_IS_PROTO(a3)
      || ((v11 & 0x20) == 0
       || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
       || ((*(_QWORD *)(a3 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a3 + 8) <= 0)
       && !MiLocateCloneAddress(a1 - 1664, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL))
      && ((v11 & 0x40) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0) )
    {
      goto LABEL_37;
    }
    return 1LL;
  }
  v18 = v11 & 0xF;
  if ( !v18 )
    return 1LL;
  v19 = *(_BYTE *)(a3 + 35);
  if ( (v19 & 8) == 0 && (v19 & 7u) < 5 )
    return 1LL;
  if ( v12 < v18 )
    goto LABEL_37;
  if ( (a5 & 1) == 0 )
    return 1LL;
  if ( *((_QWORD *)a4 + 30) && a2 <= 0x7FFFFFFEFFFFLL && a6 )
  {
    *a6 = 1;
    return 0LL;
  }
LABEL_37:
  v21 = 2;
  if ( (v17 & 1) == 0 || a2 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) && a6 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1
      || v12 >= 6
      || (unsigned int)MiGetPfnPriority(a3) >= 5 )
    {
      return 0LL;
    }
    v22 = 1LL;
  }
  else
  {
    v22 = 2LL;
    if ( v12 && v12 < 7 )
    {
      v21 = 0;
      v22 = 0LL;
    }
    if ( v21 == 2 )
      return 0LL;
  }
  v23 = 10 * v22;
  if ( !LOBYTE(a4[2 * v23 + 80]) )
  {
    LOBYTE(a4[2 * v23 + 80]) = 1;
    *(_QWORD *)&a4[2 * v23 + 78] = a2;
  }
  _bittestandset(&a4[2 * v23 + 62], ((unsigned int)v10 >> 3) & 0x1FF);
  return 0LL;
}
