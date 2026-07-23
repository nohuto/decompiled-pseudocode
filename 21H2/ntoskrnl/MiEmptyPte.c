/*
 * XREFs of MiEmptyPte @ 0x1403111D0
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x140311284 (MiEmptyWorkingSetHelper.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiEmptyPte(__int64 a1, __int64 a2, int a3)
{
  int *v3; // rsi
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(int **)(a1 + 168);
  v6 = *v3;
  if ( (*v3 & 2) != 0 )
  {
    if ( a3 )
      return 0LL;
    v9 = MI_READ_PTE_LOCK_FREE(a2);
    v7 = MI_READ_PTE_LOCK_FREE(&v9);
    if ( (unsigned int)MI_PFN_IS_PROTO(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      return 0LL;
LABEL_7:
    MiEmptyWorkingSetHelper(*(_QWORD *)(a1 + 24), a2, v3 + 2, v6 & 4);
    return 0LL;
  }
  if ( (v6 & 1) == 0 || !a3 )
    goto LABEL_7;
  return 0LL;
}
