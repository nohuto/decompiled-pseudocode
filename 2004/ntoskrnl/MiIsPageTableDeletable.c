/*
 * XREFs of MiIsPageTableDeletable @ 0x140245F90
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x1403EED30 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v25; // esi
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp+8h] BYREF
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( MiGetLeafVa(v5) > 0x7FFFFFFEFFFFLL )
  {
    v28 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( (*(_BYTE *)(v4 + 184) & 7) == 1 )
    {
      if ( (*(_BYTE *)a1 & 4) != 0 )
        MiLockPageTableInternal(v4, v2, 0LL);
      else
        v2 = 0LL;
      v25 = 1;
      while ( 1 )
      {
        v26 = MI_READ_PTE_LOCK_FREE(v5);
        if ( v26 )
        {
          if ( (v26 & 1) == 0 )
            break;
        }
        v5 += 8LL;
        if ( (v5 & 0xFFF) == 0 )
          goto LABEL_35;
      }
      v25 = 0;
LABEL_35:
      if ( v2 )
        MiUnlockPageTableInternal(v4, v2);
      if ( !v25 )
        return 0LL;
    }
  }
  else
  {
    v7 = (unsigned __int64 *)(((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v8 = (unsigned int)((((__int64)((v5 << 25) - v6) >> 16) & 0xFFFFFFE00000uLL) >> 18) + 0x40000000;
    v9 = *v7;
    if ( MiPteInShadowRange((unsigned __int64)v7)
      && (unsigned int)MiPteHasShadow(v11, v10, v12, v13)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v15 = v9 | 0x20;
        v16 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v16 & 0x20) == 0 )
          v15 = v9;
        v9 = v15;
        if ( (v16 & 0x42) != 0 )
          v9 = v15 | 0x42;
      }
    }
    v27 = v9;
    if ( MiPteInShadowRange((unsigned __int64)&v27)
      && (unsigned int)MiPteHasShadow(v18, v17, v19, v20)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v21 )
      {
        v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v27 >> 3) & 0x1FF));
        v23 = v9 | 0x20;
        if ( (v22 & 0x20) == 0 )
          v23 = v9;
        v9 = v23;
        if ( (v22 & 0x42) != 0 )
          v9 = v23 | 0x42;
      }
    }
    if ( (*(_DWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) & 0x3FF0000) != 0 )
      return 0LL;
  }
  return 1LL;
}
