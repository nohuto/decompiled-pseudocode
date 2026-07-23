/*
 * XREFs of MiDeleteVadAwePtes @ 0x14054BD74
 * Callers:
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiDeleteLargeUserPde @ 0x14054FB9C (MiDeleteLargeUserPde.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 */

__int64 __fastcall MiDeleteVadAwePtes(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  int v9; // r8d
  __int64 AweViewPageSize; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx

  v6 = 0LL;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 1;
  if ( (v7 & 1) != 0 )
  {
    v6 = 1LL;
    AweViewPageSize = MiGetAweViewPageSize(a1, v8, 1LL, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL));
    v12 = v11;
    if ( AweViewPageSize )
      v12 = AweViewPageSize;
    if ( v12 != 512 )
      v6 = v11;
  }
  v13 = MiWriteAwePtes(a1, 0, v9, 0, a2, 0);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v15 = v13;
    while ( v14 )
    {
      v15 = v14;
      v14 = *(_QWORD *)(v14 + 16);
    }
    *(_QWORD *)(v15 + 16) = *a3;
    *a3 = v13;
  }
  return v6;
}
