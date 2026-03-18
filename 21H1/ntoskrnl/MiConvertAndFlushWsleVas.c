/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x140305480
 * Callers:
 *     MiEliminateZeroPages @ 0x14063C5F0 (MiEliminateZeroPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  __int64 v7; // r8
  unsigned __int64 valid; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v13);
    v14 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v9 = 0LL;
      if ( *(_DWORD *)(a2 + 12) )
      {
        do
        {
          v10 = *(_QWORD *)(a2 + 8 * v9 + 24);
          v13 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v13 & 1) != 0 && (MiGetWsleContents(v11, v10) & 0xF) != 0xA )
          {
            v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
            if ( (*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x1000000000LL) != 0
              || *(__int64 *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) <= 0 )
            {
              *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v9 + 24);
              v5 = (unsigned int)(v5 + 1);
            }
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)(a2 + 12) );
        valid = v14;
      }
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0);
      }
      else
      {
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1, valid, v7);
    MiUnlockWorkingSetShared(a1, v6);
  }
}
