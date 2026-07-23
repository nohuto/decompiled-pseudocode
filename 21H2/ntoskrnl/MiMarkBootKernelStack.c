/*
 * XREFs of MiMarkBootKernelStack @ 0x140A4EC44
 * Callers:
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMarkKernelStack @ 0x1402E3650 (MiMarkKernelStack.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  char *AnyMultiplexedVm; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  _KPROCESS *v9; // rdx
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  _QWORD v13[24]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v13, 0, 0xB8uLL);
  v13[3] = 0LL;
  v4 = 0LL;
  LODWORD(v13[1]) = 20;
  BYTE4(v13[0]) = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v6, v7, v8);
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
        v11 = MI_READ_PTE_LOCK_FREE(a1);
        MiWriteValidPteNewProtection(a1, v11 | 0x8000000000000062uLL);
        MiInsertTbFlushEntry((__int64)v13, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      if ( a1 >= a2 )
        goto LABEL_7;
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
LABEL_10:
    v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v4, 0);
    goto LABEL_4;
  }
LABEL_7:
  MiFlushTbList((__int64)v13, v9);
  if ( v4 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
}
