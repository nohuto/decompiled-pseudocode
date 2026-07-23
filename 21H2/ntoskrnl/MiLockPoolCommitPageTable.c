/*
 * XREFs of MiLockPoolCommitPageTable @ 0x140316120
 * Callers:
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 valid; // rax
  char v12; // al
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v14 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0);
  v7 = v6;
  if ( !v6
    || (memset(v13, 0, sizeof(v13)),
        MiFillPteHierarchy(v5, v13),
        v8 = *((_QWORD *)v13 + v7),
        v9 = *((_QWORD *)v13 + (int)v7 - 1),
        v14 = v9,
        !v8) )
  {
    valid = MiLockLowestValidPageTable(v4, a2, &v14);
    v9 = v14;
    v8 = valid;
    if ( v14 == a2 )
    {
      LODWORD(v7) = 1;
LABEL_5:
      if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
      goto LABEL_6;
    }
    if ( v14 == ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      LODWORD(v7) = 2;
      goto LABEL_10;
    }
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      goto LABEL_5;
    if ( (_DWORD)v7 != 2 )
    {
      LODWORD(v7) = 0;
      goto LABEL_12;
    }
LABEL_10:
    v12 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 < 0 )
        KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
    }
    LODWORD(v7) = (*(_BYTE *)(a1 + 78) & 4) != 0 ? v7 : 0;
LABEL_12:
    if ( (_DWORD)v7 )
      goto LABEL_6;
  }
  if ( v8 )
  {
    MiUnlockPageTableInternal(v4, v8);
    v8 = 0LL;
  }
LABEL_6:
  *(_QWORD *)(a1 + 64) = v8;
  return (unsigned int)v7;
}
