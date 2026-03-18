/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1402D3A8C
 * Callers:
 *     MiEliminateZeroPages @ 0x14062A9D0 (MiEliminateZeroPages.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 v6; // r15
  __int64 i; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 valid; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v11);
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 12); i = (unsigned int)(i + 1) )
      {
        v8 = *(_QWORD *)(a2 + 8 * i + 24);
        v11 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v11 & 1) != 0 && (MiGetWsleContents(v9, v8) & 0xF) != 0xA )
        {
          v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
          if ( (*(_QWORD *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x1000000000LL) != 0
            || *(__int64 *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) <= 0 )
          {
            *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * i + 24);
            v5 = (unsigned int)(v5 + 1);
          }
        }
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
    MiUnlockPageTableInternal(a1);
    MiUnlockWorkingSetShared(a1, v6);
  }
}
