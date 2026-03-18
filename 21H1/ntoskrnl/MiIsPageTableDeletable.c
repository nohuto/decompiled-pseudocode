/*
 * XREFs of MiIsPageTableDeletable @ 0x14029EFC0
 * Callers:
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x1403ED9D0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiIsPageTableDeletable(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v21; // esi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( MiGetLeafVa(v5) > 0x7FFFFFFEFFFFLL )
  {
    v24 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( (*(_BYTE *)(v4 + 184) & 7) == 1 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        MiLockPageTableInternal(v4, v2, 0LL);
      else
        v2 = 0LL;
      v21 = 1;
      while ( 1 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(v5);
        if ( v22 )
        {
          if ( (v22 & 1) == 0 )
            break;
        }
        v5 += 8LL;
        if ( (v5 & 0xFFF) == 0 )
          goto LABEL_35;
      }
      v21 = 0;
LABEL_35:
      if ( v2 )
        MiUnlockPageTableInternal(v4, v2);
      if ( !v21 )
        return 0LL;
    }
  }
  else
  {
    v7 = (unsigned __int64 *)(((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v8 = (unsigned int)((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) + 0x40000000;
    v9 = *v7;
    if ( MiPteInShadowRange((unsigned __int64)v7)
      && (unsigned int)MiPteHasShadow(v11, v10)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = v9 | 0x20;
        v14 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v14 & 0x20) == 0 )
          v13 = v9;
        v9 = v13;
        if ( (v14 & 0x42) != 0 )
          v9 = v13 | 0x42;
      }
    }
    v23 = v9;
    if ( MiPteInShadowRange((unsigned __int64)&v23)
      && (unsigned int)MiPteHasShadow(v16, v15)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v17 )
      {
        v18 = *((_QWORD *)&v17->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF));
        v19 = v9 | 0x20;
        if ( (v18 & 0x20) == 0 )
          v19 = v9;
        v9 = v19;
        if ( (v18 & 0x42) != 0 )
          v9 = v19 | 0x42;
      }
    }
    if ( (*(_DWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
      return 0LL;
  }
  return 1LL;
}
