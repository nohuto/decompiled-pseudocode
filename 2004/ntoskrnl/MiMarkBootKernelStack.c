/*
 * XREFs of MiMarkBootKernelStack @ 0x140A46408
 * Callers:
 *     MiInitializeKernelStacks @ 0x140A45BD0 (MiInitializeKernelStacks.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiMarkKernelStack @ 0x1402B7780 (MiMarkKernelStack.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rsi
  _KPROCESS *v6; // rdx
  unsigned __int8 v7; // r14
  __int64 v8; // rax
  _QWORD v10[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v10[3] = 0LL;
  v4 = 0LL;
  LODWORD(v10[1]) = 20;
  BYTE4(v10[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( a1 < a2 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_10;
      if ( (a1 & 0xFFF) == 0 )
        break;
LABEL_4:
      MiMarkKernelStack(a1, 0xFFFFFFFFFFFFFFF0uLL);
      if ( (MiFlags & 0x40000) == 0 )
      {
        v8 = MI_READ_PTE_LOCK_FREE(a1);
        MiWriteValidPteNewProtection(a1, v8 | 0x8000000000000062uLL);
        MiInsertTbFlushEntry((__int64)v10, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      if ( a1 >= a2 )
        goto LABEL_7;
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
LABEL_10:
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0LL);
    goto LABEL_4;
  }
LABEL_7:
  MiFlushTbList((__int64)v10, v6);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
}
