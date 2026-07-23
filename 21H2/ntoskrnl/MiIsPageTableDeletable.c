/*
 * XREFs of MiIsPageTableDeletable @ 0x1403100A0
 * Callers:
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x1403F49E0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiIsPageTableDeletable(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v17; // esi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned __int64)MiGetLeafVa(v5) > 0x7FFFFFFEFFFFLL )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( (*(_BYTE *)(v4 + 184) & 7) == 1 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        MiLockPageTableInternal(v4, v2, 0);
      else
        v2 = 0LL;
      v17 = 1;
      while ( 1 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(v5);
        if ( v18 )
        {
          if ( (v18 & 1) == 0 )
            break;
        }
        v5 += 8LL;
        if ( (v5 & 0xFFF) == 0 )
          goto LABEL_35;
      }
      v17 = 0;
LABEL_35:
      if ( v2 )
        MiUnlockPageTableInternal(v4, v2);
      if ( !v17 )
        return 0LL;
    }
  }
  else
  {
    v7 = (unsigned __int64 *)((((((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v8 = (unsigned int)(((((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) + 0x40000000;
    v9 = *v7;
    if ( (unsigned int)MiPteInShadowRange(v7)
      && (unsigned int)MiPteHasShadow()
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = v9 | 0x20;
        v12 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v12 & 0x20) == 0 )
          v11 = v9;
        v9 = v11;
        if ( (v12 & 0x42) != 0 )
          v9 = v11 | 0x42;
      }
    }
    v19 = v9;
    if ( (unsigned int)MiPteInShadowRange(&v19)
      && (unsigned int)MiPteHasShadow()
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v13 )
      {
        v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v19 >> 3) & 0x1FF));
        v15 = v9 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v15 = v9;
        v9 = v15;
        if ( (v14 & 0x42) != 0 )
          v9 = v15 | 0x42;
      }
    }
    if ( (*(_DWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
      return 0LL;
  }
  return 1LL;
}
