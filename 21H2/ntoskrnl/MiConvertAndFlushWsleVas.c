/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x14027FD04
 * Callers:
 *     MiEliminateZeroPages @ 0x1406F5BB0 (MiEliminateZeroPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 */

void __fastcall MiConvertAndFlushWsleVas(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // r12
  unsigned __int64 valid; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h]

  if ( *(_DWORD *)(a2 + 12) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 0LL;
    v6 = MiLockWorkingSetShared(a1);
    valid = MiLockLowestValidPageTable(a1, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int64 *)&v14);
    v15 = valid;
    if ( valid == ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v8 = 0LL;
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_17;
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v8 + 24);
        v14 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v14 & 1) != 0 && (MiGetWsleContents(v10, v9) & 0xF) != 0xA )
        {
          v11 = MI_READ_PTE_LOCK_FREE(&v14);
          if ( _bittest64((const signed __int64 *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40), 0x28u)
            || (v12 = *(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8), v12 < 0)
            || !v12 )
          {
            *(_QWORD *)(a2 + 8 * v5 + 24) = *(_QWORD *)(a2 + 8 * v8 + 24);
            v5 = (unsigned int)(v5 + 1);
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a2 + 12) );
      valid = v15;
      if ( (_DWORD)v5 )
      {
        *(_DWORD *)(a2 + 12) = v5;
        MiFreeWsleList(a1, a2, 0LL);
      }
      else
      {
LABEL_17:
        *(_DWORD *)(a2 + 12) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
    MiUnlockPageTableInternal(a1, valid);
    LOBYTE(v13) = v6;
    MiUnlockWorkingSetShared(a1, v13);
  }
}
