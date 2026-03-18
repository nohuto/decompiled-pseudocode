/*
 * XREFs of MiTrimThisWsle @ 0x14029FEB0
 * Callers:
 *     MiTrimPte @ 0x14029FA10 (MiTrimPte.c)
 *     MiTrimPteWorker @ 0x1405366C8 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  char v18; // r10
  unsigned int v19; // ebx
  char v20; // al
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  v11 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v14)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v17 = v14 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v14;
        v14 = v17;
        if ( (v16 & 0x42) != 0 )
          v14 = v17 | 0x42;
      }
    }
    v12 = HIBYTE(v14) & 0xF;
    v13 = (unsigned int)v12;
  }
  else
  {
    v13 = (*(_DWORD *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL) >> 1) & 7;
  }
  v18 = a5;
  if ( (v11 & 0x60) != 0 )
  {
    if ( !(unsigned int)MI_PFN_IS_PROTO(a3, v12, v13)
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
  v19 = v11 & 0xF;
  if ( !v19 )
    return 1LL;
  v20 = *(_BYTE *)(a3 + 35);
  if ( (v20 & 8) == 0 && (v20 & 7u) < 5 )
    return 1LL;
  if ( (unsigned int)v13 < v19 )
    goto LABEL_37;
  if ( (a5 & 1) == 0 )
    return 1LL;
  if ( *((_QWORD *)a4 + 30) && a2 <= 0x7FFFFFFEFFFFLL && a6 )
  {
    *a6 = 1;
    return 0LL;
  }
LABEL_37:
  v22 = 2;
  if ( (v18 & 1) == 0 || a2 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) && a6 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1
      || (unsigned int)v13 >= 6
      || (unsigned int)MiGetPfnPriority(a3) >= 5 )
    {
      return 0LL;
    }
    v23 = 1LL;
  }
  else
  {
    v23 = 2LL;
    if ( (_DWORD)v13 && (unsigned int)v13 < 7 )
    {
      v22 = 0;
      v23 = 0LL;
    }
    if ( v22 == 2 )
      return 0LL;
  }
  v24 = 10 * v23;
  if ( !LOBYTE(a4[2 * v24 + 80]) )
  {
    LOBYTE(a4[2 * v24 + 80]) = 1;
    *(_QWORD *)&a4[2 * v24 + 78] = a2;
  }
  _bittestandset(&a4[2 * v24 + 62], ((unsigned int)v10 >> 3) & 0x1FF);
  return 0LL;
}
