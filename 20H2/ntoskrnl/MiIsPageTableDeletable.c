/*
 * XREFs of MiIsPageTableDeletable @ 0x140236000
 * Callers:
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x1403F31A0 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiIsPageTableDeletable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r9
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v26; // esi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+40h] [rbp+8h] BYREF
  __int64 v29; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2 << 25 >> 16;
  if ( (unsigned __int64)MiGetLeafVa(v6, a2, a3, 0LL) > 0x7FFFFFFEFFFFLL )
  {
    v29 = MI_READ_PTE_LOCK_FREE(v3);
    if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( (*(_BYTE *)(v5 + 184) & 7) == 1 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        MiLockPageTableInternal(v5, v3, 0LL);
      else
        v3 = 0LL;
      v26 = 1;
      while ( 1 )
      {
        v27 = MI_READ_PTE_LOCK_FREE(v6);
        if ( v27 )
        {
          if ( (v27 & 1) == 0 )
            break;
        }
        v6 += 8LL;
        if ( (v6 & 0xFFF) == 0 )
          goto LABEL_35;
      }
      v26 = 0;
LABEL_35:
      if ( v3 )
        MiUnlockPageTableInternal(v5);
      if ( !v26 )
        return 0LL;
    }
  }
  else
  {
    v8 = (unsigned __int64 *)((((((v6 << 25) - v7) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v9 = (unsigned int)(((((v6 << 25) - v7) >> 16) & 0xFFFFFFE00000uLL) >> 18) + 0x40000000;
    v10 = *v8;
    if ( MiPteInShadowRange((unsigned __int64)v8)
      && (unsigned int)MiPteHasShadow(v12, v11, v13, v14)
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = v10 | 0x20;
        v17 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v17 & 0x20) == 0 )
          v16 = v10;
        v10 = v16;
        if ( (v17 & 0x42) != 0 )
          v10 = v16 | 0x42;
      }
    }
    v28 = v10;
    if ( MiPteInShadowRange((unsigned __int64)&v28)
      && (unsigned int)MiPteHasShadow(v19, v18, v20, v21)
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v22 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v22 )
      {
        v23 = *((_QWORD *)&v22->Flink + (((unsigned __int64)&v28 >> 3) & 0x1FF));
        v24 = v10 | 0x20;
        if ( (v23 & 0x20) == 0 )
          v24 = v10;
        v10 = v24;
        if ( (v23 & 0x42) != 0 )
          v10 = v24 | 0x42;
      }
    }
    if ( (*(_DWORD *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
      return 0LL;
  }
  return 1LL;
}
