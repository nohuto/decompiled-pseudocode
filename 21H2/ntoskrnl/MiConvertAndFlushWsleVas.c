/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x14025EA8C
 * Callers:
 *     MiEliminateZeroPages @ 0x14063B370 (MiEliminateZeroPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // r15
  unsigned __int64 valid; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v13);
    v14 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(a2 + 12) )
      {
        do
        {
          v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
          v13 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v13 & 1) != 0 && (MiGetWsleContents(v10, v9) & 0xF) != 0xA )
          {
            v11 = MI_READ_PTE_LOCK_FREE(&v13);
            if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x1000000000LL) != 0
              || *(__int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) <= 0 )
            {
              *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v8 + 24);
              v5 = (unsigned int)(v5 + 1);
            }
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *(_DWORD *)(a2 + 12) );
        valid = v14;
      }
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0LL);
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
    MiUnlockPageTableInternal(a1, valid);
    LOBYTE(v12) = v6;
    MiUnlockWorkingSetShared(a1, v12);
  }
}
