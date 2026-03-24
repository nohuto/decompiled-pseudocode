/*
 * XREFs of MiIsPageTableDeletable @ 0x140305350
 * Callers:
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x1403F49E0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiIsPageTableDeletable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v19; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+40h] [rbp+8h] BYREF
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned __int64)MiGetLeafVa(v6, a2, a3, 0LL) > 0x7FFFFFFEFFFFLL )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v3);
    if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v22) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( (*(_BYTE *)(v5 + 184) & 7) == 1 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        MiLockPageTableInternal(v5, v3, 0LL);
      else
        v3 = 0LL;
      v19 = 1;
      while ( 1 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(v6);
        if ( v20 )
        {
          if ( (v20 & 1) == 0 )
            break;
        }
        v6 += 8LL;
        if ( (v6 & 0xFFF) == 0 )
          goto LABEL_35;
      }
      v19 = 0;
LABEL_35:
      if ( v3 )
        MiUnlockPageTableInternal(v5, v3);
      if ( !v19 )
        return 0LL;
    }
  }
  else
  {
    v9 = (unsigned __int64 *)((((((v6 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v10 = (unsigned int)(((((v6 << 25) - v8) >> 16) & 0xFFFFFFE00000uLL) >> 18) + 0x40000000;
    v11 = *v9;
    if ( (unsigned int)MiPteInShadowRange(v9, v7)
      && (unsigned int)MiPteHasShadow()
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v12 = v11 | 0x20;
        v14 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        if ( (v14 & 0x20) == 0 )
          v12 = v11;
        v11 = v12;
        if ( (v14 & 0x42) != 0 )
          v11 = v12 | 0x42;
      }
    }
    v21 = v11;
    if ( (unsigned int)MiPteInShadowRange(&v21, v12)
      && (unsigned int)MiPteHasShadow()
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v15 )
      {
        v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v21 >> 3) & 0x1FF));
        v17 = v11 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v11;
        v11 = v17;
        if ( (v16 & 0x42) != 0 )
          v11 = v17 | 0x42;
      }
    }
    if ( (*(_DWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
      return 0LL;
  }
  return 1LL;
}
