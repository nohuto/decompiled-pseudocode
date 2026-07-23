/*
 * XREFs of MiUpdateOldPte @ 0x14053C7F0
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140311474 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x140313E40 (MiGetVaAge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiInsertVmAccessedEntry @ 0x14053B640 (MiInsertVmAccessedEntry.c)
 *     MiUpdateOldPteWorker @ 0x14053C968 (MiUpdateOldPteWorker.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C9C0 (MiUpdateOldWorkingSetPagesTail.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  unsigned __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 >= 1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 24);
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFLL)
                - 0x58000000000LL);
  if ( !(unsigned int)MiWalkVaCheckCommon(v5, a2, v6, 1, &v11) || MiGetVaAge(v7, (__int64)(a2 << 25) >> 16) != 6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 168);
  if ( (v6[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && ((*(_DWORD *)v8 & 1) == 0 || !MI_PFN_IS_PROTO((__int64)v6)) )
  {
    if ( ((v11 >> 5) & 1) != 0
      && (v9 = *(unsigned int **)(v8 + 208)) != 0LL
      && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v9, (__int64)(a2 << 25) >> 16) )
        return MiUpdateOldWorkingSetPagesTail(a1);
    }
    else if ( ((v11 >> 5) & 1) == 0 )
    {
      MiUpdateOldPteWorker(v5, a2, v6, v8);
    }
  }
  if ( ++*(_QWORD *)(v8 + 16) >= *(_QWORD *)(v8 + 8) )
    return 3LL;
  else
    return 0LL;
}
