/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x140342ED0
 * Callers:
 *     MiEliminateZeroPages @ 0x1406074A0 (MiEliminateZeroPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 valid; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v12);
    v13 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(a2 + 12) )
      {
        do
        {
          v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
          v12 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v12 & 1) != 0 && (MiGetWsleContents(v10, v9) & 0xF) != 0xA )
          {
            v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
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
        valid = v13;
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
    MiUnlockPageTableInternal(a1, valid);
    MiUnlockWorkingSetShared(a1, v6);
  }
}
