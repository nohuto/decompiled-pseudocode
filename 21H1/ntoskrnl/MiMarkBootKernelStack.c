/*
 * XREFs of MiMarkBootKernelStack @ 0x140A40BAC
 * Callers:
 *     MiInitializeKernelStacks @ 0x140A40374 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiMarkKernelStack @ 0x140224B00 (MiMarkKernelStack.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rsi
  _KPROCESS *v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD v12[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v12, 0, 0xB8uLL);
  v12[3] = 0LL;
  v4 = 0LL;
  LODWORD(v12[1]) = 20;
  BYTE4(v12[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( a1 < a2 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_10;
      if ( (a1 & 0xFFF) == 0 )
        break;
LABEL_4:
      MiMarkKernelStack((unsigned __int64 *)a1, 0xFFFFFFFFFFFFFFF0uLL);
      if ( (MiFlags & 0x40000) == 0 )
      {
        v9 = MI_READ_PTE_LOCK_FREE(a1);
        MiWriteValidPteNewProtection(a1, v9 | 0x8000000000000062uLL);
        MiInsertTbFlushEntry((__int64)v12, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      if ( a1 >= a2 )
        goto LABEL_7;
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4, v7);
LABEL_10:
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0LL);
    goto LABEL_4;
  }
LABEL_7:
  MiFlushTbList((__int64)v12, v6);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4, v10);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
